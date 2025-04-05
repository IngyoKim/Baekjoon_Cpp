#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int fibo[50] = { 0 , 1, 1 };
	for (int i = 3; i < 50; i++)
	{
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}

	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		int inputNum;

		cin >> inputNum;

		if (inputNum == 0)
		{
			cout << 1 << " " << fibo[inputNum] << endl;
		}
		else
		{
			cout << fibo[inputNum - 1] << " " << fibo[inputNum] << endl;
		}
	}
}