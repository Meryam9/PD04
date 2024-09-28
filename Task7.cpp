#include<iostream>
#include<windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void movePlayer(int x, int y, string name);

main()
{ 
   int x=6, y=2;
   string name="PLAYER" ; 
   system("cls");
   printMaze();
   while(true)
  {
   movePlayer(x, y, name);
   y=y+1;
   
   if(y==25)
   {
     y=2;
   }
  }

}

void movePlayer(int x, int y,string name)
{
    gotoxy(x, y);
    cout << name ;
    Sleep(100);
    gotoxy(x, y);
    cout<<"      ";
}

void printMaze()
{

cout << " ############################################################# " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " #                                                           # " << endl;
cout << " ############################################################# " << endl;

}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X= x;
coordinates.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
