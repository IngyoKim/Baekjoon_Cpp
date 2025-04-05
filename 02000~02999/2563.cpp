//#include <iostream>
//using namespace std;
//
//int put(int a, int b);
//int area[100][100];
//
//int main()
//{
//	int num, cnt = 0;
//
//	cin >> num;
//
//	for (int i = 0; i < num; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		put(x, y);
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		for (int j = 0; j < 100; j++)
//		{
//			if (area[i][j] == 1)
//			{
//				cnt++;
//			}
//		}
//	}
//
//	cout << cnt;
//}
//
//int put(int a, int b)
//{
//	for (int i = a; i < a + 10; i++)
//	{
//		for (int j = b; j < b + 10; j++)
//		{
//			area[i][j] = 1;
//		}
//	}
//	return 0;
//}