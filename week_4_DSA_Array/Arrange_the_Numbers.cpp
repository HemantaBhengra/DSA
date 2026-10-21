#include <iostream>
using namespace std;
int main(){
 int t;
 cin >> t;
 while(t>0){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
     arr[i] = i+1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2 !=0){
            cout << arr[i] << " ";
        }
    }
    for(int i= n-1;i>=0;i--){
        if(arr[i]%2 == 0){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    t--;
 }
 return 0;

}
