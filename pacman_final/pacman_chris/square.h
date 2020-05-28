#ifndef SQUARE_H
#define SQUARE_H

#include <QPainter>
#include <QGraphicsItem>
#include <QMouseEvent>



class square: public QGraphicsItem
{
public:
    square(int X, int Y, bool);

    QRectF boundingRect() const;

    //overriding paint()

    void paint(QPainter * painter,
                   const QStyleOptionGraphicsItem * option,
                   QWidget * widget);

    int x_;
    int y_;
    bool space_;
    bool has_dot;
    bool has_player;


protected:


};

#endif // SQUARE_H
