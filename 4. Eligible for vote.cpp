#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int age,diff;
    cout<<"Enter the age : ";
    cin>>age;
    if(age>0){
        if(age>=18){
        cout<<"Eligible for vote";
        }
        else{
        cout<<"Not eligible for vote\n";
        diff = 18-age;
        cout<<diff<<" year(s) left to get eligible";
        }
    }
    else{
        cout<<"\nPlease enter a valid numeric";
    }
    
    return 0;
}
