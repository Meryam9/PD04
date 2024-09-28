#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string, float, float, float);
void compareMarks(string, int, string, int);
main()
{ 
string name, nameStd1, nameStd2;
float  matricMarks, interMarks, ecatMarks; 
int ecatMarksStd1, ecatMarksStd2 ;
printMenu();
cout<<"Enter your name:  "  ;
cin>>name;
cout<<"Enter your matric marks: " ;
cin>>matricMarks;
cout<<"Enter your intermediate marks: " ;
cin>>interMarks;
cout<<"Enter your ECAT marks: " ;
cin>>ecatMarks;
calculateAggregate(name, matricMarks, interMarks, ecatMarks);

cout<<"Enter the name of first student : " ;
cin>>nameStd1;
cout<<"Enter the ECAT marks of first student : " ;
cin>>ecatMarksStd1;
cout<<"Enter the name of second student : " ;
cin>>nameStd2;
cout<<"Enter the ECAT marks of second student : " ;
cin>>ecatMarksStd2;
compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
}

void printMenu()
{
cout<<" #               #         #################             ################## "            << endl;
cout<<" #               #         #                                    ##          "            << endl;                
cout<<" #               #         #                                    ##          "            << endl;
cout<<" #               #         #                                    ##          "            << endl;
cout<<" #               #         #################                    ##          "            << endl; 
cout<<" #               #         #                                    ##          "            << endl;
cout<<" #               #         #                                    ##          "            << endl;
cout<<" #               #         #                                    ##          "            << endl;
cout<<"  ###############          #################                    ##          "            << endl;
                               
}

void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
float Agg;
Agg=(matricMarks/1100*30)+(interMarks/550*30)+(ecatMarks/400*40);
cout<<"Your aggregate is : " << Agg << "%" << endl;
}

void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{
int Roll_no;
if(ecatMarksStd1>ecatMarksStd2)
cout<<"The first roll number is assigned to " << nameStd1 << endl;
else if(ecatMarksStd1>ecatMarksStd2)
cout<<"The first roll number is assigned to " << nameStd2 << endl;
else
cout<<"Numbers are equal. Then first roll number is assigned to " << nameStd1 << endl;

}




