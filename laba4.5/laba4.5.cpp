#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));

	
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;

		if (y <= (-x - (-R)) || ((y * y + x * x <= R * R)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	
	cout << endl << fixed;
	
	
		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - 3; // ��������� ����������� x
			y = 6. * rand() / RAND_MAX - 3; // ��������� ����������� y
			R = 6. * rand() / RAND_MAX - 3; // ��������� ����������� R
			if (y <= (-x - (-R)) || ((y * y + x * x <= R * R)))
				
				//������� ����������
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
			//ʳ���� ����������
		}
	
		return 0;
}