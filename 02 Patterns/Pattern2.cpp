/*
PATTERN
n = 3
1 1 1
2 2 2
3 3 3

*/

#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}