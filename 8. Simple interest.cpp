#include<iostream> 
using namespace std; 
int main() 
{ 
 int p,y,c,i,a; 
 cout<<"Enter the Amount : "; 
 cin>>p; 
 cout<<"\nEnter number of years : "; 
 cin>>y; 
 cout<<"\n1-Senior Citizen\n2-not Senior Citizen"; 
 cout<<"\n Enter the choice 1 or 2 : "; 
 cin>>c; 
 switch(c) 
 { 
  case 1: 
   a=p*y*12/100; 
   cout<<"\n the simple interest for senior citizen is : "<<a; 
   break;
  case 2: 
   i=p*y*10/100; 
   cout<<"\nthe simple interest for normal citizen is : "<<i; 
 }
} 
