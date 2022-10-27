#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, R, y;

	srand((unsigned)time(NULL));


	cout << "R= "; cin >> R;

	for (int i = 0; i <= 10; i++) {

		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((pow(y, 2) <= pow(R, 2) - pow(x, 2) && y >= 0 && x <= 0) || (y >= -2 * x && y >= 2 * x - 2 * R && y <= 0))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}
	cout << endl << fixed;


	for (int i = 0; i <= 10; i++) {

		x = -R + rand() * 2. * R / RAND_MAX;
		y = -R + rand() * 2. * R / RAND_MAX;

		if ((pow(y, 2) <= pow(R, 2) - pow(x, 2) && y >= 0 && x <= 0) || (y >= -2 * x && y >= 2 * x - 2 * R && y <= 0))

			cout << setw(10) << setprecision(4) << x << " " 
			<< setw(10) << setprecision(4) << y << " " << " | " <<  "yes" << endl;
		else
			cout << setw(10) << setprecision(4) << x << " "
			<< setw(10) << setprecision(4) << y << " " << " | " << "no" << endl;
	}

	system("pause");
	return 0;


}