#include<iostream>
using namespace std;

/*
Linear Search
1. Brute Force Search
2. Find whether element is present in array or not via 
   complete linear scan of array

Complexity:
 Let T(n) denotes time complexity to search given key
 from array of 'n' elements. 
 Here, 'n' denotes no. of elements in array in which
 we are searching for given key
 Best Case: O(1)
 Average Case: O(n)
 Worst Case: O(n)
*/

int lsearch(int *a,int n,int key){
	for(int i=0;i<n;i++){
		// check if current element matches key
		if(a[i]==key){
			return i; // return index
		}
	}
	return -1; // when loop is exhausted, return -1
}

int main(){
	int arr[] = {52,10,11,18,25,56,88};
	int n = sizeof(arr)/sizeof(int);
	
	int key;
	cout<<"Enter key: ";
	cin>>key;
	
	int idx = lsearch(arr,n,key);
	if(idx!=-1){
		cout<<key<<" found at index "<<idx<<"\n";
	}
	else{
		cout<<key<<" not found\n";
	}
}
