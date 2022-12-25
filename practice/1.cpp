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
	vector<pair<string, int>>	item(n);
	for (int i = 0; i < n; i++)
		cin >> item[i].first >> item[i].second;
	long	sum = 0;
	int	flag = 0;
	for (int i = 0; i < n; i++)
	{
		sum += item[i].second;
		if (item[i].first == "pants" && sum >= 2000)
			flag = 1;
	}
	if (flag == 1)
		sum -= 500;
	cout << sum << endl;
	return (0);
}