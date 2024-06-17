#include <iostream>

#include "Point.h"

int main() {
    Point point = Point::read("checked").value();
    return EXIT_SUCCESS;
}
