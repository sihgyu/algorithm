#include "iostream"

using namespace std;

int solve(int m,int n)
{
	if(n==0||n == 1||m == 0)
		return 1;
	if(n > m)
		return solve(m,m);
	else
		return solve(m-n,n)+solve(m,n-1);
}

int main()
{
	int i,n,m;
	cin >> i;
	while(i--)
	{
		cin >> m >> n;
		cout << solve(m,n)<< endl;
	}
	return 0;
}