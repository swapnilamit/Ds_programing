#include <iostream>
#include <string>
#include <cmath>

class Shape {
protected:
    std::string color;
    std::string name;

public:
    Shape(const std::string& c, const std::string& n) : color(c), name(n) {}

    virtual double calculateArea() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const std::string& c, const std::string& n, double r) : Shape(c, n), radius(r) {}

    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(const std::string& c, const std::string& n, double s) : Shape(c, n), side(s) {}

    double calculateArea() const override {
        return side * side;
    }
};

int main() {
    Circle circle("Red", "Circle", 5.0);
    Square square("Blue", "Square", 4.0);

    std::cout << circle.name << " (" << circle.color << ") Area: " << circle.calculateArea() << std::endl;
    std::cout << square.name << " (" << square.color << ") Area: " << square.calculateArea() << std::endl;

    return 0;
}
