#include <iostream>
using namespace std;

void sort2(double* p, double* q){
	if (*p > *q) {
		double* temp = p;
		p = q;
		q = temp;
	}
	cout << *p << *q << endl;
}



int main() {
	double x;
	cin >> x;
	
	double y;
	cin >> y;

	//cout << x << y << endl;
	sort2(&x, &y);
	//cout << x << y << endl;

	return 0;
}
