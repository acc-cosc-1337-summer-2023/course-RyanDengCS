//write include statements
#include<iostream>
#include<repetition.h>
#include <string>
//write using statements
using std::cout;//displays to screen
using std::cin;//capture data from the keyboard

int main() 
{
    //variables
	//char choice;
    std::string dna;
    double result;
	result = get_gc_content("AGCTATAG");
	cout << "THE GC CONTENT" << result;
/*
	do{
		//capture num and display
		cout << "Enter a DNA string: ";
		cin >> dna;
		result = get_gc_content(dna);
		cout << result<<"% \n";

		cout << "Do you wish to continue? ";
		cin >> choice;

		if (choice != 'y' || choice != 'Y'){
			return 0;
			break;
		}
		
	} while (choice == 'y' || choice == 'Y');
    
	return 0;*/
}