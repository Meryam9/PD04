#include<iostream>
using namespace std;
void reverse(string);
main()
{
string state;
cout<<"Enter 'true' or 'false': " ;
cin>>state;
reverse(state);
}

void reverse(string state)
{
if(state=="true")
cout<<"false" ;
if(state=="false")
cout<<"true";
}
