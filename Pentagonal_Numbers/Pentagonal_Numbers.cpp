// Pentagonal_Numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

const int tblSz = 10000;

int main()
{
	long double pentagonalNums[tblSz];
	int i, j, k, n;
	long double sm, df;//sum and difference
	long double sms, dfs;
	char x;


	//
	// create table of first tblSz pentagonal numbers
	//
	for (i = 1; i <= tblSz; i++)
	{
		pentagonalNums[i - 1] = i*(3 * i - 1) / 2;
	}
	//
	//Search for matching sum and differinces of pentagonal numbers.
	//
	for (i = 0; i < tblSz - 1; i++)
	{
		for (j = i + 1; j < tblSz; j++)
		{
			sm = pentagonalNums[j] + pentagonalNums[i];
			sms = (sqrt(24 * sm + 1) + 1) / 6;
			if (sms == floor(sms))
			{
				df = pentagonalNums[j] - pentagonalNums[i];
				dfs = (sqrt(24 * df + 1) + 1) / 6;
				if (dfs == floor(dfs))
				{
					cout << "found " << sm << " and " << df << endl;
				}
			}
		}
		cout << "Finished, type q to close" << endl;
		cin >> x;

		return 0;
	}
}
