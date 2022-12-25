// 70points
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
	int	n, m;
	cin >> n >> m;
	vector<vector<int>>	rain(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> rain.at(i).at(j);
	}
	vector<bool>	flag(n, true);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (rain.at(i).at(j) >= m)
				flag[j] = false;
		}
	}
	bool	wait = false;
	for (int i = 0; i < n; i++)
	{
		if (flag[i] == true)
		{
			wait = true;
			cout << i + 1;
			if (i < n - 1)
				cout << " ";
		}
	}
	if (wait == false)
		cout << "wait";
	cout << endl;
	return (0);
}