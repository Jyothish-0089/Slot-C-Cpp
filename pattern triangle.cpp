//      *
//    * *
//  * * *
//* * * *
// n=4 , 
#include<iostream>
using namespace std;
int main(){
	int n,i,j,k;
	cout<<"Enter range : ";
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			cout<<" *";
		}
		cout<<"\n";
	}
	return 0;
}

