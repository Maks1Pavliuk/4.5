#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R, a, b;

	srand((unsigned)time(NULL));

	cout << "R = "; cin >> R;


	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;

		if ((pow(x, 2) + pow(y, 2) >= pow(R, 2) && (x >= a || x <= -a)) ||
			(pow(x, 2) + pow(y, 2) >= pow(R, 2) && (y >= b || y <= -b)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - R;
		y = 6. * rand() / RAND_MAX - R;
		if ((pow(x, 2) + pow(y, 2) >= pow(R, 2) && (x >= a || x <= -a)) ||
			(pow(x, 2) + pow(y, 2) >= pow(R, 2) && (y >= b || y <= -b)))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}

	return 0;
}