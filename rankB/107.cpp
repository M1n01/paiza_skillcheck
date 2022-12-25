// notClear
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
#include <stdio.h>
using namespace std;

int	main()
{
	int	n, m, k;

	cin >> n >> m >> k;
	int	c[n];
	// puts("hello");
	for (int i = 0; i < n; i++)
		c[i] = i + 1;
	int	tmp[m];
	int	a[n];
	for (int cnt = 0; cnt < k; cnt++)
	{
		// 1シャッフル
		int i = 0;
		while (i < n)
		{
			int j = 0;
			while (j < m && i + j < n)
			{
				// puts("1");
				tmp[j] = c[i + j];
				j++;
			}
			int l = 0;
			while (l < m)
			{
				// puts("2");
				a[i + l] = tmp[l];
				// printf("%d\n", a[i + l]);
				l++;
			}
			i += m;
		}
		for (int z = 0; z < n; z++)
			c[z] = a[z];
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return (0);
}
