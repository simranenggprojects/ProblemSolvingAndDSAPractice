// is number prime or not
#include<iostream>
using namespace std;

bool isPrime(int n){
	// if any number between 2 and root n divides then not prime
	// else prime
	for(int i=2;i*i<=n;i++){  
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main(){
	cout<<"Enter Number: ";
	int n; cin>>n;
	
	if(isPrime(n)){  // function to check prime numbers
		cout<<"Prime";
	}
	else{
		cout<<"Not Prime";
	}
}
