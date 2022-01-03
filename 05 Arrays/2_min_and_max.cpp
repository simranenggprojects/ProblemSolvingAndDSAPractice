#include<iostream>
using namespace std;

// function to find minimum element in array
int findMin(int *a, int n){
	
	int min = a[0]; // to store minimum element at particular iteration
	
	for(int i=1; i<n; i++){
		
		// to see if element is even smaller than min
		if (a[i] < min){
			min = a[i];
		}
			
	}
	
	return min;
	
}

// function to find maximum element in array
int findMax(int *a, int n){
	
	int max = a[0]; // to store maximum element at particular iteration
	
	for(int i=1; i<n; i++){
		
		// to see if element is even larger than max
		if (a[i] > max){
			max = a[i];
		}
			
	}
	
	return max;
	
}

int main(){
	
	int arr[] = {10,20,30,60,-3};
	
	int size = sizeof(arr)/sizeof(int); // to find sizeof array
	
	cout << "Minimum element of the array: " << findMin(arr,size) << endl;
	cout << "Maximum element of the array: " << findMax(arr,size) << endl;
	
}
