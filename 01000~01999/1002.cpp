#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int ax, ay, ar, bx, by, br, cnt = 0;
		double distance;
		cin >> ax >> ay >> ar >> bx >> by >> br;

		distance = sqrt(pow((ax - bx), 2) + pow((ay - by), 2));

		if (distance == 0 && ar == br)
		{
			cout << -1 << endl;
		}
		else if (distance > ar + br || distance < abs(ar - br) || (distance == 0 && ar != br))
		{
			cout << 0 << endl;
		}
		else if ((distance == ar + br || distance == abs(ar - br)))
		{
			cout << 1 << endl;
		}
		else if (distance < ar + br)
		{
			cout << 2 << endl;
		}
	}
}