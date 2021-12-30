/*
PATTERN 
n = 3
-----------
1 2 3
4 5 6
7 8 9
*/

#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<col + n * (row-1)<<" ";
        }
        cout<<endl;
    }
}