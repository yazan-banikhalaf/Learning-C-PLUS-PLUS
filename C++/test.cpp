#include<iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int usernumber;
	int randomNumber;
	bool won = false;
	int close;
	
	for(int i = 1; i<=3; i++){
		randomNumber = (rand() % 6) + 1;
		cout << "Enter Your Lucky Number!: ";
		cin >> usernumber;
		close = abs(usernumber - randomNumber);
		
		if(randomNumber == usernumber){
			cout << "You WON! " << endl; 
			won = true;
			break;
		} else {
			cout << "You Lost " << endl;
			cout << "The Lucky Number Is: " << randomNumber << endl;
		}
		if(close == 1) {
			cout << "You won extra try, YEEEEEY " << endl;
			i--;
		}
	}
	if(!won){
		cout << "Better luck next time!" << endl;
		
	}
	
	return 0;
}
