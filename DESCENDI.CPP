#include<iostream.h>
int main(){
   int arr[100];
   int n,i,j;
   int temp;
   cout<<"Enter the total number of elements:";
   cin>>n;
   if(n<0 || n>100){
      cout<<"Invalid input"<<endl;
      return -1;
      }
   for(i=0;i<n;i++){
      cout<<"Enter element "<<i+1<<":";
      cin>>arr[i];
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
	 if(arr[i]<arr[j]){
	    temp=arr[i];
	    arr[i]=arr[j];
	    arr[j]=temp;
	 }
      }
   }
   for(i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   return 0;
}