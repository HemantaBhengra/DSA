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
    int best_row = -1;
    int max_count = 0;
    for(int i =0;i<n;i++){
        int count = 0;
        for(int j =0; j<m;j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            best_row = i;
        }
    }
    cout << best_row;
    return 0;
}