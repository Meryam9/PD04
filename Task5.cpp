#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void label(string);
main()
{ 
   system("cls");
   int x=50, y=15;
   string name;
   name="MARYRAM FAYYAZ";  
   gotoxy(x, y);
   label(name);
     
}

void label(string name)
{
 cout<<name;
}
  

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X= x;
coordinates.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);    
}
