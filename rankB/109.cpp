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
	int	n, h, w, p, q;
	cin >> n >> h >> w >> p >> q;
	vector<vector<bool>>	vacant(h, vector<bool>(w, true));
	for (int i = 0; i < n; i++)
	{
		int	x, y;
		cin >> x >> y;
		vacant.at(x).at(y) = false;
	}
	int	mh = w + h;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (vacant.at(i).at(j) == true && mh > abs(p - i) + abs(q - j))
				mh = abs(p - i) + abs(q - j);
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (vacant.at(i).at(j) && mh == abs(p - i) + abs(q - j))
				cout << i << " " << j << endl;
		}
	}
	return (0);
}