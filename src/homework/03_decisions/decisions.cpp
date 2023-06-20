//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
std::string get_letter_grade_using_switch(int grade){
    switch(grade) {
  case 90 ... 100:
    return "A";
    break;
  case 80 ... 89:
    return "B";
    break;
  case 70 ... 79:
    return "C";
    break;
  case 60 ... 69:
    return "D";
    break;
  default:
    return "F";
}
}