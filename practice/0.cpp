#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

int	main()
{
	int	n;

	cin >> n;
	vector<int> num(n, 0);
	vector<string> name(n, "");
	for (int i = 0; i < n; i++)
		cin >> num[i] >> name[i];
	int	tmp;
	string	tmp_n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
				tmp_n = name[i];
				name[i] = name[j];
				name[j] = tmp_n;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << num[i] << " " << name[i] << endl;
	return (0);
}

int	main()
{
	int	n;

	cin >> n;
	vector<pair<int, string>> bp(n);
	for (int i = 0; i < n; i++)
		cin >> bp[i].first >> bp[i].second;
	sort(bp.begin(), bp.end());
	for (auto[i, j] : bp)
		cout << i << " " << j << endl;
	return (0);
}