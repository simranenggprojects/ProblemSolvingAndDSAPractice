/*
PATTERN
n = 3
----------
   1
  23
 456
*/

#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int val = 1;
	for(int row=1;row<=n;row++){
		for(int spaces=1;spaces<=n-row;spaces++)
			cout<<"\t";
		for(int col=1;col<=row;col++){
			cout<<val<<"\t";
			val++;
		}
		cout<<endl;
	}
}
