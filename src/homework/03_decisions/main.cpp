//write include statements
#include<iostream>
#include<decisions.h>
#include <string>

//write namespace using statement for cout
using std::cout;//displays to screen
using std::cin;//capture data from the keyboard

int main()
{
    //variables
    int grade;
    std::string result;

    //capture num and display
    cout<<"Enter a grade: ";
    cin>>grade;
    result = get_letter_grade_using_switch(grade);
    cout<<result<<"\n";
}