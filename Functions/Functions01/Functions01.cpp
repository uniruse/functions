1. Да се намери при кое от две зададени цели числа сумата от цифрите е по - голяма.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int digitSum(int number)
{
	int sum = 0;
	for (number = abs(number); number > 0; number /= 10)
	{
		sum += number % 10;
	}
	return sum;
}

void main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	int aSum = digitSum(a);
	int bSum = digitSum(b);
	if (aSum > bSum)
	{
		cout << "a's sum " << aSum << " is bigger" << endl;
	}
	else if (aSum < bSum)
	{
		cout << "b's sum " << bSum << " is bigger" << endl;
	}
	else
	{
		cout << "a's and b's sum are equal: " << aSum << endl;
	}
	system("pause");
}

