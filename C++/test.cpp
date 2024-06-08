#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string name;
	
	while(name.empty()) {
		cout << "Enter Your Name: ";
		getline(cin , name);
	}
	cout << "Hello " << name << "\n";
	
	return 0;
}
