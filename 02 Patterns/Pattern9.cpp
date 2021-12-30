/*
PATTERN 
n = 4
-----------
1
2 3
3 4 5
4 5 6 7
*/

#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<row + col - 1<<" ";
        }
        cout<<endl;
    }
}