#include<iostream>
using namespace std;
int main(){
    int rev = 0;
    int n;
    cin >> n;
    int temp = n;
    while(n != 0){
        rev = (rev*10) + n%10;
        n = n/10;
    }
    if(rev == temp){
        cout << "Palindrome";
    }else{
        cout << "Not a Palindrome";
    }   
    return 0; 
}