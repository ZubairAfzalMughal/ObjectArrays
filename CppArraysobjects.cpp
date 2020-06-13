// CppArraysobjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class Employee {
public:
	Employee(string name, int id, string adress, string city) {
		this->name = name;
		this->id = id;
		this->city = city;
		this->adress = adress;
	}
	string getName() { return this->name; }
	string getCity() { return this->city; }
	string getAdress() { return this->adress; }
	int getId() { return this->id; }
private:
	string name;
	int id;
	string adress;
	string city;

};
int main()
{
	int id[] = { 1,2,3,4 };
	// initliazing Dynmically
	string* name = new string[10];

	Employee employee[] = {
			Employee("Zubair",621,"Chatta Colony","Lahore"),
			Employee("Umair",622,"Begum Kot","Multan"),
			Employee("Ameer",623,"Shahdara","Karachi")
	};

	for (int i = 0; i < 3; i++) {

		cout << employee[i].getName() << "\t" << employee[i].getId() << "\t" << employee[i].getCity() << "\t" << employee[i].getAdress() << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
