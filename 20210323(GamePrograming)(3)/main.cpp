//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//#include <conio.h>
//
//using namespace std;
//
//void gotoXY(int x, int y)
//{
//	HANDLE hOut;
//	COORD Cur;
//
//	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//	Cur.X = x;
//	Cur.Y = y;
//
//	SetConsoleCursorPosition(hOut, Cur);
//}
//void NumSet(int* num, const int numArray)
//{
//	for (int i = 0; i < numArray / 2; i++)
//	{
//		int _num = 0;
//
//		while (true)
//		{
//			_num = (rand() % 10);
//
//			int j;
//			for (j = 0; j < numArray; j++) // 중복방지
//			{
//				if (num[j] == _num)
//				{
//					break;
//				}
//			}
//
//			if (j == numArray)
//			{
//				break;
//			}
//		}
//
//		for (int j = 0; j < 2; j++) // 같은 숫자 두곳에 넣기
//		{
//			while (true)
//			{
//				int index = rand() % 20;
//				if (num[index] == 0)
//				{
//					num[index] = _num;
//					break;
//				}
//			}
//		}
//	}
//}
//void SetSquare(int keyNum, const int numArray)
//{
//	int j = 1;
//	for (int i = 0; i < numArray; i++)
//	{
//		if (keyNum == i)
//		{
//			cout << " ";
//		}
//		else
//		{
//			cout << "*";
//		}
//
//		if (i == ((j * 5) - 1))
//		{
//			cout << endl;
//			j++;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//
//	const int numArray = 20;
//	int num[numArray] = { 0, };
//	int keyNum = 0;
//
//	NumSet(num, numArray);
//	SetSquare(keyNum, numArray);
//
//	int select = 0;
//	//while (true)
//	//{
//	//	select = _getch();
//	//	cout << select << endl;
//	//	if (select == 74)
//	//	{
//	//		cout << "75" << endl;
//	//	}
//	//}
//
//	// 숫자들 5 * 4로 출력
//	/*int j = 1;
//	for (int i = 0; i < numArray; i++)
//	{
//		cout << num[i] << " ";
//		if (i == ((j * 5) - 1))
//		{
//			cout << endl;
//			j++;
//		}
//	}*/
//
//	/*for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << Number[i * 5 + j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	//for (int i = 0; i < numArray; i++)
//	//{
//	//	cout << num[i] << " ";
//	//}
//
//	return(0);
//}