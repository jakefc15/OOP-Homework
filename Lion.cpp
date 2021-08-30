# OOP-Homework
Object-Oriented Programming Homework
#include <iostream>
#include <string>

using namespace std;

class Lion {
public:
	string name;
	string gender;
	int age;
	void sleeping();
	void eating();
	void dying();
};

/*2nd way*/
/*void sleeping() {
	cout << "sleeping..." << endl;

}

void eating() {
	cout << "eating..." << endl;
}

void dying() {
	cout << "dying..." << endl;
}
*/






void Lion::sleeping() {
	cout << "sleeping..." << endl;

}

void Lion::eating() {
	cout << "eating..." << endl;

}

void Lion::dying() {
	cout << "dying..." << endl;

}

int main()
{
	Lion lion1, lion2;

	lion1.name = "John"
	lion1.gender = "M"
	lion1.age = 19;

	cout << "lion1's name = " << lion1.name << endl;
	cout << "lion1's gender = " << lion1.gender << endl;
	cout << "lion1's age = " << lion1.age << endl;
	lion1.sleeping();

	lion2.name = "Grace"
	lion2.gender = "F"
	lion2.age = 9;

	cout << "lion2's name = " << lion2.name << endl;
	cout << "lion2's gender = " << lion2.gender << endl;
	cout << "lion2's age = " << lion2.age << endl;
	lion2.eating();

}
