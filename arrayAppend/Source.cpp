/*Initially I wanted to create a program that allows the user to add and remove values from an array.
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

TODO:
	Initialize a vector - FINISHED
	Ask the user to input the values in the vector - FINISHED
	Create a do-while loop that will allow users to finish inputing values - FINISHED
	Add something that will allow users to remove items from the vector
	Add a for-loop to print out the values stored in the vector - FINISHED

	*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <string> myVector;

	cout << "Please enter some names, Press Q to quit: " << endl;

	string name = "x";

	//For some reason the condtion will only accept Q and not q.
	while (name != "Q") {
		cin >> name;
		myVector.push_back(name);
	}

	myVector.pop_back();

	cout << "You have entered: " << myVector.size() << endl;

	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << endl;
	}

	return 0;
}