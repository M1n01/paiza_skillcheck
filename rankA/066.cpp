// notClear
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
	int	a[n], b[n];
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i];
	int	record = 0;
	int	work = 1;
	for (int i = 1; i < n; i++)
	{
		if (0 <= a[i] - b[i - 1] && a[i] - b[i - 1] <= 1)
			work += b[i] - a[i - 1];
		else if (a[i] <= b[i - 1] && b[i - 1] < b[i])
			work += b[i] - b[i - 1];
		else if (b[i] <= b[i - 1])
			continue ;
		else if (a[i] - b[i - 1] > 1)
			work = 1;
		if (record < work)
			record = work;
	}
	cout << record << endl;
	return (0);
}
