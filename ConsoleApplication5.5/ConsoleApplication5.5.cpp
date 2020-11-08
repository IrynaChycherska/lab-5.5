#include <iostream>
using namespace std;
int Q(int m, int n)
{
	if (m <= n)
		return Q(n, m);
	else
		if (m = n)
			return 1 - Q(m, m - 1);
		else
			if (m >= n)
				return Q(m, n - 1) + Q(m - n, n);
			else
				return 0;
}
int main()
{
	int k = Q(4, 5);
	int p = Q(7, 8);
	cout << k << endl;
	cout << p << endl;
	return 0;
}
