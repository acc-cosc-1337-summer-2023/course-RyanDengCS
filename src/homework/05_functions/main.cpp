#include<iostream>
#include<func.h>

int main() 
{
	//variables
	vector<int> testmax {5,7,-1,99,-100,10};
	vector<int> testsquare {6,1,8,9,4};
	vector<int> squaredElements;
	auto choice = 0;

	do
	{
		cout<<"\n\nVector Testing\n\n";
		cout<<"1-Get max value\n";
		cout<<"2-Get square of elements\n";
		cout<<"3-Exit\n";
		
		cin>>choice;

		switch(choice)
		{
		case 1:
			//use first vector to call get_vector_max_value
			cout<<"Max value of {5,7,-1,99,-100,10}: "<<get_vector_max_value(testmax)<<"\n";
			break;
		case 2:
			//use second vector to call get_square_of_each_element
			squaredElements = get_square_of_each_element(testsquare);
			cout << "Squares of {6, 1, 8, 9, 4}: {";
			for (int i : squaredElements)
			{
				cout << i << " ";
			}
			cout << "}\n";
			break;
		case 3:
			cout<<"Program will exit...\n";
			break;
		default:
			cout<<"Invalid option\n";
			break;
		}
	} while (choice !=3);

	return 0;
}
