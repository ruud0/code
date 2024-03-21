/*
CMPSC 201 - <Spring/Fall> <YYYY>

Program Name: Exam 02 (stub)
Author: <your name>
Date Submitted: <date submitted>
Description:
  This program will input a set of numbers,
  classify the numbers as even/odd/zero, and
  display the results to the console.

  MAKE SURE YOU TEST YOUR CODE BEFORE SUBMITTING!
  
  REMEMBER: Some of your work will look like "errors" with underlines in MVS
  until you write all missing code.  Complete all of the problems before compiling.

Sources:
  Remember that exams are open book, but you may not discuss with other people.
  <detail any resources that influenced the code as per the syllabus>.
*/

/*
	Problem #1 - Complete program header and test
		Fill in name and date
		Confirm that the program compiles and runs after all problems are done
		4 Points (0 if any of these items not completed)
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_LOOPS = 5;

/*
	Problem #2 - Declare a function
		Declare the function described below
		Name the function: initialize
		It will have 3 parameters, all integers, passed by reference
		HINT: You are not returning any data through the function
		5 Points
*/
//DELETE ME AND PUT THE FUNCTION DECLARATION HERE

/*
	Problem #3 - Declare a function
		Declare the function described below
		Name the function: printResults
		It will have three parameters, all integers, and passed by value
		HINT: You are not returning any data through the function
		5 Points
*/
//DELETE ME AND PUT THE FUNCTION DECLARATION HERE

/*
	These two functions are already declared for you
	You will need to call them from within main()
	Make sure you look at these definitions and the corresponding code
*/
void classifyNumber(int, int&, int&, int&);
int getNumber();
	
int main()
{
	int counter;
	int number;
	int zeros;
	int odds;
	int evens;
	
	/*
		Problem #4  - Call the initialize function
			The arguments are (in this order):
				zeros
				odds
				evens
			5 Points
	*/
	//DELETE ME AND CALL THE initialize FUNCTION
	
	cout << "Please enter " << NUM_LOOPS << " integers." << endl;
	cout << "Your numbers:\n";
	
	/*
		Problem #5  - Create a for loop
			Use "counter" (a variable already declared) as the loop control variable
			Your starting point is 1
			Your limit is NUM_LOOPS
			Your increment is 1
			3 Points
	*/
	//DELETE ME AND CREATE THE FOR LOOP DEFINITION (loop body code is below)
	{ //Start for loop
		cout << "Number [" << counter << "]: ";
		/*
			Problem #6 - Call the "getNumber" function
				Store the return value into the variable "number"
				5 Points
		*/
		//DELETE ME AND CALL THE getNumber FUNCTION

		/*
			Problem #7  - Call the "classifyNumber" function
				Use the following as arguments (in this order):
					number
					zeros
					odds
					evens
				5 Points
		*/
		//DELETE ME AND CALL THE classifyNumber FUNCTION
	} //End for loop
	
	cout << endl;
	
	/*
		Problem #8  - Call the "printResults" function
			The arguments are (in this order):
				zeros
				odds
				evens
			5 Points
	*/
	//DELETE ME AND CALL THE printResults FUNCTION
	
	return 0;
}

/*
Problem #9 - Write the function header and code body for the "initialize" function
	Remember the details of the function declaration above
	In the function, set all three variables to 0
	The parameters should be:
		zeroCount
		oddCount
		evenCount
	10 Points
*/
//DELETE ME AND WRITE THE FUNCTION HEADER AND CODE AS PER INSTRUCTIONS

/*
Problem #10 - Write the function header for the "printResults" function
	Remember the details of the function declaration above
	The parameters should be:
		zeroCount
		oddCount
		evenCount
	The code for the function is below
	You should only write the function header
	3 Points
*/
//DELETE ME AND PUT THE printResults FUNCTION HEADER HERE
{
	cout << "There is/are " << evenCount << " even number(s), "
		<< "which includes " << zeroCount << " zero(s)"
		<< endl;

	cout << "There is/are " << oddCount << " odd number(s)"
		<< endl;
}

int getNumber()
{
	int num;
	cin >> num;
	return num;
}

void classifyNumber(int num, int& zeroCount, int& oddCount, int& evenCount)
{
	switch (num % 2)
	{
	case 0:
		evenCount++;
		if (num == 0)
		{
			zeroCount++;
		}
		break;
	case 1:
	case -1:
		oddCount++;
	}
}