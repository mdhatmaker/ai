//
//  Perceptron.cpp
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/12/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#include "Perceptron.h"
#include <cassert>

void ANDPerceptron()
{
    cout << "Training AND Perceptron..." << endl;
    
    vector<TrainingItem> training_set =
    {
        TrainingItem(false, { 1, 0, 0 }),
        TrainingItem(false, { 1, 0, 1 }),
        TrainingItem(false, { 1, 1, 0 }),
        TrainingItem(true, { 1, 1, 1 })
    };
    
    Perceptron perceptron(3);
    
    perceptron.train(training_set, 43);
    
    assert(perceptron.get_result({ 1, 0, 0 }) == false);
    assert(perceptron.get_result({ 1, 0, 1 }) == false);
    assert(perceptron.get_result({ 1, 1, 0 }) == false);
    assert(perceptron.get_result({ 1, 1, 1 }) == true);
    cout << "Successfully trained!" << endl;
    cout << endl;
}

void NANDPerceptron()
{
    cout << "Training NAND Perceptron..." << endl;
    
    vector<TrainingItem> training_set =
    {
        TrainingItem(true, { 1, 0, 0 }),
        TrainingItem(true, { 1, 0, 1 }),
        TrainingItem(true, { 1, 1, 0 }),
        TrainingItem(false, { 1, 1, 1 })
    };
    
    Perceptron perceptron(3);
    
    perceptron.train(training_set, 29);
    
    assert(perceptron.get_result({ 1, 0, 0 }) == true);
    assert(perceptron.get_result({ 1, 0, 1 }) == true);
    assert(perceptron.get_result({ 1, 1, 0 }) == true);
    assert(perceptron.get_result({ 1, 1, 1 }) == false);
    cout << "Successfully trained!" << endl;
    cout << endl;
}

void TumorDetectionPerceptron()
{
    cout << "Training Custom Perceptron..." << endl;
    
    vector<TrainingItem> training_set =
    {
        /**
         * false = benign
         * true = !false (malign)
         * Tumor size.
         **/
        TrainingItem(false, { 1, 0.1 }),
        TrainingItem(false, { 1, 0.2 }),
        TrainingItem(false, { 1, 0.3 }),
        TrainingItem(true, { 1, 0.4 }),
        TrainingItem(true, { 1, 0.5 }),
        TrainingItem(true, { 1, 0.6 }),
    };
    
    Perceptron perceptron(2);
    
    perceptron.train(training_set, 72);
    
    assert(perceptron.get_result({ 1, 0.1 }) == false);
    assert(perceptron.get_result({ 1, 0.2 }) == false);
    assert(perceptron.get_result({ 1, 0.3 }) == false);
    assert(perceptron.get_result({ 1, 0.4 }) == true);
    assert(perceptron.get_result({ 1, 0.5 }) == true);
    assert(perceptron.get_result({ 1, 0.6 }) == true);
    assert(perceptron.get_result({ 1, 0.7 }) == true);
    
    cout << "Successfully trained!" << endl;
    cout << endl;
    
    cout << "get_result({ 1, 0.25 }) = " << perceptron.get_result({ 1, 0.25 }) << endl;
    cout << "get_result({ 1, 0.75 }) = " << perceptron.get_result({ 1, 0.75 }) << endl;
}

void perceptron_test()
{
    cout << "Single Layer Perceptron (SLP)  Copyright 2015  Jean Pierre Dudey" << endl;
    cout << "This program comes with ABSOLUTELY NO WARRANTY." << endl;
    cout << "This is free software, and you are welcome to redistribute it under certain conditions." << endl;
    cout << endl;
    
    ANDPerceptron();
    NANDPerceptron();
    /*ORPerceptron();
     NORPerceptron();
     NOTPerceptron();*/
    
    TumorDetectionPerceptron();
}

int Perceptron_Struct_Main()
{
    double total;
    double sub_output;
    Perceptron_Struct prpMain;
    prpMain.Bias = 3;
    prpMain.Threshold = 0.6;
    prpMain.Weight[0] = 0.2;
    prpMain.Weight[1] = 0.3;
    for (int i = 0; i < 2; i++)
    {
        //prpMain.Input[i] =
    }
    
    do {
        sub_output = 1/(1 + exp(-(total * prpMain.Threshold)));
        if (sub_output >= prpMain.Threshold) {
            prpMain.firing = true;
            cout << "It fired \n " << sub_output;
            
        }
        else {
            prpMain.firing = false;
            cout << "It didn't fire";
            for (int j = 0; j < 2; j++) {
                prpMain.Weight[j] = prpMain.Input[j] * (prpMain.Threshold - sub_output);
            }
            total = 0.0;
            for (int k = 0; k < 2; k++) {
                total = total + (prpMain.Input[k] * prpMain.Weight[k]);
            }
        }
    } while (prpMain.firing == false);
    
    system("PAUSE");
    
    return 0;
}
