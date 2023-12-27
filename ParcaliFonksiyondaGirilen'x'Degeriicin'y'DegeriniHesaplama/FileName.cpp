#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int x, y;
	cout << "Bir x deðeri giriniz : ";
	cin >> x;

	if (x < 1)
	{
		y = 3 * x - 4;
	}
	else if (1 <= x && x <= 10)
	{
		y = x + 2;
	}
	else if (x > 10)
	{
		y = 2 * x + 4;
	}
	
	cout << "y deðeriniz : " << y << endl;

	return 0;
}