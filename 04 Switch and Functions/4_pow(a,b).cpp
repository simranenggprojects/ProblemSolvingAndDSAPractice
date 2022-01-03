// a raised to power b
// assumption: 
// 1. positive powers only
// 2. integer powers

#include<iostream>
using namespace std;

int power(int a, int b){
	
	int prod = 1; // variable to store final ans
	
	for(int i=1;i<=b;i++){
		prod *= a;
	}
	
	return prod;
}

int main(){
	
	int a,b;
	cin >> a >> b;
	
	int prod = power(a,b);
	
	cout << a << " ^ " << b << " = " << prod;
}
