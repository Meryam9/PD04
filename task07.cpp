#include<iostream>
using namespace std;
void flowerShop(int , int, int);
main()
{
int redRose, whiteRose, tulip;
cout<<"Red Rose : " ;
cin>>redRose;
cout<<"White Rose : " ;
cin>>whiteRose;
cout<<"Tulips : " ;
cin>>tulip;
flowerShop(redRose, whiteRose, tulip);
}
 
void flowerShop(int redRose, int whiteRose, int tulip)
{
float discount, orgPrice, total;
orgPrice=(redRose*2.00) + (whiteRose*4.10) + (tulip*2.50);
if (orgPrice>200)
{
discount=orgPrice*0.2;
total=orgPrice-discount;
cout<<"Original Price : $ " << orgPrice << endl;
cout<<"Price after discount : $ " << total;
}
else
{
cout<<"Original Price : $ " << orgPrice << endl;
cout<<"No discount applied. " ;
}

}



