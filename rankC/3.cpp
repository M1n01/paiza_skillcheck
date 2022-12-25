// 解錠notClear
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

void	init(int *x, int d)
{
	int	n;

	for (int i = 0; i < d; i++)
		x[i] = n;
	for (int i = 0; i < d; i++)
	{
		x[i] -= x[(d - 1) / 2];
		if (x[i] < 0)
			x[i] += d;
	}
	return ;
}

int	main()
{
	int	d;
	int	n;
	int	l;
	int	sum = 0;

	cin >> d >> n >> l;
	int	k[n];
	for (int i = 0; i < n; i++)
		cin  >> k[i];
	int	c = 0;
	int	x[d];
	init(x, d);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < d; j++)
		{
			x[j] -= k[i] - c;
			if (x[j] >= d)
				x[j] -= d;
			if (x[j] < 0)
				x[j] += d;
		}
		for (int j = 0; j < d; j++)
		{
			if (x[j] == k[i])
				sum += j - (d - 1) / 2;
		}
		c = k[i];
	}
	if (sum <= l)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
	return (0);
}

