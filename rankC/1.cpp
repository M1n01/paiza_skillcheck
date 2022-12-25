#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

int	main()
{
	string	s;
	int		len;

	cin >> s;
	len = s.length();
	for (int i = 0; i < len + 2; i++)
		cout << "+";
	cout << endl;
	cout << "+" << s << "+" << endl;
	for (int i = 0; i < len + 2; i++)
		cout << "+";
	cout << endl;
	return (0);
}