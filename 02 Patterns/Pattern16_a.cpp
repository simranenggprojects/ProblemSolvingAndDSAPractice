/*
PATTERN
n = 4
---------
A
B C
D E F 
G H I J
*/

#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    char ch = 'A';
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
