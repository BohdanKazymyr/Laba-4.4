// Lab_4.4.cpp
// < Казимир Богдан >
// Лабораторна робота № 4.4
// Варіант 10
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx,R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -8 - R)
			y = R;
		else
			if (-8 - R < x && x <= -8 + R)
				y = R + sqrt(R * R - (x + 8) * (x + 8));
			else
				if (-8 + R < x && x <= -4)
					y = R;
				else
					if (-4 < x && x <= 0)
						y = R + (-R / 4) * (x + 4);
					else
						if (0 < x && x <= 2)
						   y = -x;
						else y = 2 - x;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}