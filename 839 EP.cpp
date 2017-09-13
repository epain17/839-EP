// 839 EP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{

	int nrofCases = 0;
	char space;
	int wl, dl, wr, dr = 0;
	int rightSum, leftSum = 0;

	char s[25];

	std::cin >> nrofCases;
	for (int i = 0; i < nrofCases; i++)
	{
		std::cin >> space;
		if (space == ' ')
		{

			while (gets_s(s))
			{

			}

		}
	}

	if (leftSum == rightSum)
	{
		std::cout << "YES" << std::endl;
	}

	else if (leftSum != rightSum)
	{
		std::cout << "NO" << std::endl;
	}
	return 0;
}

