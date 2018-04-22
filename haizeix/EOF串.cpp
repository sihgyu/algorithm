#include "iostream"
#include "cstdio"

using namespace std;
long long sum[100];
int main()
{
    int n;
    sum[0] = 0;
    sum[1] = 3;
    sum[2] = 8;
    while (cin >> n)
    {
        for(int i = 3;i <=100;i++)
        {
            sum[i] = 2 * sum[i-1] + 2 * sum[i - 2];
        }

        printf("%lld\n",sum[n]);
        
    }
}