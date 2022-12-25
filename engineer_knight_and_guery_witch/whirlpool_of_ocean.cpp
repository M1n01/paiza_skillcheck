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
	int	n, x;
	cin >> n >> x;
	vector<int>	candy(n);
	vector<int>	ans(n);
	ans[0] = x;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> candy[i];
		ans[i + 1] = candy[i] - x;
		x = ans[i + 1] + ans[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << ans[i];
		if (i < n - 1)
			cout << " ";
		else
			cout << endl;
	}
	return (0);
}