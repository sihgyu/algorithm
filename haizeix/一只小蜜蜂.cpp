#include "iostream"
#include "cstdio"
using namespace std;
long long a[100];
int main()
{
    int n;
    int i,j;
    cout << "输入数据组数" << endl;
    scanf("%d",&n);
    a[1] = 0;
    a[2] = 1;
    a[3] = 2;
    
    while(n--)
    {
    cout << "输入i，j" << endl;
    scanf("%d%d",&i,&j);

    for (int m = 4;m <= j-i+1;m++)
    {
       a[m] = a[m-1] + a[m-2];
    }
       
       
    printf("%lld\n",a[j - i + 1]);

    }
}