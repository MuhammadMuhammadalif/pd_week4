#include<iostream>
using namespace std;
void checkSpeed(int speed);


main()
{
int speed;
checkSpeed(speed);
}


void checkSpeed(int speed)
{
	cout << "Speed: ";
        cin >> speed;
          if(speed<=100)
	  {
	   cout << "Perfect! You're going good.";
	  }
 	  if(speed>100)
	  {
	   cout << "Halt... YOU WILL BE CHALLENGED!!!";
	  }
}