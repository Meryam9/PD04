#include<iostream>
using namespace std;
void equal(int, int);
main()
{
int a, b;
cout<<"Enter first number: " ;
cin>>a;
cout<<"Enter second number: " ;
cin>>b;
equal(a, b);
}

void equal(int a, int b)
{
if(a==b)
cout<<"True" ;
else
cout<<"False";
}
