#include<iostream>
using namespace std;
int main(){
	int n,rem,arr[50],i=0,j;
	cout<<"Enter the numeric form : ";
	cin>>n;
	while(n>0){
		rem = n%10;
		arr[i] = rem;
		i++;
		n=n/10;
	}
	i=i-1;
	for(j=i;j>=0;j--){
		if(arr[j]==1){
			cout<<"One ";
		}
		if(arr[j]==2){
			cout<<"Two ";
		}
		if(arr[j]==3){
			cout<<"Three ";
		}
		if(arr[j]==4){
			cout<<"Four ";
		}
		if(arr[j]==5){
			cout<<"Five ";
		}
		if(arr[j]==6){
			cout<<"Six ";
		}
		if(arr[j]==7){
			cout<<"Seven ";
		}
		if(arr[j]==8){
			cout<<"Eight ";
		}
		if(arr[j]==9){
			cout<<"Nine ";
		}
		
	}
}
