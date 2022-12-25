// 60points
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
	int	a, b, c, d;
	cin >> a >> b >> c >> d;
	double	x, y;
	if (c == d)
	{
		if (a == 2 && b == 2)
			cout << "1 1" << endl;
		else
			cout << "miss" << endl;
		return (0);
	}
	x = (a - b * d) / (c - d);
	if ((a - b * d) / (c - d) < 0 || int((a - b * d) / (c - d)) != (a - b * d) / (c - d))
	{
		cout << "miss" << endl;
		return (0);
	}
	x = (a - b * d) / (c - d);
	if (b - x < 0)
	{
		cout << "miss" << endl;
		return (0);
	}
	y = b - x;
	cout << x << " " << y << endl;
	return (0);
}
// a = cx + dy
// a - bd = cx - dx
// b = x + y