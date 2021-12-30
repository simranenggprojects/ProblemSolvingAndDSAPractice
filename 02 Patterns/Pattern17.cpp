/*
PATTERN
n = 4
---------
A
B C
C D E
D E F G
*/

#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout<<char('A'+row+col-2)<<" ";
		}
		cout<<endl;
	}
}
