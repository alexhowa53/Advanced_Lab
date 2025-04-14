#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;
    
public:
    Rectangle(); // Default constructor
    Rectangle(float l, float w); // Overloaded constructor
    ~Rectangle(); // Destructor
    
    // Setters
    void setLength(float l);
    void setWidth(float w);
    
    // Getters
    float getLength() const;
    float getWidth() const;
    
    // Area calculation
    float calculateArea() const;
};

#endif