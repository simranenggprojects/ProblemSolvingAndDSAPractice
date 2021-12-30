/*
PATTERN
n = 3
----------
A B C 
D E F
G H I

Without using extra bytes of character
*/

#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<char(col+'A'-1+n*(row-1))<<" ";
        }
        cout<<endl;
    }
}