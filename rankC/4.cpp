// traffic jam
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
	int	sum;

	cin >> n >> m;
	int	a[n-1];
	for (int i = 0; i < n - 1; i++)
		cin  >> a[i];
	sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] <= m)
			sum += a[i];
	}
	cout << sum << endl;
	return (0);
}

