#include<iostream>
using namespace std;
int main(){
	int r,choice,n,i;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"Enter the range : ";
	cin>>r;
	cout<<"1 - Multiplication        2 - Division \n\n\n";
	cin>>choice;
	if(choice==1){
		for(i=1;i<=r;i++){
			cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
		}
	}
	else{
		if(choice==2){
			for(i=1;i<=r;i++){
				cout<<n<<" / "<<i<<" = "<< n/i<<"\n";
			}
		}
		else{
			cout<<"yo??? you good? Enter between only 1 and 2.. ";
		}
	}
	return 0;
}
