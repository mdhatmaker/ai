//
//  tools.hpp
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/8/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#ifndef tools_hpp
#define tools_hpp

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

namespace tools
{
    
    template <typename T>
    void print(vector<T> vec)
    {
        for (auto n : vec) {
            cout << n << " ";
        }
        cout << endl;
    }

    
    float random_real();

    vector<string> read_data_file(string filename);
    vector<string> tokenize(string);
    vector<string> split(const string &s, char delim);
    
} // namespace tools

#endif /* tools_hpp */
