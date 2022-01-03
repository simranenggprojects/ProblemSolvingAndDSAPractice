#include<iostream>
using namespace std;

int main(){
	
	int amount; 
	cout << "Enter Amount: ";   
	cin >> amount;
	
	int tempAmount = amount; // temporary variable to store amount
	
	// number of 100 rs notes needed
	int denomination_100 = tempAmount / 100;
	tempAmount = tempAmount - 100 * denomination_100;
	
	// number of 50 rs notes needed
	int denomination_50 = tempAmount / 50;
	tempAmount = tempAmount - 50 * denomination_50;
	
	// number of 20 rs notes needed
	int denomination_20 = tempAmount / 20;
	tempAmount = tempAmount - 20 * denomination_20;
	
	// number of 1 re notes needed
	int denomination_1 = tempAmount;
	
	// printing result
	cout << "Rs. 100 : " << denomination_100 <<endl;
	cout << "Rs. 50  : " << denomination_50 <<endl;
	cout << "Rs. 10  : " << denomination_20 <<endl;
	cout << "Rs. 1   : " << denomination_1 <<endl;
	
}
