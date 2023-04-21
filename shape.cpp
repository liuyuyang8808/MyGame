#include "shape.h"
#include "algorithm"
using namespace std;

vector<pair<int,int>> Shape::get()
{
    return this->grid;
}

void Cube::set() override
{
    grid.push_back({0,1});
    grid.push_back({0,2});
    grid.push_back({1,1});
    grid.push_back({1,2});
}






