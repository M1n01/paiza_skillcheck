#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

int	main()
{
	int	n;
	int	x;
	int	y;

	cin >> n >> x >> y;
	for (int i = 1; i <= n; i++)
	{
		if (i % x == 0 && i % y != 0)
			cout << "A" << endl;
		else if (i % x != 0 && i % y == 0)
			cout << "B" << endl;
		else if (i % x == 0 && i % y == 0)
			cout << "AB" << endl;
		else
			cout << "N" << endl;
	}
	cout << endl;
	return (0);
}