#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	double t;
	double x = 14.26;
	double y = -1.22;
	double z = 3.5e-2;

	t = 2 * cos(x - M_PI / 6) / (0.5 + pow(sin(y), 2)) * (1 + pow(z, 2) / (3 - pow(z, 2) / 5));
	

	cout << "t = " << t << endl;
	system("pause");
}







