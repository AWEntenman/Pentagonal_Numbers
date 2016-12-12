// Pentagonal_Numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

const int tblSz = 100000;

int main()
{
	long long pentagonalNums[tblSz];
	int i, j;
	long long sm, df;//sum and difference
	char x;
	//
	// create table of first tblSz pentagonal numbers
	//
	for ( i = 1; i <= tblSz; i++)
	{
		pentagonalNums[i-1] = i*(3 * i - 1) / 2;
	}
	//
	//Search for matching sum and differinces of pentagonal numbers.
	//
	for ( i = 0; i < tblSz-1; i++)
	{
		for ( j = i+1; j < tblSz; j++)
		{
			sm = pentagonalNums[j] + pentagonalNums[i];
			df = pentagonalNums[j] - pentagonalNums[i];
			
		}
	}
	cout << "Finished, type q to close" << endl;
	cin >> x;

    return 0;
}

