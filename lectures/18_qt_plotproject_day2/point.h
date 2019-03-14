#ifndef POINT_H
#define POINT_H

#include <QColor>
#include <QGraphicsItem>

class Point : public QObject, public QGraphicsItem {

    Q_OBJECT

public:
    Point(QColor color, const int x, const int y);  // constructor

    int get_x() const { return x_; }  // inline member function
    int get_y() const { return y_; }  // inline member function

    double Distance(const Point &other) const;  // member function

    QRectF boundingRect() const override;
    QPainterPath shape() const override;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *item, QWidget *widget) override;

    static int get_width() { return width_; };


signals:
    // here is one signal that you will work with
    void PointClicked(int x, int y);


protected:
    // this is a method that QGraphicsItems inherit that gets triggered
    // when a mouse press event on them occurs. Similar to the
    // default slots we saw that buttons can be associated with.
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

 private:
  int x_;
  int y_;
  QColor color_;

  // all our Points will be 10 wide and tall (they are circles)
  static const int width_ = 10;

  // if you declare the operator as a friend, then it isn't
  // part of the object
  // friend will let this method access the private fields
  friend bool operator==(const Point &first, const Point &other);
};  // class Point



#endif // POINT_H
