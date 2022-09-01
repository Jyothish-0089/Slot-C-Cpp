#include<iostream.h>
int main(){
   int n,i,j,k;
   cout<<"Enter the number of rows :";
   cin>>n;
   if(n>0){
      for(i=1;i<n+1;i++){
	 cout<<endl;
	 for(j=1;j<i+1;j++){
	    for(k=i;k<i+1;k++){
	       cout<<k<<" ";
	    }
	 }
      }
   }
   else{
      cout<<"Plese enter a positive range..";
   }
return 0;
}