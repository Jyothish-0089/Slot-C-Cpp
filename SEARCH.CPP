//Program to search an element in a given list of elements.
#include<iostream.h>
int main(){
    int i,n,l;
    int array[10];
   cout<<"Enter the total elements in list:";
   cin>>l;
   for(i=0;i<l;i++){
       cout<<"Enter element: "<<i<<" ";
       cin>>array[i];
    }
    for(i=0;i<l;i++){
       cout<<array[i];
    }
    cout<<endl<<"Enter the element you wanna find ";
    cin>>n;
    for(i=0;i<l;i++){
	if(array[i]==n){
		 cout<<"The entered element is in position, "<<i+1<<endl;
	}
    }
return 0;
}
