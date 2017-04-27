//
//  neural_net.h
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/11/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#ifndef neural_net_hpp
#define neural_net_hpp

#include "Matrix.h"
#include "tools.h"
#include <cmath>

Matrix<int> output_to_class(Matrix<int> output_matrix);
Matrix<int> class_to_output(Matrix<int> class_matrix);

Matrix<float> activation(Matrix<float> m);
Matrix<float> activation_(Matrix<float> m);

Matrix<float> initialize_weights(int rowCount, int colCount, float max_weight);

Matrix<float> feedforward_net(Matrix<float> weights, Matrix<float> inputs, Matrix<int> bias);
Matrix<float> feedforward_output(Matrix<float> net);

#endif /* neural_net_hpp */
