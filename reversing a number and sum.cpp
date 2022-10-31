#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int rem,sum,n;
	cout<<"Enter the number : ";
	cin>>n;
	if(n>0){
		while(n>0){
			rem = n%10;
			cout<<rem<<" ";
			n=n/10;
			sum = sum+rem;
	    }
	}
	else{
		cout<<"Invalid input";
	}
	cout<<"\nSum of digits is "<<sum;
	return 0;
}
