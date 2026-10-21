#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t>0) {
         int n;
         cin >> n;
         int arr[n];
         for(int i = 0; i<n;i++){
            cin >> arr[i];
         }
         int count_0 = 0;
         int count_1 = 0;

         for(int i =0; i<n;i++){
            if(arr[i]==0){
                count_0++;
            }
            else{
                count_1++;
            }
         }

         for(int i =0;i<count_0;i++){
            cout << "0 ";
         }
         for(int i = 0;i < count_1; i++){
            cout << "1 ";
         }
         cout << endl;
         t--;
    }
 return 0;
}
 
