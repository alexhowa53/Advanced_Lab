#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : length(0), width(0) {}

// Overloaded constructor
Rectangle::Rectangle(float l, float w) : length(l), width(w) {}

// Destructor
Rectangle::~Rectangle() {}

// Setter for length
void Rectangle::setLength(float l) {
    length = l;
}

// Setter for width
void Rectangle::setWidth(float w) {
    width = w;
}

// Getter for length
float Rectangle::getLength() const {
    return length;
}

// Getter for width
float Rectangle::getWidth() const {
    return width;
}

// Method to calculate the area of the rectangle
float Rectangle::calculateArea() const {
    return length * width;
}