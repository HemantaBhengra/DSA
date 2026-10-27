#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i<n ;i++){
        for(int j = 0;j<m;j++){
            cin >> arr[i][j];
        }
    }
  for(int i = 0;i<n;i++){
    int min_num = arr[i][0];
    for(int j =0;j<m;j++){
        if(arr[i][j] < min_num){
            min_num = arr[i][j];
        }
    }
    cout << min_num << " ";
  }
  return 0;
}