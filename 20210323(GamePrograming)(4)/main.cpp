#include <iostream>
#include <ctime>
#include <Windows.h>
#include <conio.h>

using namespace std;

void gotoXY(int x, int y)
{
	HANDLE hOut;
	COORD Cur;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Cur.X = x;
	Cur.Y = y;

	SetConsoleCursorPosition(hOut, Cur);
}

int main()
{
	const int num = 20;
	int Number[num] = { 0, };
	bool isOpen[num] = { false, };
	int trueNum = 0;

	srand((unsigned)time(NULL));

	int sameNum = 0;
	bool bSame = false;

	for (int i = 0; i < num; i++)
	{
		do
		{
			sameNum = 0;
			bSame = false;
			Number[i] = rand() % 10;

			if (i > 1)
			{
				for (int j = 0; j < i; j++)
				{
					if (Number[i] == Number[j])
					{
						sameNum++;
					}
				}
				bSame = (sameNum > 1);
			}
		} while (bSame);
		
	}

	for (int i = 0; i < num; i++)
	{
		gotoXY(i % 5,  i / 5);
		cout << "*";
	}

	//for (int i = 0; i < num; i++)
	//{
	//	cout << Number[i] << " ";
	//}

	/*for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << Number[i * 5 + j] << " ";
		}
		cout << endl;
	}*/


	while (true)
	{
		int x[2] = { 0, }, y[2] = { 0, }, num[2] = { 0, };

		for (int i = 0; i < 2; i++)
		{
			int key = _getch();

			if (key == 'q')
			{
				x[i] = 0;
				y[i] = 0;
				gotoXY(x[i], y[i]);
				cout << Number[0];
				num[i] = 0;
			}
			else if (key == 'w')
			{
				x[i] = 1;
				y[i] = 0;
				gotoXY(x[i], y[i]);
				cout << Number[1];
				num[i] = 1;
			}
			else if (key == 'e')
			{
				x[i] = 2;
				y[i] = 0;
				gotoXY(x[i], y[i]);
				cout << Number[2];
				num[i] = 2;
			}
			else if (key == 'r')
			{
				x[i] = 3;
				y[i] = 0;
				gotoXY(x[i], y[i]);
				cout << Number[3];
				num[i] = 3;
			}
			else if (key == 't')
			{
				x[i] = 4;
				y[i] = 0;
				gotoXY(x[i], y[i]);
				cout << Number[4];
				num[i] = 4;
			}
			else if (key == 'a')
			{
				x[i] = 0;
				y[i] = 1;
				gotoXY(0, 1);
				cout << Number[5];
				num[i] = 5;
			}
			else if (key == 's')
			{
				x[i] = 1;
				y[i] = 1;
				gotoXY(x[i], y[i]);
				cout << Number[6];
				num[i] = 6;
			}
			else if (key == 'd')
			{
				x[i] = 2;
				y[i] = 1;
				gotoXY(x[i], y[i]);
				cout << Number[7];
				num[i] = 7;
			}
			else if (key == 'f')
			{
				x[i] = 3;
				y[i] = 1;
				gotoXY(x[i], y[i]);
				cout << Number[8];
				num[i] = 8;
			}
			else if (key == 'g')
			{
				x[i] = 4;
				y[i] = 1;
				gotoXY(x[i], y[i]);
				cout << Number[9];
				num[i] = 9;
			}
			else if (key == 'z')
			{
				x[i] = 0;
				y[i] = 2;
				gotoXY(x[i], y[i]);
				cout << Number[10];
				num[i] = 10;
			}
			else if (key == 'x')
			{
				x[i] = 1;
				y[i] = 2;
				gotoXY(x[i], y[i]);
				cout << Number[11];
				num[i] = 11;
			}
			else if (key == 'c')
			{
				x[i] = 2;
				y[i] = 2;
				gotoXY(x[i], y[i]);
				cout << Number[12];
				num[i] = 12;
			}
			else if (key == 'v')
			{
				x[i] = 3;
				y[i] = 2;
				gotoXY(x[i], y[i]);
				cout << Number[13];
				num[i] = 13;
			}
			else if (key == 'b')
			{
				x[i] = 4;
				y[i] = 2;
				gotoXY(x[i], y[i]);
				cout << Number[14];
				num[i] = 14;
			}
			else if (key == 'y')
			{
				x[i] = 0;
				y[i] = 3;
				gotoXY(x[i], y[i]);
				cout << Number[15];
				num[i] = 15;
			}
			else if (key == 'u')
			{
				x[i] = 1;
				y[i] = 3;
				gotoXY(x[i], y[i]);
				cout << Number[16];
				num[i] = 16;
			}
			else if (key == 'i')
			{
				x[i] = 2;
				y[i] = 3;
				gotoXY(x[i], y[i]);
				cout << Number[17];
				num[i] = 17;
			}
			else if (key == 'o')
			{
				x[i] = 3;
				y[i] = 3;
				gotoXY(x[i], y[i]);
				cout << Number[18];
				num[i] = 18;
			}
			else if (key == 'p')
			{
				x[i] = 4;
				y[i] = 3;
				gotoXY(x[i], y[i]);
				cout << Number[19];
				num[i] = 19;
			}
		}

		if (Number[num[0]] != Number[num[1]])
		{
			Sleep(1000);
			for (int i = 0; i < 2; i++)
			{
				gotoXY(x[i], y[i]);

				if (!isOpen[num[i]])
				{
					cout << "*";
				}
			}
		}
		else if (Number[num[0]] == Number[num[1]])
		{
			trueNum++;

			for (int i = 0; i < 2; i++)
			{
				isOpen[num[i]] = true;
			}

			if (trueNum == 10)
			{
				cout << "모두 맞혔습니다." << endl;
				break;
			}
		}
	}

	/*for (int i = 0; i < num; i++)
	{
		key = _getch();
		cout << key << " ";
	}*/



	return(0);
}