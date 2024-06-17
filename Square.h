#include "Point.h"

class Square
{
private:
    Point m_topLeft;
    Point m_bottomRight;

    void validate();

public:
    Square();

    bool contains(Point point);
};
