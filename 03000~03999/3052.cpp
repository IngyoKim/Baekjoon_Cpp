#include <iostream>
using namespace std;

int main()
{
	int arr[10], a, cnt = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		arr[i] = a % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		int flag = 1;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				if (i != j)
				{
					arr[j] = -1;
				}
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == -1)
		{
			cnt++;
		}
	}

	cout << 10-cnt;
}