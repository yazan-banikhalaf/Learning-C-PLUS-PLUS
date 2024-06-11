#include<iostream>
#include <ctime>

using namespace std;

int main()
{
	int temp;
	bool sunny = true;;
	
	cout << "Enter the temp: ";
	cin >> temp;
	if(temp <= 0 || temp >= 30){
		cout << "The temp is  bad " << endl;
	} else {
		cout << "The temp is good" << endl;
	}
	
	if(!sunny){
		cout << "Its sunny outside" << endl;
	} else {
		cout << "Its cloudy outside" << endl;
	}
	return 0;
}
