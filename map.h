#ifndef MAP_H
#define MAP_H
#include "vector"
using namespace std;

class Map
{
private:
    const int hide_height = 4;
    vector<vector<int>> land;
public:
    const int height = 15;
    const int width =  60;
    const int start_Xaxis = width / 2;
    const int start_Yaxis = height - 1;
    
    
public:
    Map();
    int  GetAxis(pair<int,int> axis);
    void Insert(vector<pair<int,int>>& axis);
    void Clear(int m);
    void Down(int m);
};

#endif // MAP_H
