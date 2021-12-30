/*
PATTERN
n = 3
---------
A
B B
C C C
*/

#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<char(row+'A'-1)<<" ";
        }
        cout<<endl;
    }
}