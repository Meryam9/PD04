#include<iostream>
using namespace std;
void price(string, float);
main()
{
string country;
float dollars;
cout<<"Enter name of the country: " ;
cin>>country;
cout<<"Enter the ticket price in dollars: $ " ;
cin>>dollars;
price(country, dollars);
}

void price(string country, float dollars)
{
float discount, final_price;

if(country=="Pakistan")
{
discount=dollars*0.05;
final_price=dollars-discount;
cout<<"Final ticket price after discount: $ " << final_price;
}
if(country=="Ireland")
{
discount=dollars*0.1;
final_price=dollars-discount;
cout<<"Final ticket price after discount: $ " << final_price;
}

if(country=="India")
{
discount=dollars*0.2;
final_price=dollars-discount;
cout<<"Final ticket price after discount: $ " << final_price;
}

if(country=="England")
{
discount=dollars*0.3;
final_price=dollars-discount;
cout<<"Final ticket price after discount: $ " << final_price;
}

if(country=="Canada")
{
discount=dollars*0.45;
final_price=dollars-discount;
cout<<"Final ticket price after discount: $ " << final_price;
}

}

