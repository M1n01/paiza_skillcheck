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
	vector<double>	avg(n);
	vector<int>	rbi(n);
	vector<int>	hr(n);
	for (int i = 0; i < n; i++)
		cin >> avg[i] >> rbi[i] >> hr[i];
	double	avg_king = *max_element(avg.begin(), avg.end());
	int	rbi_king = *max_element(rbi.begin(), rbi.end());
	int	hr_king = *max_element(hr.begin(), hr.end());
	vector<int>	flag(n, 0);
	for (int i = 0; i < n; i++)
	{
		if (avg[i] == avg_king)
			flag[i]++;
		if (rbi[i] == rbi_king)
			flag[i]++;
		if (hr[i] == hr_king)
			flag[i]++;
	}
	int	max = *max_element(flag.begin(), flag.end());
	if (max == 3)
		cout << "Triple" << endl;
	else if (max == 2)
		cout << "Double" << endl;
	else
		cout << "Nobody" << endl;
	return (0);
}