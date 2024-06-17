#include <iostream>

#include "Square.h"

int main() {
    Square square;
    Point point = Point::read("checked").value();
    std::cout
        << "The square "
        << (square.contains(point) ? "contains" : "does not contain")
        << " the point."
        << std::endl;
    return EXIT_SUCCESS;
}
