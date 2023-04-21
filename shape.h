#ifndef SHAPE_H
#define SHAPE_H

#endif // SHAPE_H
#include <vector>

class Shape{
protected:
    std::vector<std::vector<int>> *m_grid;
public:
    virtual void set() = 0;
    void clear();
};

