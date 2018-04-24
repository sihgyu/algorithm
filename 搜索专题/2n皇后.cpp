#include "iostream"
#define TIME std::ios::sync_with_stdio(false)
using namespace std;

int chess[10][10];
int status;

void Dfs(int m,int n)
{
    if(!chess[m][n])
    {
        return ;
    }
    for (int i = 0; i < m)
}

int main()
{
    TIME;
    int n;

    memset(chess,0,sizeof(chess));
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> chess[i][j];
        }
    }


}