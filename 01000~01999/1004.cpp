//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num;
//
//	cin >> num;
//
//	for (int i = 0; i < num; i++)
//	{
//		int startX, startY, endX, endY, testcase, cnt = 0;
//		
//		cin >> startX >> startY >> endX >> endY;
//		cin >> testcase;
//
//		for (int j = 0; j < testcase; j++)
//		{
//			int x, y, r;
//
//			cin >> x >> y >> r;
//			if ((startX - x) * (startX - x) + (startY - y) * (startY - y) < r * r || (endX - x) * (endX - x) + (endY - y) * (endY - y) < r * r)
//			{
//				if ((startX - x) * (startX - x) + (startY - y) * (startY - y) < r * r && (endX - x) * (endX - x) + (endY - y) * (endY - y) < r * r)
//				{
//					cnt--;
//				}
//				cnt++;
//			}
//		}
//		cout << cnt << endl;
//	}
//}