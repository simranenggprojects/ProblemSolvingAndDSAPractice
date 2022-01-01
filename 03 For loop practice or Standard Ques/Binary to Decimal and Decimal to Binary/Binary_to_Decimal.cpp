#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	// enter number in binary
	int n;
	cin >> n;
	
	int ans = 0; // to store answer in decimal
	int k = 0;   // for powers
	
	while ( n != 0 ){
		
		bool bit = n % 10;
		if(bit){
			ans = ans + pow(2,k);
		}
		k++;
		n /= 10;
	}
	
	cout << ans;
}
