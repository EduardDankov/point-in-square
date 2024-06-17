# Point In Square

This application detects if a point lies inside a square defined by its top-left 
and bottom-right points. Currently, only squares in standard orientation are 
supported.

## Requirements

* [cmake](https://cmake.org/): >=3.26

## Installation

### Windows:

1. Clone the repository:

```bash
git clone https://github.com/EduardDankov/point-in-square.git
```

2. Build the application:

```bash
cd point-in-square
cmake --build ./
```

### Linux:

1. Clone the repository:

```bash
git clone https://github.com/EduardDankov/point-in-square.git
```

2. Generate Makefile:

```bash
cd point-in-square
cmake .
```

3. Build the application:

```bash
make
```

## Usage

1. Run the application:

* Windows:

```bash
./Debug/point-in-square.exe
```

* Linux:

```bash
./point-in-square
```

2. Enter the coordinates of the top-left vertex (x, y) separated by space or 
newline. The values must be valid decimal numbers.
3. Repeat the same for the bottom-right vertex. Two points must belong to a 
valid square in standard orientation (top and bottom sides are parallel to 
x-axis, left and right are parallel to y-axis, side length is not zero).
4. Repeat the same for the checked point.
5. Application will print if the point belongs to the square or not.