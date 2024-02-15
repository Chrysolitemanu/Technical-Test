/*Question 2: Fibonacci Sequence
Write a program to generate the Fibonacci sequence up to 100.*/

#include<iostream>
using namespace std;

int main(){
	int num1 = 0;
	int num2 = 1;
	int nextnum = 0;
	
	cout << "Fibonacci Sequence series upto 100" << endl;
	
	while(nextnum <= 100){
		cout << nextnum << " ";
		
		num1 = num2;
		num2 = nextnum;
		nextnum = num1 + num2;
	}
	
	return 0;
}
