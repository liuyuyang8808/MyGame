#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "shape.h"
#include "map.h"

class Controller
{
protected:
    Map *m_map;
    vector<pair<int,int>> move_axis; 
public:
    Controller();
    Controller(Map* map);
public:
    void action_up();
    void action_left();
    void action_right();
    void action_down();
    void action_exit();
private:
    void GetNewShape(Shape* newShape);
    void InsertMap();
    bool CollisionCheck();
};

#endif // CONTROLLER_H
