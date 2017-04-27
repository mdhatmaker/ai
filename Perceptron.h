//
//  Perceptron.h
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/12/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#ifndef Perceptron_hpp
#define Perceptron_hpp

#include "TrainingItem.h"
#include <iostream>
#include <vector>
#include <numeric>
#include <stdexcept>
#include <sstream>
#include <cmath>


void perceptron_test();


class Perceptron
{
public:
    Perceptron(int input_count, const double learning_rate = 0.1, const double threshold = 0.5)
    : weights_(input_count)
    {
        learning_rate_ = learning_rate;
        threshold_ = threshold;
    }
    
    double learning_rate() const { return learning_rate_; }
    void learning_rate(const double &learning_rate) { learning_rate_ = learning_rate; }

    double threshold() const { return threshold_; }
    void threshold(const double &threshold) { threshold_ = threshold; }
    
    vector<double>& weights() { return weights_; }
    void weights(const vector<double> &weights) { weights_ = weights; }
    
    void train(vector<TrainingItem>& training_set, unsigned int max_iterations)
    {
        if (max_iterations == 0)
            throw invalid_argument("The maximum number of iterations cannot be 0.");
        
        unsigned int iterations(0);
        while (true) {
            if (iterations > max_iterations)
                break;
            else
                iterations++;
            
            int error_count = 0;
            
            for (auto &item : training_set) {
                bool output = learn(item.output(), item.inputs());
                
                if (output != item.output())
                    error_count++;
            }
            
            if (error_count == 0)
                break;
        }
    }
    
    bool get_result(const vector<double> &inputs)
    {
        if (inputs.size() != weights_.size())
        {
            stringstream ss;
            
            ss << "Invalid number of inputs. Expected: " << weights_.size();
            throw(ss.str());
        }
        
        return dot_product(inputs, weights_) > threshold_;
    }
    
    bool learn(bool expected_result, const vector<double> &inputs)
    {
        bool result = get_result(inputs);
        if (result != expected_result) {
            // Convert boolean to a number
            double error = (expected_result ? 1 : 0) - (result ? 1 : 0);
            for (int i = 0; i < weights_.size(); i++) {
                weights_[i] += learning_rate_ * error * inputs[i];
            }
        }
        return result;
    }
    
private:
    double learning_rate_;
    double threshold_;
    vector<double> weights_;
    
    double dot_product(const vector<double> &v1, vector<double> &v2)
    {
        return inner_product(v1.begin(), v1.end(), v2.begin(), 0);
    }
    
};

struct Perceptron_Struct
{
    static const int MAX_INPUTS = 16;
    
    int Input[MAX_INPUTS];      // up to 16 inputs
    int Bias;                   // bias
    double Weight[MAX_INPUTS];
    double Threshold;
    bool firing;
};

int Perceptron_Struct_Main();

#endif /* Perceptron_hpp */
