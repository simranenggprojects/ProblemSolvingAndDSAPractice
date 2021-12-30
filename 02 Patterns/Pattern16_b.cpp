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
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout<<char('A' + ((row-1)*(row))/2 + col - 1)<<" ";
		}
		cout<<endl;
	}
}
