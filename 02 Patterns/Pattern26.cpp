/*
PATTERN
n = 5
-----------
    1
   121
  12321
 1234321
123454321
*/

#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	for(int row=1;row<=n;row++){
		// spaces
		for(int spaces=1;spaces<=n-row;spaces++)
			cout<<"\t";
		// first triangle
		for(int col=1;col<=row;col++)
			cout<<col<<"\t";
		// second triangle
		for(int var=row-1;var>=1;var--)
			cout<<var<<"\t";
		cout<<endl;
	}
}
