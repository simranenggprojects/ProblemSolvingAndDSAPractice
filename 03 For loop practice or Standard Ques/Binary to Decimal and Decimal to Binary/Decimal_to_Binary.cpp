#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	// enter number in decimal
	int n;
	cin >> n;
	
	int ans = 0; // to store in binary
	int k = 0;   // for powers
	
	while ( n != 0 ){
		ans = ans + (n&1)*pow(10,k);
		k++;
		n = n >> 1;
	}
	
	cout << ans;
}
