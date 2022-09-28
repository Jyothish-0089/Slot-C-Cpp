#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[50],r,i,j,fi,n,m,index;
	cout<<"Enter the range : ";
	cin>>r;
	fi = r-1;
	for(i=0;i<r;i++){
		cout<<"Enter element "<<"["<<i<<"]"<<", in array : ";
		cin>>arr[i];
	}
	cout<<"[ ";
	for(i=0;i<r;i++){
		cout<<arr[i]<<" ";
	}
	cout<<" ]\n";
	sort(arr,arr+r);
	cout<<"Enter the n'th smallest element : ";
	cin>>n;
	cout<<"Enter the m'th biggest element : ";
	cin>>m;
	index = r-m;
	cout<<"The "<<n<<"'th smallest is : "<<arr[n-1]<<"\n";
	cout<<"The "<<m<<"'th biggest is : "<<arr[index]<<"\n";
	cout<<"Sum : "<<arr[n-1]+arr[index];
	cout<<"       Difference : "<<arr[n-1]-arr[index];
	return 0;
}
