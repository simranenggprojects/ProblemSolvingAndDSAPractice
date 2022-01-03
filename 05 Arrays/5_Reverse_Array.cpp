#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
	
	// loop to reverse array elements
	for(int i=0,j=n-1 ; i<n/2 ;i++,j--){
		
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		
	}

}

int main(){
	
	int arr[] = {1,10,0,-4,8,99,70,89,2};
	
	int size = sizeof(arr) / sizeof(int);
	
	cout << "Array before reversal:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	reverseArray(arr,size); // function to reverse array
	
	cout << endl << "Array after reversal:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
}
