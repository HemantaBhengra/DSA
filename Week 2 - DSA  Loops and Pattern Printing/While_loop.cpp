// loop -- while , for , do-while

#include<iostream>
using namespace std;
int main(){
    // while loop
    int n;

    cin >>n;
    int i = 1;
    while(i <= n){
        cout << i <<(i%2==0?"Even":"Odd")<< endl;
        i++;
    }
}