#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    int x, y;
    string color;
    int borderThickness;

public:
    Shape(int xPos, int yPos, string col, int border = 1)
        : x(xPos), y(yPos), color(col), borderThickness(border) {}

    void draw() {
        cout << "Drawing shape at (" << x << ", " << y << ") with color " << color
             << " and border thickness " << borderThickness << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(int xPos, int yPos, string col, double r, int border = 1)
        : Shape(xPos, yPos, col, border), radius(r) {}

    void draw() {
        cout << "Drawing Circle at (" << x << ", " << y << ") with radius " << radius
             << " and color " << color << endl;
    }

    double calculateArea() {
        return M_PI * radius * radius;
    }

    double calculatePerimeter() {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(int xPos, int yPos, string col, double w, double h, int border = 1)
        : Shape(xPos, yPos, col, border), width(w), height(h) {}

    void draw() {
        cout << "Drawing Rectangle at (" << x << ", " << y << ") with width " << width
             << " and height " << height << " and color " << color << endl;
    }

    double calculateArea() {
        return width * height;
    }

    double calculatePerimeter() {
        return 2 * (width + height);
    }
};

class Triangle : public Shape {
private:
    double base, height, sideA, sideB, sideC;

public:
    Triangle(int xPos, int yPos, string col, double b, double h, double a, double c, int border = 1)
        : Shape(xPos, yPos, col, border), base(b), height(h), sideA(a), sideB(b), sideC(c) {}

    void draw() {
        cout << "Drawing Triangle at (" << x << ", " << y << ") with base " << base
             << " and height " << height << " and color " << color << endl;
    }

    double calculateArea() {
        return 0.5 * base * height;
    }

    
    double calculatePerimeter() {
        return sideA + sideB + sideC;
    }
};

int main() {
    Circle circle(5, 5, "Red", 10);
    Rectangle rectangle(0, 0, "Blue", 20, 10);
    Triangle triangle(2, 3, "Green", 6, 8, 5, 7);

    circle.draw();
    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Circle Perimeter: " << circle.calculatePerimeter() << "\n\n";

    rectangle.draw();
    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << "\n\n";

    triangle.draw();
    cout << "Triangle Area: " << triangle.calculateArea() << endl;
    cout << "Triangle Perimeter: " << triangle.calculatePerimeter() << "\n\n";

    return 0;
}

