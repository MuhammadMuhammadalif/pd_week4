#include<iostream>
using namespace std;
void tom(int holiday);



main()
{
int holiday;
tom(holiday);


}

void tom(int holiday)
{
cout<< "Holidays: ";
cin>> holiday;

int workingday=365-holiday;
int total_min=(workingday*63)+(holiday*127);
int differance=30000-total_min;
int hour=differance/60;
int min =differance%60; 
	if(total_min<=30000)
	{
	cout << "Tom sleeps well"<<endl;
	cout << ""<<hour;
	cout << " hours and "<<min;
	cout << " minutes less for play";
	}
		if(total_min>30000)
		{
		cout << "Tom will run away"<<endl;
		cout << ""<<hour*-1;
		cout << " hours and "<<min*-1;
		cout << " minutes for play";
		}
		


}