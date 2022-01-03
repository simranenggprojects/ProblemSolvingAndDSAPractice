#include<iostream>
using namespace std;

// function to find factorial of given number
int factorial(int num){
	
	if (num == 0)
		return 1;
		
	int fact = 1;	
	for(int i = 2; i <= num; i++){
		fact *= i;
	}
	
	return fact;
}

// function to return value of nCr
int nCr(int n, int r){
	return factorial(n)/(factorial(r) * factorial(n-r));
}

int main(){
	
	int n, r;
	
	// entering value of n
	cout << "Enter n: ";
	cin >> n;
	
	// entering value of r
	cout << "Enter r: ";
	cin >> r;
	
	// printing result
	cout << n << "C" << r << " = " << nCr(n,r);
	
}
