/*
PATTERN 
n = 4
-----------
1
2 1
3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<row - col + 1<<" ";
        }
        cout<<endl;
    }
}