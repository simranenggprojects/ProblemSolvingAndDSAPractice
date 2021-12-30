/*
PATTERN
n = 3
* * *
* * *
* * *
*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){       // rows till n
        for(int col=1;col<=n;col++){   // cols till n
            cout<<"* ";
        }
        cout<<endl;
    }
}