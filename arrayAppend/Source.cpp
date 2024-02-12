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
	Create a nested if-else that will allow the user to make a choice - FINISHED
		Print out vector values - FINISHED
		add items to the vector - FINISHED
		delete items from the vector - FINISHED
	Create a function that Prints out the vector values. - FINISHED
	Create a function for the user choice

I need to figure out how to allow the user to return to the main function. 
What I would like to do is after the selected function is executed return the 
user to the choice function. This would allow them to see the values they 
entered into the vector. I believe I need to use the return keyword to 
in those functions to return to int main.

I changed the data type of all of the functions to int. Because I did this
I am now able to return to the main function. The problem is that when I entered
the values for myVector and then tried to print them after returning to main, it
did not save the values I entered.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int removeEntry(vector<string>& myVector);

int addEntry(vector<string> &myVector);

int myVectorValues(vector<string>& myVector);

int main(){

	vector<string> myVector;
	char userChoice;

	cout << "Please choose an option: " << endl;
	cout << "A - addEntry " << endl;
	cout << "R - removeEntry " << endl;
	cout << "V - myVectorValues " << endl;
	cout << "D - Description of the listed functions " << endl;
	cin >> userChoice;

	if (userChoice == 'A' || userChoice == 'a') {
		addEntry(myVector);
		cout << endl;
	}

	else if (userChoice == 'R' || userChoice == 'r') {
		removeEntry(myVector);
		cout << endl;
	}

	else if (userChoice == 'V' || userChoice == 'v') {
		myVectorValues(myVector);
		cout << endl;
	}

	else if (userChoice == 'D' || userChoice == 'd') {
		cout << "addEntry will allow you to add new values to a new vector." << endl;
		cout << "removeEntry will allow you to remove items from the vector that you have created." << endl;
		cout << "myVectorValues will print out the current values stored in the vector." << endl;
	}

	return 0;
}

int removeEntry(vector<string>& myVector) {

	int pos;
	cout << "Please enter the position you would like to erase: " << endl;
	cin >> pos;

	myVector.erase(myVector.begin() + pos);

	cout << endl;

	return main();
}

int addEntry(vector<string> &myVector) {

	cout << "Please enter some names, Press Q to quit: " << endl;

	string name;

	/*While loop that will allow the user to add values to the vector.
	If the user enters "Q", then it will break out of the loop*/
	while (name != "Q") {
		cin >> name;
		myVector.push_back(name);
	}

	/*This will remove the last value that was entered in the array.
	In this case it should be "Q" since that is the last thing the user enters.
	I did this because when printing out the values in the vector I do not want 
	to include Q since it was used to breakout of the statement and is not a value.*/
	myVector.pop_back();

	cout << endl;

	return main();

}

/*This function will print out the values that are currently stored 
in the vector. For now this function is really just for testing purposes.*/
int myVectorValues(vector<string>& myVector) {
	
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << endl;
	}

	return main();
}