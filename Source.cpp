#include <iostream>
#include<cmath>
using namespace std;

struct newperson { //declaring a struct with a newperson tag
	char name[20]; // struct members 
	int age;		// struct members
};

int main() {

	newperson Sterling = { // Sterling is the tag 
			"Sterling",
			30
			};
	cout << "The person name is: " << Sterling.name << endl;
	cout << Sterling.name << " age is : " << Sterling.age << endl;
	return 0;
}