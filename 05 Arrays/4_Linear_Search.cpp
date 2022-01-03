#include<iostream>
using namespace std;

// linear search
int linearSearch(int a[], int n, int ele){
	
	for(int i=0; i<n; i++){
		
		if (a[i] == ele)
			return i; // element found
		
	}
	
	return -1;       // element not found
}

int main(){
	
	int arr[] = {1,10,0,-4,8,99,70,89};
	
	int size = sizeof(arr) / sizeof(int);
	
	int element;
	cout << "Enter element you want to search: ";
	cin >> element;
	
	int idx = linearSearch(arr,size,element);
	
	// element not found
	if ( idx == -1){
		cout << element  << " not found in array" << endl;
	}
	// element found at idx
	else{
		cout << element << " found at index " << idx << endl;
	}
	
}
