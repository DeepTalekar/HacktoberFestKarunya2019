#include "stdafx.h"
#include<iostream>

using namespace std;
using namespace System;

void main()
{
	int a[5],temp,max,index;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a Number" << endl;
		cin >> a[i];
	};

	for (int z = 4; z > 0; z--)
	{
		index = 0;
                max = a[0];
		for (int j = 1; j <= z; j++)
		{
			if (a[j] > max)
			{
				max = a[j];
				index = j;
			}
		};
		temp = a[z];
		a[z] = a[index];
		a[index] = temp;
	}


	//printing array
	cout << "The modified array is" << endl;
	for (int k = 0; k < 5; k++)
	{
		cout << a[k] << endl;
	};

	cout << "Thank You" << endl;
}
