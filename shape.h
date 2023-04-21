#ifndef SHAPE_H
#define SHAPE_H

#endif // SHAPE_H
#include <vector>

class Shape{
protected:
    vector<pair<int,int>> grid;
    virtual void set() = 0;
public:
    vector<pair<int,int>> get();
};


class Cube : public Shape {};
