//
//  TrainingItem.hpp
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/12/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#ifndef TrainingItem_hpp
#define TrainingItem_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class TrainingItem
{
public:
    TrainingItem(bool expected_output, const vector<double> &inputs) : output_(expected_output)
    {
        inputs_ = inputs;
    }
    
    bool output() const { return output_; }
    vector<double>& inputs() { return inputs_; }
    
private:
    bool output_;
    vector<double> inputs_;
};


#endif /* TrainingItem_hpp */
