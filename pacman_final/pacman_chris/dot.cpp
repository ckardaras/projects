#include "dot.h"

dot::dot(int X, int Y, bool in_map)
{
    score=1;
    x_=X;
    y_=Y;
    int mod=40;
    drawn_x=x_+15;
    drawn_y=y_+15;
    in_map_=in_map;
    if(in_map)
    {
        eaten=false;
        if((x_==mod*0 && y_==mod*0)
                ||(x_==mod*20 && y_==mod*0)
                ||(x_==mod*0 && y_==mod*1)
                ||(x_==mod*20 && y_==mod*1)
                ||(x_==mod*0 && y_==mod*2)
                ||(x_==mod*2 && y_==mod*1)
                ||(x_==mod*20 && y_==mod*2)
                ||(x_==mod*0 && y_==mod*3)
                ||(x_==mod*20 && y_==mod*3)
                ||(x_==mod*0 && y_==mod*4)
                ||(x_==mod*20 && y_==mod*4)
                ||(x_==mod*0 && y_==mod*5)
                ||(x_==mod*20 && y_==mod*5)
                ||(x_==mod*0 && y_==mod*6)
                ||(x_==mod*20 && y_==mod*6)
                ||(x_==mod*0 && y_==mod*7)
                ||(x_==mod*20 && y_==mod*7)
                ||(x_==mod*19 && y_==mod*7)
                ||(x_==mod*18 && y_==mod*7)
                ||(x_==mod*17 && y_==mod*7)
                ||(x_==mod*1 && y_==mod*7)
                ||(x_==mod*2 && y_==mod*7)
                ||(x_==mod*3 && y_==mod*7)
                ||(x_==mod*3 && y_==mod*11)
                ||(x_==mod*2 && y_==mod*11)
                ||(x_==mod*1 && y_==mod*11)
                ||(x_==mod*0 && y_==mod*11)

                ||(x_==mod*20 && y_==mod*11)
                ||(x_==mod*19 && y_==mod*11)
                ||(x_==mod*18 && y_==mod*11)
                ||(x_==mod*17 && y_==mod*11)
                ||(x_==mod*20 && y_==mod*12)
                ||(x_==mod*0 && y_==mod*12)
                ||(x_==mod*20 && y_==mod*13)
                ||(x_==mod*0 && y_==mod*13)
                ||(x_==mod*20 && y_==mod*14)
                ||(x_==mod*0 && y_==mod*14)
                ||(x_==mod*20 && y_==mod*15)
                ||(x_==mod*0 && y_==mod*15)
                ||(x_==mod*20 && y_==mod*16)
                ||(x_==mod*0 && y_==mod*16)
                ||(x_==mod*20 && y_==mod*17)
                ||(x_==mod*0 && y_==mod*17)
                ||(x_==mod*20 && y_==mod*18)
                ||(x_==mod*0 && y_==mod*18)
                ||(x_==mod*20 && y_==mod*19)
                ||(x_==mod*0 && y_==mod*19)
                ||(x_==mod*18 && y_==mod*19)
                ||(x_==mod*0 && y_==mod*20)
                ||(x_==mod*20 && y_==mod*20))
        {
            eaten=true;

        }
    }
    else
    {
        eaten=true;
    }
}

QRectF dot::boundingRect() const
{
    // outer most edges
    return QRectF(drawn_x,drawn_y,9,9);

}

void dot::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    if(!eaten && in_map_)
    {
        QPen pen(Qt::white, 1);
        QBrush brush(Qt::white);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawEllipse(rect);
    }
    else if(!in_map_)
    {
        QPen pen(Qt::blue, 1);
        QBrush brush(Qt::blue);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawEllipse(rect);

    }
    else if(in_map_ && eaten)
    {
        QPen pen(Qt::black, 1);
        QBrush brush(Qt::black);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawEllipse(rect);
    }
}

void superDot::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    if(!eaten && in_map_)
    {
        QPen pen(Qt::darkRed, 1);
        QBrush brush(Qt::darkRed);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawEllipse(rect);
    }
    else if(!in_map_)
    {
        QPen pen(Qt::blue, 1);
        QBrush brush(Qt::blue);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawEllipse(rect);

    }
    else if(in_map_ && eaten)
    {
        QPen pen(Qt::black, 1);
        QBrush brush(Qt::black);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawEllipse(rect);
    }


}

superDot::superDot(int X, int Y, bool in_map):dot(X,Y,in_map)
{
}
