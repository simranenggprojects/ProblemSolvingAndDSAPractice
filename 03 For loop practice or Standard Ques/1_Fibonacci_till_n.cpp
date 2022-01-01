// assumption: n>=1

#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	if(n == 1){
		cout<<0;
		return 0;
	}
	int a = 0, b = 1, c;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=n-2;i++){
		c = a + b;
		cout<<c<<" ";
		a = b;
		b = c;
	}
}
