#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	x = x_p;
	while (x <= x_k) {
		sum();
		cout << "-------------------------------------------------" << endl;
		cout << "|" << setw(7) << "x" << " |"
			<< setw(10) << "atan(x)" << " |"
			<< setw(10) << "f" << " |"
			<< setw(5) << "n" << " |"
			<< endl;
		cout << "-------------------------------------------------" << endl;
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atan(x) << " |"
			<< setw(10) << setprecision(5) << -4.0 * atan(1.0) / 2.0<< " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cin.get();
	return 0;
}
