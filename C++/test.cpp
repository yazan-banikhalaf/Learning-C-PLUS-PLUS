#include<iostream>

using namespace std;


string FullName(string string1, string string2);

int main()
{
	// function : a block of reusable code
	string first_name = "Yazan";
	string last_name = "Banikhalaf";
	string full_name = FullName(first_name, last_name);
	
	cout << "Hello " << full_name << "\n";
	return 0;
}

string FullName(string string1, string string2){
	return string1 + " " + string2;
}



