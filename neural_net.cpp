//
//  neural_net.cpp
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/11/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#include "neural_net.h"

Matrix<int> output_to_class(Matrix<int> output_matrix)
{
    Matrix<int> m(output_matrix.rcount(), 1);
    
    for (int r = 0; r < output_matrix.rcount(); ++r)
    {
        int to_class = 0;
        for (int c = 0; c < output_matrix.ccount(); ++c)
        {
            if (output_matrix[r][c] == 1)
            {
                to_class = c+1;
                break;
            }
        }
        m[r][0] = to_class;
    }
    return m;
}

Matrix<int> class_to_output(Matrix<int> class_matrix)
{
    int maximum = class_matrix.max();
    
    Matrix<int> m(class_matrix.rcount(), maximum);
    
    for (int r = 0; r < m.rcount(); ++r)
    {
        for (int c = 0; c < m.ccount(); ++c)
        {
            if (class_matrix[r][0] == c+1)
                m[r][c] = 1;
            else
                m[r][c] = 0;
        }
    }
    return m;
}

// Activation function
Matrix<float> activation(Matrix<float> mX)
{
    Matrix<float> m(mX.rcount(), mX.ccount());
    
    for (int r = 0; r < mX.rcount(); ++r)
    {
        for (int c = 0; c < mX.ccount(); ++c)
        {
            m[r][c] = (tanh(mX[r][c]) + 1) / 2.0;
        }
    }
    return m;
}

// Activation derivative function
Matrix<float> activation_(Matrix<float> mX)
{
    Matrix<float> m(mX.rcount(), mX.ccount());
    
    for (int r = 0; r < mX.rcount(); ++r)
    {
        for (int c = 0; c < mX.ccount(); ++c)
        {
            m[r][c] = (1 - pow(tanh(mX[r][c]), 2)) / 2.0;
        }
    }
    return m;
}

Matrix<float> initialize_weights(int rowCount, int colCount, float max_weight)
{
    Matrix<float> m(rowCount, colCount);
    
    for (int r = 0; r < rowCount; ++r)
    {
        for (int c = 0; c < colCount; ++c)
        {
            m[r][c] = tools::random_real() * (2 * max_weight) - max_weight;
        }
    }
    return m;
}

Matrix<float> feedforward_net(Matrix<float> inputs, Matrix<float> weights, Matrix<float> bias)
{
    Matrix<float> concat = inputs.horizontal_concat(bias);
    return weights.multiply(concat);
}

Matrix<float> feedforward_output(Matrix<float> net)
{
    return activation(net);
}

// The function must return the error e, and the classification error c
float calculate_error(Matrix<float> inputs, Matrix<float> weights, Matrix<float> bias, Matrix<int> target_outputs, Matrix<int> target_classes)
{
    auto outputs = feedforward_net(inputs, weights, bias);  // output matrix Z
    
    float sum = 0;
    for (int r = 0; r < outputs.rcount(); ++r)
    {
        for (int c = 0; c < outputs.ccount(); ++c)
        {
            sum += pow(target_outputs[r][c] - outputs[r][c], 2);
        }
    }
    float error = sum / outputs.count(); //(sample_count * output_count);
    
    //auto classes_from_output_vectors = output_to_class(outputs);
    
    //c = sum_all_components(classes != target_classes)/sample_count
    // (Here, our inequality returns a matrix of 0s and 1s, with 1s in positions where
    // the corresponding components in classes and target_classes are not equal.)
    
    return error;
}

Matrix<float> back_propogation(Matrix<float> inputs, Matrix<float> weights, Matrix<float> bias, float learning_rate)
{
    return Matrix<float>(weights);
}

void train(vector<string> training_set, vector<string> validation_set, vector<string> test_set)
{
    int rowCount = 5;
    int colCount = 5;
    Matrix<float> weights = initialize_weights(rowCount, colCount, 0.5);
    
    Matrix<int> bias_training = Matrix<int>(training_set.size(), 1);
    bias_training.set_all(1);
    Matrix<int> bias_validate = Matrix<int>(validation_set.size(), 1);
    bias_validate.set_all(1);
    Matrix<int> bias_test = Matrix<int>(test_set.size(), 1);
    bias_test.set_all(1);
    
    
}
