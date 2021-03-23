#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

void SetNum(int* num, const int arrayNum)
{
	for (int i = 0; i < arrayNum; i++)
	{
		num[i] = (rand() % 100) + 1;
	}
}
void CoutNum(int* num, const int arrayNum)
{
	for (int i = 0; i < arrayNum; i++)
	{
		cout << num[i] << " ";
		Sleep(1000);
		system("CLS");
	}
}
void CheckAnswer(int* num, const int arrayNum)
{
	int answer = 0;

	for (int i = 0; i < arrayNum; i++)
	{
		cin >> answer;
		if (answer == num[i])
		{
			if (i == (arrayNum - 1))
			{
				cout << "모두 맞혔습니다." << endl;
				break;
			}
			else
			{
				continue;
			}
		}
		else
		{
			cout << "틀렸습니다." << endl;
			break;
		}
	}
}
int main()
{
	const int arrayNum = 10;
	int num[arrayNum] = { 0, };

	srand((unsigned)time(NULL));

	SetNum(num, arrayNum);

	CoutNum(num, arrayNum);

	CheckAnswer(num, arrayNum);

	return(0);
}