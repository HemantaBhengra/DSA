#include <iostream>
using namespace std;
int main(){
    int rows,colm;
    cin>>rows>>colm;
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=colm;j++){
            if(i == 1 || i == rows || j == 1 || j == colm){
                cout<<"* ";
        }else {
            cout<<"  ";
        }
    }
        cout<<endl;
    }
    return 0;
}