// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;
double f(const double a);
int main()
{
	double x,y;
	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	double z = (f(3) + f(x + 1) + 1) /
		(1 - pow(f(y + 1), 2));
	cout << "z = " << z << endl;
	return 0;
}
double f(const double a)
{
	return (a * a + 1) / (pow(sin(a), 2) +1);
}

