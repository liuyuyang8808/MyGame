#include "map.h"

Map::Map()
{
    land.assign(height + hide_height,vector<int>(width,0));
}

// 返回该点的值
int Map::GetAxis(pair<int,int> axis)
{
    return land[axis.first][axis.second];
}


// 描述点
void Map::Insert(vector<pair<int,int>>& axis)
{
    for(auto x: axis)
    {
        land[x.first][x.second] = 1;
    }
}

// 清空第 m 行
void Map::Clear(int m)
{
    for(int i = 0; i < width; ++i)
    {
        land[m][i] = 0;
    }
}

// m 行之上的下移一行
void Map::Down(int m)
{
    for(int i = m + 1; i < height; ++i)
    {
        land[i - 1] = land[i];
    }
}
