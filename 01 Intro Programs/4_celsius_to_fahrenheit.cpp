#include<iostream>
using namespace std;

int main(){
	float tempC, tempF;
	cout<<"Enter temp in degree C: ";
	cin>>tempC;
	tempF = tempC * 9.0/5 + 32;
	cout<<"The temp in degree F is: "<<tempF;
}
