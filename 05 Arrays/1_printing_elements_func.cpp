#include<iostream>
using namespace std;

// function to print array
void printArray(int a[], int n){
	
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	
	cout << endl;
	
}

int main(){
	
	int arr[5] = {-1,7,9,10,-11};
	
	printArray(arr,5);
	
}
