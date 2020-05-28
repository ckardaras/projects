#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include "square.h"




square::square(int X, int Y, bool space)
{
    x_=X;
    y_=Y;
    space_ = space;
    has_dot=true;

}

QRectF square::boundingRect() const
{
    // outer most edges
    return QRectF(x_,y_,39,39);

}

void square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();


    if(space_)
    {
        QPen pen(Qt::black, 1);
        QBrush brush(Qt::black);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawRect(rect);
    }
    else
    {
        QPen pen(Qt::blue, 1);
        QBrush brush(Qt::blue);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawRect(rect);
    }

}
