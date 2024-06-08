#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double num1, num2;
	char op;
	
	cout << "Enter the operator (+ - * /): ";
	cin >> op;
	
	cout << "Enter #1: ";
	cin >> num1;
	
	cout << "Enter #2: ";
	cin >> num2;
	
	switch(op){
		case '+':
		cout << "The result is: " << num1 + num2<< endl;
		break;
		case '-':
		cout << "The result is: " << num1 - num2<< endl;
		break;
		case '*':
		cout << "The result is: " << num1 * num2<< endl;
		break;
		case '/':
		cout << "The result is: " << num1 / num2 << endl;
		break;
		default:
		cout << "Enter a valid operator" << endl;;
	}
 	return 0;
}
