#include<iostream>
using namespace std;
void o_price(int red,int white,int tulip);


main()
{
int red,white,tulip;
o_price(red,white,tulip);
}


void o_price(int red,int white,int tulip)
{
cout << "Red Rose: ";
cin>>red;
float red_price=red*2;

cout << "White Rose: ";
cin>>white;
float white_price=white*4.1;

cout << "Tulips: ";
cin>>tulip;
float tulip_price=tulip*2.5;

float total=red_price+white_price+tulip_price;
float dis_total=total-(total*0.2);
	if(total<200)
	{
	cout << "Original Price: $"<<total<<endl;
	cout << "No discount applied.";
	}
	
	if(total>=200){
	cout << "Original Price: $"<<total<<endl;
        cout << "Price after Discount: $"<<dis_total;}

}