#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string name;
	
	cout << "Enter your name: ";
	getline(cin , name);
	
	/*******************************************LENGTH METHOD***************************************************/
	/*
	if (name.length() > 12){
		cout << "Your name must be less than 12 charctares" << endl;
		cout << "The length is " << name.length();
	} else if(name.empty()) {
		cout << "Name can not be empty" << endl;
	} else {
		cout << "Hello " << name << "\n";
	}
	*/
	
	/*****************************************APPEND METHOD*****************************************************/
	/*
	name.append("@gmail.com");
	
	cout << "Your Email Is : " << name << endl;
	*/	
	
	/*******************************************AT METHOD***************************************************/
	/*
	name = name.at(0);
	cout << "The First Char is: " << name << endl;
	*/
 	
	/*******************************************INSERT METHOD***************************************************/
	/*
	name.insert(0,"@");
	cout << name << endl;
	*/
	
	/*******************************************FIND METHOD***************************************************/
	/*
	int pos = name.find('a');
	cout << pos << endl;
	*/
	/*******************************************ERASE METHOD***************************************************/
	/*
	name.erase(0,3);
	cout << name << endl;
	*/
	
	return 0;
}
