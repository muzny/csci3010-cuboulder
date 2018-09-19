#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_



// Example function for the beginning tests
// Really, it shouldn't be in a Rectangle header file but we
// wanted you to get started
unsigned int Factorial( unsigned int number );


struct Point {
  int x;
  int y;
};


class Rectangle {
public:
  // p1 is the upper left corner
  // p2 is the lower right corner
  Rectangle(Point p1, Point p2);

  // get the width of the rectangle  
  // between p1.x and p2.x
  int GetWidth();
  // get the height of the rectangle
  // between p2.y and p2.y
  int GetHeight();

  Point get_p1() { return p1_; }
  Point get_p2() { return p2_; }

  // returns true iff this rectangle shares any points with the other one
  bool Overlaps(Rectangle& other);

  // returns the area of this rectangle
  int CalculateArea();

  // moves the bottom left coordinate down one and to the left one
  // moves the upper right coordinate up one and to the right one
  void Expand();

  // moves the bottom left coordinate up one and to the right one
  // moves the upper right coordinate down one and to the left one
  void Shrink();

private:
  Point p1_; // bottom left corner
  Point p2_; // upper right corner
};


#endif // _RECTANGLE_H_
