#include <iostream>
using namespace std;

int main()
{
	int hour, minute;

	cin >> hour >> minute; 

	if (minute - 45 < 0)
	{
		if (hour == 0)
		{
			hour = 23;
		}
		else
		{
			hour -= 1;
		}
		minute += 15;
	}
	else
	{
		minute -= 45;
	}

	cout << hour << " " << minute;
}