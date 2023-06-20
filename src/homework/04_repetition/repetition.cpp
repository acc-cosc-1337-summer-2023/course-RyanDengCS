//write include statement for decisions header
#include "repetition.h"

//Write code for function(s) code here
double get_gc_content(const std::string& var)
{
    //loop through string, count Cs and Gs,
    //divide count by size of string, remember double and int conversions.

    //variables
    double count = 0;
    double size = 0;
    double result = 0;
    
    for (char i : var) {
        size++;
        if(i == 'C' || i == 'G'){
            count++;
        }
    }
    result = (count/size) * 100.0;
    return result;
}