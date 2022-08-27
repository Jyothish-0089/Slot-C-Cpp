#include<iostream.h>
int main(){
    int n,fact,i;
    fact = 1;
    i = 1;
    cout<<"Enter the number";
    cin>>n;
    if(n<0){
       cout<<"Invalid input";
       }
    else{
     while(i<=n){
       fact = fact * i;
       i++;
       }

     cout<<"The factorial of the given number is,"<<fact<<endl;
    }
return 0;
}