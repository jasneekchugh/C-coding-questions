#include<iostream.h>
#include<conio.h>

void main()
{
int no,rev=0,r,a;
clrscr();
cout<<"Enter the num: ";
cin>>no;
a=no;
while(no>0)
{
 r=no%10;
 rev=rev*10+r;
 no=no/10;
}
cout<<"\nReverse of "<<a<<" is: "<<rev;
getch();