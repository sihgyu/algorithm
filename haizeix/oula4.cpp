#include "iostream"

using namespace std;

int  check(int a)
{
    int b = a,x = 0;
    while(a)
    {
        x = x * 10 + a % 10;
        a = a / 10;
    }
    return x == b;
}
int main()
{
    int max_num = 0;
    for (int i = 999;i >= 100&&i*i>max_num;i--)
    {
        for(int j = i - 1;j >= 100;j--)
        {
            if (!check(j * i)) continue;
            if(i * j > max_num) max_num = i * j;
        }
    }
    printf("%d\n",max_num);
    return 0;
}
