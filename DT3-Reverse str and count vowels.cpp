#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int i,vowel=0,count=0; 
    cout << "Enter a string : ";
    gets(str);
    for (i = 0; str[i] != '\0';i++){
    	count++;
    	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
    		vowel++;
		}
    }
    cout<<"The Reversed String is: ";
    for( i = count-1; i>=0 ;i--){
    	cout<<str[i];
	}
	cout<<"\nTotal number of vowels in string are: "<<vowel;
    return 0;
}
