/*
I/P
-----
5
1 10 3 -4 7
----------
O/P
--------
17
*/

#include<iostream>
using namespace std;

// function to find sum of elements in array
int findSum(int a[], int n){
	
	int sum = 0; // to store sum of elements
	
	for(int i=0; i<n; i++){
		sum += a[i];
	}
	
	return sum;
}

int main(){
	
	int n;
	cout << "Enter here: ";
	cin >> n; // size of array
	
	int arr[50];
	
	// inputting elements in array
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	cout << "Sum of array elements: " << findSum(arr,n) << endl;
	
}
