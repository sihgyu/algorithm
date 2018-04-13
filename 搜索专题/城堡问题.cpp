#include "iostream"

using namespace std;

int R,C; // 行 列 数
int rooms[100][100];
int colors[100][100];
int maxRoomArea = 0;
int roomNum = 0;
int roomArea = 0;


void Dfs(int j,int k)
{
    if(colors[j][k])
        return;
    roomArea ++;
    colors[j][k] = roomNum;
    if((rooms[j][k] & 1) == 0)
        Dfs(j,k - 1);
    if((rooms[j][k] & 2) == 0)
        Dfs(j - 1,k);
    if((rooms[j][k] & 4) == 0)
        Dfs(j,k + 1);
    if((rooms[j][k] & 8) == 0)
        Dfs(j - 1,k);
}



int main()
{
    cin >> R >> C;

    for(int i = 1;i <= R;i++)
    {
        for(int j = 1;j <= C;j++)
        {
            cin >> rooms[i][j];
        }
    }
    memset(colors,0,sizeof(colors));
    
    for(int i = 1;i <= R;i++)
    {
        for(int j = 1;i <= C;j++)
        {
            if(!colors[i][j])
            {
                roomNum ++;
                roomArea = 0;
                Dfs(i,j);
                maxRoomArea = max(roomArea,maxRoomArea);

            }
        }
    }

    cout << roomNum << endl;
    cout << maxRoomArea << endl;

    return 0;
}