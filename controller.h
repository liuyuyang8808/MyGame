#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "shape.h"
#include "map.h"

class Controller
{
protected:
    Shape *m_shape;
    Map *m_map;
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
};

#endif // CONTROLLER_H
