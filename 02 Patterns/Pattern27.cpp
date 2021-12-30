/*
PATTERN
n = 5
----------
1234554321
1234**4321
123****321
12******21
1********1
----------
*/

#include<iostream>
using namespace std;

int main(){
	int n; 
	cin>>n;
	
	for(int row=1;row<=n;row++){
		
		// print 1st triangle
		for(int var1=1;var1<=n-row+1;var1++)
			cout<<var1<<"\t";
		
		// print 2nd triangle
		for(int stars=1;stars<=(row-1)*2;stars++)
			cout<<"*\t";
			
		// print 3rd triangle
		for(int var2=n-row+1;var2>=1;var2--)
			cout<<var2<<"\t";
		
		// for new line
		cout<<"\n";
	}	
}
