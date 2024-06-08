#include<iostream>
using namespace std;

int main()
{
	int rows;
	int col;
	char symbol;
	
	cout << "Enter The Number Of Rows: ";
	cin >> rows;
	
	/*
	
	for(int i = 1; i < rows; i++) {
		cout << string(i, '*') << endl;

	}
	*/
	
	cout << "Enter The Number Of Columns: ";
	cin >> col;
	

	cout << "Enter The Symbol: ";
	cin >> symbol;
	
	for (int j = 1; j <= rows; j++) {
		for(int i = 1; i <= col; i++) {
			cout << symbol << " ";
		}
		cout << endl;
	}
	
	return 0;
}
