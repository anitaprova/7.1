/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E7.1
Swaps values with pointers.
*/

#include <iostream>
using namespace std;

void sort2(double* p, double* q){
	if (*p > *q) {
		double temp = *p;
		*p = *q;
		*q = temp;
	}

	return;	
}

int main() {
	double x;
	cin >> x;
	
	double y;
	cin >> y;

	sort2(&x, &y);

	return 0;
}
