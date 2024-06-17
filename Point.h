#include <optional>
#include <iostream>

class Point
{
private:
    double m_x;
    double m_y;

public:
    Point(double x, double y) : m_x(x), m_y(y) {}

    std::pair<double&, double&> get();

    static std::optional<Point> read(const std::string& pointName);
};
