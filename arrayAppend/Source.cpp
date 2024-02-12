/*
Initially I wanted to create a program that allows the user to add and remove values from an array.
After looking into it, it would seem that I cannot do that. So, instead I will be using a vector to that 
instead.

I believe the pushback() function should be inserting a new element into the vector each time the user
hits the return key. Using my knowledge from assembly langauge I am guessing that the vector is treated 
like a stack. When the pushback function is called whatever value is entered by the user will be pushed 
onto the stack. I am also assuming that when the popback function is called it will remove an item from 
the vector "popping" it off of the stack. The stack in this case is the vector I have declared called myVector.

The popback function will remove the last element that was entered into the vector. I am going to look
further into how this works to see if I can remove a selected element from the vector rather than just 
removing the last element from the vector.

The find keyword on line 53 will find a specific element in my declared vector. Find accepts parameters
the parameters that I gave it would find the begining of myVector and the end of myVector. 

Unsure as to what match does right now.

From how I understand it the auto keyword should automatically match the data type of the variable being 
used. In this case it should match it to the string data type.

TODO:
	Initialize a vector - FINISHED
	Ask the user to input the values in the vector - FINISHED
	Create a do-while loop that will allow users to finish inputing values - FINISHED
	Add a function that allows the user to delete certain vector entries - FINISHED
	Add a for-loop to print out the values stored in the vector - FINISHED
	Add some feature that allows me to use myVector in int main - FINISHED

Feb 12 TODO:
	Create a nested if-else that will allow the user to make a choice
		Print out vector values
		add items to the vector
		delete items from the vector
	Create a function that Prints out the vector values.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void deleteEntry(vector<string>& myVector);

void addEntry(vector<string> &myVector);

void myVectorValues(vector<string>& myVector);

int main(){

	vector<string> myVector;

	addEntry(myVector);

	cout << endl;

	/*For loop that will print out the values stored in myVector.
	This is for testing purposes*/
	//for (int i = 0; i < myVector.size(); i++) {
	//	cout << myVector[i] << endl;
	//}

	return 0;
}

void deleteEntry(vector<string>& myVector) {

	int pos;
	cout << "Please enter the position you would like to erase: " << endl;
	cin >> pos;

	myVector.erase(myVector.begin() + pos);

	cout << endl;
}

void addEntry(vector<string> &myVector) {

	cout << "Please enter some names, Press Q to quit: " << endl;

	string name = "x";

	while (name != "Q") {
		cin >> name;
		myVector.push_back(name);
	}

	myVector.pop_back();

	cout << endl;
}

void myVectorValues(vector<string>& myVector) {

}