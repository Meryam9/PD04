#include<iostream>
using namespace std;
void tpchecker(int,int);
main()
{
int n_people, n_rolls, sheets, sheetsPerDay;
sheets=500;
sheetsPerDay=57;
cout<<"Number of people in the household : " ;
cin>>n_people;
cout<<"Number of rolls of TP : " ;
cin>>n_rolls;
tpchecker(n_people,n_rolls);
}

void tpchecker(int n_people, int n_rolls)
{
int lastDays;
lastDays= (n_rolls*500)/(n_people*57);
if(lastDays>=14)
cout<<"Your TP will last " << lastDays <<" days, no need to panic!" ;
else
cout<<"Your TP will  only last " << lastDays <<" days, buy more!" ;
}
