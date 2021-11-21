// Do while loop assignment
//Admission: 147683

#include <iostream>
using namespace std; 

//Using the do…while loop, write a program that outputs the even numbers from 12 to 50
//Even numbers are divisible by 2
//We will output numbers between 12 and 50 that are divisible by 2

int main()
{
	//declare the variables
	int counter=12;  
	
	do
	{
		if (counter % 2 == 0) 
		cout << counter << "\n"; //Output the numbers
		counter++; 

	} while (counter<=50);  //Check the condition 
	


	return 0; 
}

