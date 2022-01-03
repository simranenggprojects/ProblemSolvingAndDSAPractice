#include<iostream>
using namespace std;

int main(){
	int a,b; // for input integers
	char ch; // for operator
	
	cin >> a >> b >> ch;
	
	switch(ch){
		
		case '+':
			cout << a << " + " << b << " = " << a+b;
			break;
			
		case '-':
			cout << a << " - " << b << " = " << a-b;
			break;
			
		case '*':
			cout << a << " * " << b << " = " << a*b;
			break;
			
		case '/':
			cout << a << " / " << b << " = " << a/b;
			break;
			
		case '%':
			cout << a << " % " << b << " = " << a%b;
			break;
			
		default:
			cout << "Invalid Operator";
			
	}
}
