#include<iostream.h>
#include<conio.h>
void main(){
   long int n,b,i,c=0;
   int dec[10]={512,256,128,64,32,16,8,4,2,1};
   int bin[10];
   clrscr();
   cout<<"Enter the binary number :";
   cin>>n;
	 while(n>0){
	    for(i=9;i>=0;i--){
		 b = n%10;
		 n = n/10;
		 bin[i]=b;
		 if(bin[i]==1){
			c = c+dec[i];
		 }
	    }

	       //	 for(i=0;i<10;i++){
		//	cout<<bin[i];
		// }
	 }
	 cout<<endl<<"The decimal number is: "<<c;
	// return 0;
   getch();
}
