//write include statements
#include<iostream>
#include<data_types.h>

//write namespace using statement for cout
using std::cout;//displays to screen
using std::cin;//capture data from the keyboard

int main()
{
    //variables
    int num;
    int result;
    int num1;

    //capture num and display
    cout<<"Enter a number: ";
    cin>>num;
    result = multiply_numbers(num);
    cout<<result<<"\n";

    //call function with num1=4 and display
    num1 = 4;
    result = multiply_numbers(num1);
	cout<<result<<"\n";
    return 0;
}