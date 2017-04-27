//
//  tools.cpp
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/8/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#include "tools.h"

namespace tools
{
    
    float random_real()
    {
        float r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
        return r;
    }

    vector<string> read_data_file(string filename)
    {
        vector<string> data;
        
        string line;
        ifstream myfile(filename);
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                cout << line << '\n';
                data.push_back(line);
            }
            myfile.close();
        }
        else
            cout << "Unable to open file";
        
        return data;
    }
    
    vector<string> tokenize(string data_string)
    {
        istringstream iss(data_string);
        /*copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         ostream_iterator<string>(cout, "\n"));*/
        /*vector<string> tokens;
        copy(istream_iterator<string>(iss),
             istream_iterator<string>(),
             back_inserter(tokens));*/
        // Create token vector directly
        vector<string> tokens{istream_iterator<string>{iss}, istream_iterator<string>{}};
        return tokens;
    }
    
    template<typename Out>
    void split(const std::string &s, char delim, Out result) {
        std::stringstream ss;
        ss.str(s);
        std::string item;
        while (std::getline(ss, item, delim)) {
            *(result++) = item;
        }
    }
    
    vector<string> split(const string &s, char delim) {
        vector<string> elems;
        split(s, delim, back_inserter(elems));
        return elems;
    }
    
    
} // namespace tools
