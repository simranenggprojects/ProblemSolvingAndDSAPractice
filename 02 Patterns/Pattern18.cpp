/*
PATTERN
n = 4
---------
D
C D
B C D
A B C D
*/

#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout<<char('A'+n-row+col-1)<<" ";
		}
		cout<<endl;
	}
}
