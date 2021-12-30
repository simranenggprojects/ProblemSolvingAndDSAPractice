/*
PATTERN
n = 4
-----------
1234
 234
  34
   4
*/

#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	for(int row=1;row<=n;row++){
		for(int spaces=1;spaces<=row-1;spaces++)
			cout<<" ";
		for(int col=row;col<=n;col++)
			cout<<col;
		cout<<endl;
	}
}
