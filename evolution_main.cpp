//
//  evolution_main.cpp
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/11/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#include "evolution_main.h"
#include "tools.h"
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
using namespace tools;


int calc_fitness(const string source, const string target)
{
    int fitval = 0;
    for (int i = 0; i < source.length(); ++i) {
        fitval += pow(target[i] - source[i], 2);
    }
    return(fitval);
}

int random_pos(const string str)
{
    return rand() % str.length();
}

int random_product_dist(int size)
{
    float wRndNr = random_real() * random_real() * (size - 1);
    return int(wRndNr);
}

string mutate(string& source)
{
    int charpos = random_pos(source);
    char ch = source[charpos];
    if ((rand() % 100) < 50)
        ch += 1;
    else
        ch -= 1;
    
    string str1 = source.substr(0, charpos);
    string str2 = source.substr(charpos+1);
    
    return str1 + string(1, ch) + str2;
}

void simple_mutate(const string _source, const string target)
{
    
    string source = _source;
    
    int fitval = calc_fitness(source, target);
    int i = 0;
    while (true) {
        ++i;
        string m = mutate(source);
        int fitval_m = calc_fitness(m, target);
        if (fitval_m < fitval) {
            fitval = fitval_m;
            source = m;
            //printf( "%5i %5i %14s",  i, fitval_m, m);
            printf( "%5i %5i ",  i, fitval_m);
            cout << m << endl;
            if (fitval == 0)
                break;
        }
    }
}

struct Individual
{
    Individual() { }
    Individual(string _dna, int _fitness) : dna(_dna), fitness(_fitness) { }
    
    string dna;
    int fitness;
};

int randint(int first, int last)
{
    int count = last-first + 1;
    return first + (rand() % count);
}

Individual create_child(Individual parent1, Individual parent2, const string target)
{
    string child_dna = parent1.dna;
    
    // Mix both DNAs (process is called "crossover")
    int start = random_pos(parent2.dna);
    int stop = random_pos(parent2.dna);
    if (start > stop)
        swap(start, stop);
    
    for (int i = start; i <= stop; ++i)
        child_dna[i] = parent2.dna[i];
    
    // Mutate one position
    int charpos = random_pos(child_dna);
    child_dna[charpos] = child_dna[charpos] + randint(-1, 1);
    
    int child_fitness = calc_fitness(child_dna, target);
    
    return Individual(child_dna, child_fitness);
}

bool sortByFitness(const Individual &lhs, const Individual &rhs)
{
    return lhs.fitness < rhs.fitness;
}

// https://www.electricmonk.nl/log/2011/09/28/evolutionary-algorithm-evolving-hello-world/
int evolution_main()
{
    
    string source = "jiKnp4bqpmAbp";
    string target = "Hello, World!";
    simple_mutate(source, target);
    
    // Create a population of random "individuals" (random strings for our example)
    const int POPULATION_SIZE = 20;
    Individual population[POPULATION_SIZE];
    //map<string, int> population;
    for (int i = 0; i < POPULATION_SIZE; ++i) {
        char dna[target.length()];
        for (int j = 0; j < target.length(); ++j) {
            char ch = rand() % (128 - 32);
            dna[j] = ch + 32;
        }
        
        population[i].dna = string(dna);
        population[i].fitness = calc_fitness(population[i].dna, target);
        
        //candidate = {'dna': dna, 'fitness': fitness }
        cout << population[i].dna << "   " << population[i].fitness << endl;
    }
    
    
    int i = 0;
    while (true) {
        sort(begin(population), end(population), sortByFitness);
        
        if (population[0].fitness == 0)
            break;
        
        int r1 = random_product_dist(POPULATION_SIZE);
        int r2 = random_product_dist(POPULATION_SIZE);
        
        Individual parent1 = population[r1];    //random_parent(population);
        Individual parent2 = population[r2];    //random_parent(population);
        
        Individual child = create_child(parent1, parent2, target);
        if (child.fitness < population[POPULATION_SIZE-1].fitness) {
            population[POPULATION_SIZE-1] = child;
            /*for (int j = 0; j < POPULATION_SIZE; ++j) {
             cout << population[j].fitness << "   " << population[j].dna << endl;
             }
             cout << endl;*/
        }
        
        ++i;
    }
    
    cout << "\niterations: " << i << endl;
    cout << population[0].dna << endl;
    
    return 0;
}
