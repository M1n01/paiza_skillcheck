// clear
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

int main(int argc, char const *argv[])
{
	int	h, w;
	cin >> h >> w;
	vector<string>	s(h);
	for (int i = 0; i < h; i++)
		cin >> s[i];
	vector<vector<bool>>	ans(h, vector<bool>(w, false));
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (s[i][j] == '#')
			{
				for (int k = 0; k < w; k++)
					ans[i][k] = true;
				for (int k = 0; k < h; k++)
					ans[k][j] = true;
			}
		}
	}
	int	count = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (ans[i][j] == true)
				count++;
		}
	}
	cout << count << endl;
	return 0;
}
