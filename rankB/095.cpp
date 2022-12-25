// clear!
#include <iostream>
#include <vector>
using namespace std;

int	main()
{
	int	n, m;
	cin >> n >> m;
	int	a[m];
	for (int i = 0; i < m; i++)
		cin >> a[i];
	int	score[n];
	for (int i = 0; i < n; i++)
	{
		vector<int> hz(m, 0);
		int	total = 100;
		for (int j = 0; j < m; j++)
			cin >> hz[j];
		for (int j = 0; j < m; j++)
		{
			if (abs(a[j] - hz[j]) <= 5)
				continue ;
			else if (abs(a[j] - hz[j]) <= 10)
				total -= 1;
			else if (abs(a[j] - hz[j]) <= 20)
				total -= 2;
			else if (abs(a[j] - hz[j]) <= 30)
				total -= 3;
			else
				total -= 5;
		}
		if (total < 0)
			total = 0;
		score[i] = total;
	}
	cout << *max_element(score, score + n) << endl;
	return (0);
}