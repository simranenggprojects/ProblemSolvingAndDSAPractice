/*
i/p: 2 3
o/p: 3
explanation: 2 -> 1 0 and 3 -> 1 1
             total set bits = 3
*/

#include<iostream>
using namespace std;

// find set bits in one number
int findSetBits(int num){
	
	int count = 0;     // to store no of set bits
	
	while( num != 0 ){
		
		if (num & 1){ // bit = 1 --> set bit
			count++;
		}
		
		num = num >> 1;
		
	}
	
	return count;
	
}

// function to return total number of set bits in both numbers
int findSetBits(int num1, int num2){
	
	return findSetBits(num1) + findSetBits(num2);
	
}

int main(){
	
	int a,b;
	cin >> a >> b;
	
	cout << findSetBits(a,b);
}
