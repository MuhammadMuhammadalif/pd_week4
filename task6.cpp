#include<iostream>
using namespace std;
void big(int hour,int min);
main(){
int hour,min;

	big(hour,min);
}

void big(int hour,int min)
{
cout << "enter the number of hours :";
cin>>hour;
 cout << "enter the number of minutes :";
cin>>min;
	if((hour*60)>min)
	{cout << ""<<hour;}	

	if((hour*60)<min)
	{cout << ""<<min;}









}