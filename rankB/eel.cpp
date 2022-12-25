// うなぎ屋notClear
#include <iostream>
#include <vector>
using namespace std;

int	main()
{
	int	n, m;

	cin >> n >> m;
	int	a[m];
	int	b[m];
	for (int i = 0; i < m; i++)
		cin >> a[i] >> b[i];
	int	seat[n];
	for (int i = 0; i < n; i++)
		seat[i] = 0;
	for (int i = 0; i < m; i++)
	{
		int flag = 0;
		for (int k = 0; k < a[i]; k++)
		{
			if (b[i] + k - 1 > n)
				b[i] -= n;
			if (seat[b[i] + k - 1] == 1)
			{
				flag = 1;
				break ;
			}
		}
		if (flag == 1)
			continue ;
		for (int j = 0; j < a[i]; j++)
		{
			if (b[i] + j - 1 > n)
				b[i] -= n;
			seat[b[i] + j - 1] = 1;
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (seat[i] == 1)
			count++;
	}
	cout << count << endl;
	return (0);
}

// 模範回答
// int	main()
// {
// 	int	n,m;
// 	cin >> n >> m;
// 	int	ans = 0;
// 	vector<bool> vacant(n, true);
// 	for (int i = 0; i < m; i++)
// 	{
// 		int	a, b;
// 		cin >> a >> b;
// 		b--;
// 		bool	valid = true;
// 		for (int j = 0; j < a; j++)
// 		{
// 			if (!vacant[(b + j) % n])
// 				valid = false;
// 		}
// 		if (valid)
// 		{
// 			ans += a;
// 			for (int j = 0; j < a; j++)
// 				vacant[(b + j) % n] = false;
// 		}
// 	}
// 	cout << ans << endl;
// 	return 0;
// }