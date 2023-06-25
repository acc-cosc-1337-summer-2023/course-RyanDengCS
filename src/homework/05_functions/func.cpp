//add include statements
#include "func.h"
#include <bits/stdc++.h>
//add function code here

int get_vector_max_value(const vector<int> &vec){
    //variables
    int max = vec[0];

    for (const auto& i : vec)
    {
        if(i > max)
        {
            max = i;
        }
    }
    
    return max;
}

vector<int> get_square_of_each_element(const vector<int> &vec){
    //variables
    vector<int> result;

    for (const auto& i : vec)
    {
        result.push_back(i*i);
    }

    return result;
}