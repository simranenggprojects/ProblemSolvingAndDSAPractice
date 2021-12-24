#include<iostream>
using namespace std;
// print sum of even numbers between 1 to n
int main(){
	int n,sum=0;
	cout<<"Enter n: ";
	cin>>n;
	n = (n-1)/2;
	sum = n*(n+1);
	cout<<"Sum is: "<<sum;
}
