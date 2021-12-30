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
	for(int row=1;row<=n;row++){
		for(int spaces=1;spaces<=n-row;spaces++)
			cout<<"\t";
		for(int col=1;col<=row;col++){
			cout<<(row-1)*(row)/2 + col<<"\t";
		}
		cout<<endl;
	}
}
