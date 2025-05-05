#include <iostream>

using namespace std;

int main(){
	int isa,dalawa,tatlo,apat,lima;
	int sum;
	double average;
	
	cout << “Enter 5 integer numbers\n: ” ;
	
	cout << “Number 1: “;	
	cin >> isa;
	
	cout << “Number 2: “;
	cin >> dalawa;
	
	cout << “Number 3: “;
	cin >> tatlo;
	
	cout << “Number 4: “;
	cin >> apat;
	
	cout << “Number 5: “;
	cin >> lima;
	
	sum = isa + dalawa + tatlo + apat+ lima;
	average = sum/5.0;
	
	cout << “The average is: “ << average << endl;
	
	return 0;
}