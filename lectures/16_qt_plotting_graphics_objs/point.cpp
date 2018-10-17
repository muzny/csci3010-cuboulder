#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iostream>
#include <QtWidgets>

#include "point.h"

bool Point::delete_mode_ = false; // starting value

/**
  Creates a new Point object with coordinates x and y
  @param x int x coordinate
  @param y int y coordinate
*/
Point::Point(QColor color, const int x, const int y) {
  this->color_ = color;
  x_ = x;
  y_ = y;
}

QRectF Point::boundingRect() const
{
    return QRectF(x_, y_, width_, width_);
}

QPainterPath Point::shape() const
{
    QPainterPath path;
    path.addEllipse(x_, y_, width_, width_);
    return path;
}


void Point::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(widget);


    QBrush b = painter->brush();
    painter->setBrush(QBrush(color_.dark(option->state & QStyle::State_Sunken ? 120 : 100)));

    painter->drawEllipse(QRect(this->x_, this->y_, this->width_, this->width_));
    painter->setBrush(b);
}

void Point::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    qDebug() << "This method automatically called when the Point is clicked!";

    // Day 2, Task 5, number 2

    // Day 2, Task 6, number 2
    // generate a random color

    // update this QGraphicsItem (sends a signal that it should be repainted)
    update();
}

/**
  Calculates the distance between this point and another Point.
  @param other Point object to calculate the distance to
*/
double Point::Distance(const Point &other) const {
  double distance = (x_ - other.get_x()) * (x_ - other.get_x());
  distance += (y_ - other.y_) * (y_ - other.y_);
  return sqrt(distance);
}


/**
  Makes it so the == operator will have the behavior that you
  expect when comparing points.
  You can overload pretty much any operator in c++
  @param first Point left hand side of the expression
  @param other Point right hand side of the expression
*/
bool operator==(const Point &first, const Point &other) {
  return first.x_ == other.x_ && first.y_ == other.y_;
}
