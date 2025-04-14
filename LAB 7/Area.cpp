#include "Area.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    float Area::calculateArea(const Square& square) {
        float side = square.getSide();
        return side * side;
    }
    
    float Area::calculateArea(const Triangle& triangle) {
        return 0.5f * triangle.getBase() * triangle.getHeight();
    }
    
    float Area::calculateArea(const Circle& circle) {
        return 3.14159f * circle.getRadius() * circle.getRadius();
    }
}