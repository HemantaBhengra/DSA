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
    int max_num = arr[0][0];
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            if(arr[i][j] > max_num){
                max_num = arr[i][j];
            }
        }
    }
    cout << max_num << endl;
    return 0;
}