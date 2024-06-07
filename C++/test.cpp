#include<iostream>
using namespace std;

int main()
{
	string name;
	int age;
	cout << "Enter Your Age: ";
	cin >> age;
	cout << "Your Age Is: " << age;
	
	cout << "Enter Your Name: ";
	getline(cin >> ws, name);
	cout << "Hello " << name << endl;
	
	
 	return 0;
}
