#include<iostream>
using namespace std;
int main()
{
int income,tax;
cout<<"Enter the Income : ";
cin>>income;
if(income<60000)
cout<<"Income is lower than required..\n";
tax=0;
if(income>60000 && income<150000)
tax=income*0.05;
if(income>150000 && income<500000)
tax=income*0.1;
if(income>500000)
tax=income*0.15;
cout<<"Your Income Tax for the entered income is Ruppees "<<tax;
}

