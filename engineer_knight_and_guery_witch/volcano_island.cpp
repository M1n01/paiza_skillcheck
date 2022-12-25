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
	int	s, m, l;
	cin >> s >> m >> l;
	long long	sum = 0;
	string	o;
	for (int i = 0; i < n; i++)
	{
		cin >> o;
		if (o == "SS")
			sum += s / 2;
		else if (o == "LL")
			sum += l * 2;
		else if (o == "S")
			sum += s;
		else if (o == "M")
			sum += m;
		else if (o == "L")
			sum += l;
	}
	cout << sum << endl;
	return (0);
}