#include "Point.h"

std::pair<double&, double&> Point::get()
{
    return {m_x, m_y};
}

std::optional<Point> Point::read(const std::string &pointName)
{
    std::cout << "Please enter coordinates of " << pointName << " point separated by space or newline." << '\n'
              << "Format: [x] [y], where both are decimals." << std::endl;
    double x{}, y{};
    while (true)
    {
        if (std::cin >> x >> y)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        else
        {
            std::cerr << "Please enter two valid decimals." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return Point{x, y};
}
