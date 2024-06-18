#include<iostream>

using namespace std;


void happyBirthday(string name, int age){
	cout << "Happy birthday to you! " << name << endl;
	cout << "Happy birthday to you! " << name << endl;
	cout << "Happy birthday dear you! " << name << endl;
	cout << "Happy birthday to you! " << name << endl;
	cout << "You age is: " << age << "!" << endl;

}

int main()
{
	// function : a block of reusable code
	string name = "Yazan";
	int age = 23;
	happyBirthday(name,age);
	
	return 0;
}

