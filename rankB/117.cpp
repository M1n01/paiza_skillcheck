// Clear!!
#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <map>
using namespace std;

int	main()
{
	int	n;
	cin >> n;
	int	a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int	next = 1;
	int	cnt = 0;
	while (1)
	{
		for (int i = 0; i < n; i++)
		{
			if (next == a[i])
			{
				a[i] = -1;
				next++;
			}
		}
		int	flag = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != -1)
				flag = 1;
		}
		if (flag == 0)
			break ;
		cnt++;
	}
	cout << cnt << endl;
	return (0);
}
