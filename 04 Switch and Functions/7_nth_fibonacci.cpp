/*
FIBONACCI SERIES: 0 1 1 2 3 5 8 13 ....
i/p: n = 5
o/p: 3
*/

#include<iostream>
using namespace std;

// return nth fibonacci number
int nthFibo(int n){
	
	// base case 1
	if (n == 1){
		return 0;
	}
	
	// base case 2
	if (n == 2){
		return 1;
	}
	
	// other cases
	int a = 0, b = 1, c;
	for(int i=3;i<=n;i++){
		c = a + b;
		a = b;
		b = c;
	}
	
	return c;
}

int main(){
	
	int n;
	cout << "Enter n: ";
	cin >> n;
	
	cout << n << "th Fibonacci number is: " << nthFibo(n);
	
}
