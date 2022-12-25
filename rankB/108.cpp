// 108
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

int	main()
{
	int	n;
	int	m;

	cin >> n >> m;
	int	a[n];
	int	b[m];
	for (int i = 0; i < n; i++)
		cin  >> a[i];
	for (int i = 0; i < m; i++)
		cin  >> b[i];
	int	c[n];
	for (int i = 0; i < n; i++)
		c[i] = 0;
	int	j = 0;
	while (1)
	{
		for (int i = 0; i < n; i++)
		{
			if (b[j] > a[i])
			{
				c[i] += a[i];
				b[j] -= a[i];
				continue ;
			}
			c[i] += b[j];
			if (j == m - 1)
			{
				for (int i = 0; i < n; i++)
					cout << c[i] << endl;
				return (0);
			}
			j++;
		}
	}
}

