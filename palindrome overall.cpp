#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    cout << "Enter a string "; cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        cout << string1 << " Is not a Palindrome" << endl; 
    }    
    else {
        cout << string1 << " Is a Palindrome" << endl; 
    }
    system("Pause");
    return 0;
}
