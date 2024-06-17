#include "Square.h"

Square::Square() :
    m_topLeft(Point::read("top-left").value()),
    m_bottomRight(Point::read("bottom-right").value())
{
    validate();
}

bool Square::contains(Point point)
{
    auto [pointX, pointY] = point.get();
    auto [topLeftX, topLeftY] = m_topLeft.get();
    auto [bottomRightX, bottomRightY] = m_bottomRight.get();

    if (topLeftX > bottomRightX) std::swap(topLeftX, bottomRightX);
    if (topLeftY < bottomRightY) std::swap(topLeftY, bottomRightY);

    return pointX >= topLeftX && pointX <= bottomRightX && pointY >= bottomRightY && pointY <= topLeftY;
}

void Square::validate()
{
    auto [topLeftX, topLeftY] = m_topLeft.get();
    auto [bottomRightX, bottomRightY] = m_bottomRight.get();

    bool hasEqualSides = std::abs(topLeftX - bottomRightX) == std::abs(topLeftY - bottomRightY);
    double sideLength = topLeftX - bottomRightX;

    if (!hasEqualSides || sideLength == 0)
    {
        std::cerr << "Specified points do not form to a valid square." << std::endl;
        exit(EXIT_FAILURE);
    }
}
