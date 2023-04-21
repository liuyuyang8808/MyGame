#include "controller.h"

Controller::Controller(Map* map)
{
    this->m_map = map;
}

// 将新的图形加入到可移动的坐标内
void Controller::GetNewShape(Shape* newShape)
{
    int start_x = m_map->start_Xaxis;
    int start_y = m_map->start_Yaxis;
    auto temp = newShape->get();
    for(auto x : temp)
    {
        move_axis.push_back({
            start_x + x.first, 
            start_y + x.second
        });
    }
}

// 方块左移，若检测到碰撞则不进行移动
void Controller::action_left()
{
    for(auto x : move_axis)
    {
        if(CollisionCheck({x.first,x.second - 1}))
        {
            return;
        }     
    }
    for(auto &x : move_axis)
    {
        x.second -= 1;
    }
}

// 方块右移，若检测到碰撞则不进行移动
void Controller::action_right()
{
    for(auto x : move_axis)
    {
        if(CollisionCheck({x.first,x.second + 1}))
        {
            return;
        }
    }
    for(auto &x : move_axis)
    {
        x.second += 1;
    }
}

// 方块下移，若检测到碰撞则不进行移动
void Controller::action_down()
{
    
}

bool Controller::CollisionCheck(pair<int,int> axis)
{
    if(axis.second < 0 || axis.second >= m_map->width)
        return true;
    return m_map->GetAxis(axis);    
}

