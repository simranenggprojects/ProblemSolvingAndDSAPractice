/*
i/p: 1 2 3 4 5
o/p: 2 1 4 3 5
i/p: 1 2 3 4 5 6
o/p: 2 1 4 3 6 5
*/

#include<iostream>
using namespace std;

// function to print array elements
void printArray(int arr[], int n){
	
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

// function to swap alternate elements of array
void swapAlternate(int arr[], int n){
	
	for(int i=0; i<=(n-2); i+= 2){
		swap(arr[i],arr[i+1]);
	}
}

int  main(){
	
	int n;
	cout << "Enter size of array: ";
	cin >> n; 
	
	int arr[100];
	
	for(int i=0; i<n; i++){
		cin >> arr[i]; // inputting values of array
	}
	
	cout << "BEFORE OPERATION:\n";
	printArray(arr,n);
	
	swapAlternate(arr,n); // function call to swap alternate elements
	
	cout << "AFTER OPERATION:\n";
	printArray(arr,n);
}
