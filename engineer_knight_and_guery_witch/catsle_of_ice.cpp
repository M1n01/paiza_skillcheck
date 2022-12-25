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
	if (n <= 0)
	{
		cout << "freeze" << endl;
		return (0);
	}
	cout << n << endl;
	return (0);
}