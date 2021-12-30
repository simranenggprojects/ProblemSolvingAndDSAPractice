/*
PATTERN
n = 4
-----------
1111
 222
  33
   4
*/

#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	for(int row=1;row<=n;row++){
		for(int spaces=1;spaces<=row-1;spaces++)
			cout<<" ";
		for(int col=1;col<=n-row+1;col++)
			cout<<row;
		cout<<endl;
	}
}

