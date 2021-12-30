/*
PATTERN 
n = 4
-----------
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    
    int var = 1; // for counting
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<var<<" ";
            var++;
        }
        cout<<endl;
    }
}