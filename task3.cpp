#include<iostream>
using namespace std;

void discountr (float price,string country );
main()
{
string country;
float price;
 discountr (price,country);

}










void discountr (float price,string country )
{
    cout << "Enter the country's name: ";
    cin >>country;
    cout << "Enter the ticket price in dollars: $";
    cin >> price;
float dprice;
	if(country=="pakistan"||country=="Pakistan")
	{
	 dprice=price-(price*0.05);
	 cout << "Final ticket price after discount: $"<<dprice;
	}
	if(country=="ireland"||country=="Ireland")
	{
	 dprice=price-(price*0.1);
	 cout << "Final ticket price after discount: $"<<dprice;

	}
	if(country=="india"||country=="India")
	{
	 dprice=price-(price*0.2);
	 cout << "Final ticket price after discount: $"<<dprice;
	}
	if(country=="england"||country=="England")
	{
	 dprice=price-(price*0.3);
	 cout << "Final ticket price after discount: $"<<dprice;
	}
	if(country=="canada"||country=="Canada")
	{
	 dprice=price-(price*0.45);
	 cout << "Final ticket price after discount: $"<<dprice;
	}
}