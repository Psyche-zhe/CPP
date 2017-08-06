// LintCode_sumstr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <stdio.h>
int _tmain(int argc, _TCHAR* argv[])
{
	std::string num1;
	std::string num2;
	std::cin >> num1;
	std::cin >> num2;
	int len = num1.size() > num2.size() ? num2.size() : num1.size();
	int len_1 = num1.size() > num2.size() ? num1.size() : num2.size();
	std::string sum = "";
	int flag = 0;
	for (int index = 0; index < len; index++)
	{
		int x = num1[num1.size() - index - 1] - '0';
		int y = num2[num2.size() - index - 1] - '0';
		if ((x + y) % 10 + flag == 10)
		{
			sum.insert(sum.begin(), 0 + '0');
		}
		else
		{
			sum.insert(sum.begin(), (x + y) % 10 + flag + '0');
		}
		if (10 <= x + y + flag)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	int flag2 = 0;	
	if (num1.size() > num2.size())
	{
		for (int index1 = len; index1 < len_1; index1++)
		{
			int m = num1[len_1-index1-1] - '0';
			if (m + flag >= 10)
			{
				sum.insert(sum.begin(), (m + flag) % 10 + flag2 + '0');
				flag2 = 1;
				flag = 0;
			}
			else
			{
				sum.insert(sum.begin(), (m + flag2) % 10 + '0');
				if (flag2 == 1 && (m + flag2) >= 10)
				{
					flag2 = 1;
				}
				else
				{
					
					flag2 = 0;
				}
			}
		}
		if (num1[0]-'0' + flag2 >= 10)
		{
			sum.insert(sum.begin(), '1');
		}
	}
	else if (num1.size() == num2.size())
	{
		int j = num1[0] - '0';
		int k = num2[0] - '0';
		if (j + k >= 10)
		{
			sum.insert(sum.begin(), '1');
		}
	}
	else
	{
		for (int index1 = len; index1 < len_1; index1++)
		{
			int n = num2[len_1 - index1 - 1] - '0';
			if (n + flag >= 10)
			{
				sum.insert(sum.begin(), (n + flag) % 10 + flag2 + '0');
				flag2 = 1;
				flag = 0;
			}
			else
			{
				sum.insert(sum.begin(), (n + flag2) % 10 + '0');
				if (flag2 == 1 && (n + flag2) >= 10)
				{
					//sum.insert(sum.begin(), (n + flag2) / 10 + '0');
					flag2 = 1;
				}
				else
				{
					
					flag2 = 0;
				}
			}
		}
		if (num2[0] - '0' + flag2 >= 10)
		{
			sum.insert(sum.begin(), '1');
		}
		
	}
	std::cout << sum << std::endl;
#if 0
	std::string res = "";
	int m = num1.size(), n = num2.size(), i = m - 1, j = n - 1, carry = 0;
	while (i >= 0 || j >= 0) {
		int a = i >= 0 ? num1[i--] - '0' : 0;
		int b = j >= 0 ? num2[j--] - '0' : 0;
		int sum = a + b + carry;
		res.insert(res.begin(), sum % 10 + '0');
		carry = sum / 10;
	}
	res = carry ? "1" + res : res;
	std::cout << res << std::endl;
#endif
	
	system("pause");
	return 0;
}

