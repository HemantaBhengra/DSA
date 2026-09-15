/* Patten printing 
Given n (number of rows), print the following pattern:
n = 5

**
**
**
**
**

*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cout<<"**"<<endl;   
    }
    return 0;
}