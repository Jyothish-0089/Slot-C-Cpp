#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if(n==0){
		cout<<"It's Zero..";
	}
	if(n%2==0){
		cout<<"\n"<<n<<" is an Even number\n";
		cout<<"The next even number is "<<n+2<<".";
	}
	if(n%2!=0){
		cout<<"\n"<<n<<" is an Odd number\n";
		cout<<"The previous odd number is "<<n-2<<".";
	}
	return 0;
}
