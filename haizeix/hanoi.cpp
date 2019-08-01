#include "iostream"

using namespace std;

void hanoi(int n,char a,char b,char c)
{
	if(n > 0)
	{
		{
			hanoi(n-1,a,c,b);
			cout << "Move dish " << n <<" from pile " << a << " to " << b << endl;
			hanoi(n-1,c,b,a);
		}

	}
}




int main()
{
	int n;
	cin >> n;
	hanoi(n,'A','B','C');
	return 0;
}