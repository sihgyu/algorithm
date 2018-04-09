#include "iostream"
#include "cstdio"
using namespace std;


const int n = 4;
bool used[n + 1];
int answer[n + 1];

void print_ans()
{
    for (int i = 1; i <= n;i++)
    {
        printf("%d",answer[i]);
    }
}


bool dfs(int now,int deep)
{
    if(used[now] == true )
        return true;  // 如果点遍历过则返回
    used[now] = true;
    answer[deep] = now;
    if(deep == n)
    {
        print_ans();
        used[now] = false;
        return true;
    }

    for(int i = 1;i <= n;i++)
    {
        if(i == now )
            continue ;
        dfs(i,deep+1);
    }

    
}

void judge()
{
    for (int i = 1;i <= n;i++)
    {
        dfs(i,1);
    }
}
int main()
{
    judge();
}