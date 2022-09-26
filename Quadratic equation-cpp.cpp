#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float s,a,b,c,disc,x1,x2;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	cout<<"Enter the value of c : ";
	cin>>c;
	s = (a+b+c)/2;
	disc = ((b*b)-(4*a*c));
	cout<<"Discriminant is "<<disc;
	if(disc>0){
	x1 = (-b+sqrt(disc))/(2*a);
	x2 = (-b-sqrt(disc))/(2*a);
	cout<<"\nRoots of the equation are "<<x1<<" and "<<x2;
    }
    else{
    	if(disc<0){
    		cout<<"\nComplex roots";
		}
	}
	return 0;
}
