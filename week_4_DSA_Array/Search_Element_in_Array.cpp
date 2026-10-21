#include <iostream>
using namespace std;
int main(){
 int n,m;
 cin >> n>>m;
 int arr[n];
 for(int i = 0; i<n;i++){
    cin >> arr[i];
 }
 bool flag = false;
 for(int i=0;i<n;i++){
    if(arr[i]==m){
        flag = true;
        break;
    }
 }
 if(flag){
    cout << "YES" << endl;
 }
 else{
    cout << "NO" << endl;
 }
 return 0;

}
