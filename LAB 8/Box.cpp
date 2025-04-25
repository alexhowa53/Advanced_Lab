//#pragma once
#include "Box.h"

Box::Box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight) {
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

Box::~Box() {
}

double Box::GetVolume() {
    return length * breadth * height;
}

void Box::SetLength(double len) {
    length = len;
}

void Box::SetBreadth(double bre) {
    breadth = bre;
}

void Box::SetHeight(double hei) {
    height = hei;
}

// Overload + operator to add two Box objects.
Box Box::operator+(const Box& b) {
    Box box;

    // Ensure resulting dimensions are non-negative
    box.length = std::max(0.0, this->length + b.length);
    box.breadth = std::max(0.0, this->breadth + b.breadth);
    box.height = std::max(0.0, this->height + b.height);

    return box;
}