#include<iostream>
using namespace std;

int main()
{
	//break : break out of the loop
	//continue: skip the current iteration
	
	for(int i = 1; i <= 20; i++){
		if(i == 13)
		{
			break;
			//continue;
		}
		cout << i << endl;
	}
	return 0;
}
