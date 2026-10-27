#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int arr[n][m];
    for(int i = 0; i<n ;i++){
        for(int j = 0;j<m;j++){
            cin >> arr[i][j];
        }
    }
   bool flag = false;
   for(int i =0;i<n;i++){
    for(int j =0;j<m;j++){
        if(arr[i][j] == k ){
            flag = true;
            break;
        }
    }
   }
   if(flag){
    cout << "true" << endl;
   }else{
    cout << "false" << endl;
   }
   return 0;
}