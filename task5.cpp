#include<iostream>
using namespace std;
void ludo (int you,int f);


main()
{
int you;
int your;
ludo (you,your);
}


void ludo (int you,int f)
{
cout << "Enter your position: ";
cin >> you;
cout << "Enter your friend's position: ";
cin >> f;
	if((f-you)<=6)
	{
	cout << "true";
	}
	if((f-you)>6)
	{
	cout << "false";
	}
}