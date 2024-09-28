#include<iostream>
using namespace std;
void pet(int);
main()
{
int holidays;
cout<<"Enter number of holidays : " ;
cin>>holidays;
pet(holidays);
}

void pet(int holidays)
{
int workingDays, time_games, totalMinsPerYear, totalMinsGames, hours, mins;
totalMinsPerYear=30000;
workingDays = 365-holidays;
time_games = (workingDays*63)+(holidays*127);
totalMinsGames=totalMinsPerYear - time_games;
hours=(totalMinsGames/60);
mins=(totalMinsGames%60);
if (holidays>=112)
{
cout<<"Tom will run away " << endl;
cout<< (hours*-1) << " hours and " << (mins*-1) << " minutes for play. " ;
}
else
{
cout<<"Tom sleeps well " << endl;
cout<< hours << " hours and " << mins << " minutes less for play. " ;
}

}

