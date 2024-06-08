#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int temp;
	char unit;
	
	cout << "What unit would you like to converte ? (F/C)" << endl;
	cin >> unit;
	
	if (unit == 'f' || unit == 'F'){
		cout << "Enter the Temprature in Celsius: " << endl;
		cin >> temp;
		temp = (1.8 * temp) + 32.0;
		 
		cout << "The Temprature is: " << temp << "F" << endl;
	} else if (unit == 'C' || unit == 'c'){
		cout << "Enter the Temprature in Fahrenheit: " << "C" << endl;
		cin >> temp;
		temp = (temp - 32) / 1.8;
		 
		cout << "The Temprature is: " << temp << endl;
	} else {
		cout << "Please Enter only C or F" << endl;
	}
 	return 0;
}
