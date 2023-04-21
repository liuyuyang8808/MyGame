#include "shape.h"
#include "algorithm"
using namespace std;

// Class Shape
void Shape::clear()
{
   fill(m_grid->begin(),m_grid->end(),[](vector<int> temp)
   {
       for(auto x: temp)
           x = 0;
   });
}


// 方块初始化
class Cube : public Shape
{
public:
    Cube();
    Cube(vector<vector<int>> *grid)
    {
        this->m_grid = grid;
        clear();
        set();
    }
protected:
    void set() override
    {
        (*m_grid)[1][1] = 1, (*m_grid)[1][2] = 1,
        (*m_grid)[2][1] = 1, (*m_grid)[2][2] = 1;
    }
public:


};



