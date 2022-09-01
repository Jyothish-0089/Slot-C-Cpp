#include<iostream.h>
inline int add(int a,int b){
	return a+b;
}
inline float diff(float a,float b)
{
	return a-b;
}
inline int mod(int x,int y)
{
	return x%y;
}
inline long int mul(long int e,long int f)
{
	return e*f;
}
int main(){
	int a,b;
	double x,y;
	float i,j;
	long int e,f;
	cout<<"\nEnter 2 values for sum: \n";
	cin>>a>>b;
	cout<<"The sum is: "<<add(a,b);
	cout<<"\nEnter 2 numbers for difference: \n";
	cin>>a>>b;
	cout<<"The difference is :"<<diff(a,b);
	cout<<"\nEnter 2 values for modulus: \n";
	cin>>x>>y;
	cout<<"The modulus for the numbers is :"<<mod(x,y);
	cout<<"\nEnter 2 values for multiplication:  \n";
	cin>>e>>f;
	cout<<"The product is: "<<mul(e,f);
return 0;
}