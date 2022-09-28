#include <iostream> 
using namespace std; 
int main(){
	int n,i,f,j,c=0,arr[100];
	cout<<"Enter the number : ";
	cin>>n;
	if(n<1){
		cout<<"\nPlease enter a positive number";
	}
	else{
	cout<<"n'th factor : ";
	cin>>f;
	if(f<1){
		cout<<"\nPlease Enter valid factor position";
	}
	else{
	j=0;
	cout<<"\n";
	for(i=1;i<=n;i++){
		if(n%i==0){
			cout<<i<<" ";
			arr[j]=i;
			j++;
			c++;
	    }
	}
	cout<<"\nNumber of factors : "<<c;
	cout<<"\n\n"<<f<<"'th factor is "<<arr[f-1]<<".\n\n\n";
    }
    }
	return 0;
}
