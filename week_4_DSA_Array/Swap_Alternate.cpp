#include <iostream>
#include <utility>
using namespace std;
int main(){
 int t;
 cin >> t;
 while(t>0){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<n;i+=2){
        swap(arr[i],arr[i-1]);
    }
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
 
    t--;
 }
 return 0;

}
