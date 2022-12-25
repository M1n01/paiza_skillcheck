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

typedef tuple<int, int, string>	prof;

bool	my_compare(const prof &lhs, const prof &rhs)
{
	if (get<0>(lhs) != get<0>(rhs))
		return (get<0>(lhs) < get<0>(rhs));
	if (get<1>(lhs) != get<1>(rhs))
		return (get<1>(lhs) > get<1>(rhs));
	return (get<2>(lhs) < get<2>(rhs));
}

int	main()
{
	int	n;
	cin >> n;
	vector<prof>	vc;
	for (int i = 0; i < n; i++)
	{
		string	name;
		int	height;
		int	month;
		cin >> name >> height >> month;
		vc.emplace_back(height, month, name);
	}
	sort(vc.begin(), vc.end(), my_compare);
	for (int i = 0; i < n; i++)
		cout << get<2>(vc[i]) << endl;
	return (0);
}