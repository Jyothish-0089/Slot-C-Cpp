#include<iostream>
using namespace std;
class ebill
{
public:
int cons_no,pre_read,cur_read,eb_type,usedunits;
string cons_name;
float amount=0;
void input(void);
void calculation();
void display();
};
void ebill::input()
{
cout<<"Enter customer name : ";
cin>>cons_name;
cout<<"\nEnter customer number : ";
cin>>cons_no;
cout<<"\nEnter the previous month units reading : ";
cin>>pre_read;
cout<<"\nEnter the current month units reading : ";
cin>>cur_read;
cout<<"\nENTER THE EB TYPE\n1 - Domestic\n2 - Commercial\n";
cin>>eb_type;
}
void ebill::calculation()
{
if(eb_type==1)
{
usedunits=cur_read-pre_read;
if(usedunits<=100)
amount=(usedunits*1);
if(usedunits>100&&usedunits<=200)
amount=100+((usedunits-100)*2.5);
if(usedunits>200&&usedunits<=500)
amount=350+((usedunits-200)*4);
if(usedunits>500)
amount=1550+((usedunits-500)*7);
}
if(eb_type==2)
{
usedunits=cur_read-pre_read;
if(usedunits<=100)
amount=(usedunits*2);
if(usedunits>100&&usedunits<=200)
amount=200+((usedunits-100)*4.5);
if(usedunits>200&&usedunits<=500)
amount=650+((usedunits-200)*6);
if(usedunits>500)
amount=2450+((usedunits-500)*7);
}
}
void ebill::display()
{
cout<<"Your E-bill amount is : "<<amount;
}
int main()
{
ebill e1;
e1.input();
e1.calculation();
e1.display();
}
