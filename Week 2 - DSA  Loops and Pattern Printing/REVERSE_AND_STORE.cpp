//REVERSE AND STORE IN A VARIABLE

#include<iostream>
using namespace std;
int main(){
      int am = 0;
      int n ;
      cin >> n;
    while(n != 0){
        am = (am*10) + n%10;
        n = n/10;
    }  
    cout << "the reverse number is " << am;
    return 0;
}
