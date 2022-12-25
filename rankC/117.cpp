// 117
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
	int	a, b, c;
	int	cnt;

	cin >> n >> m;
	cin >> a >> b >> c;
	int	r[n];
	for (int i = 0; i < n; i++)
		cin  >> r[i];
	cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (c * r[i] - a - b * m < 0)
			cnt++;
	}
	cout << cnt << endl;
	return (0);
}

