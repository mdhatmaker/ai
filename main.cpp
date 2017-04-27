//
//  main.cpp
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/7/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//


#include "mlp.h"
#include "Matrix.h"
#include "TrainingItem.h"
#include "Perceptron.h"
#include "neural_net.h"
#include "tools.h"
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <cmath>
#include <map>
#include <sstream>
//#include <iterator>


using namespace std;
using namespace tools;


void nlp_test()
{
    const string folder = "/Users/michael/myprojects/CPP/MoreTestCpp/MoreTestCpp/";

    /*int layers2[] = {1,5,1};
    MultiLayerPerceptron mlp2(3,layers2);
    mlp2.Run("sin.dat",500);*/

    string str;
    int layers1[] = {2,2,1};
    MultiLayerPerceptron mlp1(3,layers1);
    str = folder + "xor.dat";
    const char *c1 = str.c_str();
    mlp1.Run(c1,10000);

    int layers[] = {1,5,1};
    MultiLayerPerceptron mlp(3,layers);
    str = folder + "sin.dat";
    const char *c2 = str.c_str();
    mlp.Run(c2,500);

    /*double* input = new double[1]{0.54325};
     double* output = new double[1];
     double* target = new double[1];
     target[0] = sin(input[0]);
     mlp.Simulate(input, output, target, false);*/
}


int main(int argc, const char * argv[])
{

    const string folder = "/Users/michael/myprojects/CPP/MoreTestCpp/MoreTestCpp/";
    
    // Test converting from NN output to class id (and vice-versa)
    auto output_matrix = Matrix<int>({{1, 0, 0}, {0, 1, 0}, {0, 0, 1}});
    auto class_matrix = output_to_class(output_matrix);
    output_matrix.print();
    class_matrix.print();
    auto cm = Matrix<int>({{1}, {3}, {2}, {5}, {4}});
    auto om = class_to_output(cm);
    om.print();

    // Each row has seven entries, separated by tabs. The first four entries are features of
    // irises (sepal length, sepal width, petal length, and petal width); the last three is
    // the outputs denoting the species of iris (setosa, versicolor, and virginica).
    vector<string> training_data = read_data_file(folder + "iris_training.dat");
    //vector<string> tokens = tokenize(training_data[0]);
    vector<string> validation_data = read_data_file(folder + "iris_validation.dat");
    vector<string> test_data = read_data_file(folder + "iris_test.dat");
    
    auto random_matrix = initialize_weights(4, 3, 5.0);
    random_matrix.print();
    

    
    
    return 0;
}
