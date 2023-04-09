#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	double x1, x2, delta;
	cout << "nhap he so a, b, c: \n";
	cin >> a;
	while (a == 0)
	{
		cout << "nhap a khac 0";
		cin >> a;
	}
	cin >> b >> c;
	delta = pow(b, 2) - 4 * a * c;

	if (delta != 0)
	{
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "phuong trinh co 2 nghiem phan biet x1 = " << x1 << " x2 = " << x2 << endl;
		}
		else
		{
			cout << "phuong trinh vo nghiem!";
		}

	}
	else
	{
		x1 = -b / (2 * a);
		cout << "phuong trinh co nghiem kep x1 = x2 = " << x1;
	}



	return 0;
}