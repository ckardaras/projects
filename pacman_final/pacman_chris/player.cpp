#include "player.h"

player::player(int X, int Y, enum type def, bool is_human)
{
    x_=X;
    y_=Y;
    human=is_human;
    alive=true;
    definition=def;
    scared=false;

}



QRectF player::boundingRect() const
{
    // outer most edges
    return QRectF(x_,y_,39,39);

}



void player::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    if (scared==false)
    {

       if(definition==type::p1)
        {
            QPen pen(Qt::yellow, 1);
            QBrush brush(Qt::yellow);
            painter->setPen(pen);
            painter->setBrush(brush);
            painter->drawEllipse(rect);
        }
        else if(definition==type::p2)
        {
            QPen pen(Qt::green, 1);
            QBrush brush(Qt::green);
            painter->setPen(pen);
            painter->setBrush(brush);
            painter->drawEllipse(rect);
        }
       else if(definition==type::g1)
       {
           QPen pen(Qt::cyan, 1);
           QBrush brush(Qt::cyan);
           painter->setPen(pen);
           painter->setBrush(brush);
           painter->drawEllipse(rect);
       }
       else if(definition==type::g2)
       {
           QPen pen(Qt::magenta, 1);
           QBrush brush(Qt::magenta);
           painter->setPen(pen);
           painter->setBrush(brush);
           painter->drawEllipse(rect);
       }
       else if(definition==type::g3)
       {
           QPen pen(Qt::red, 1);
           QBrush brush(Qt::red);
           painter->setPen(pen);
           painter->setBrush(brush);
           painter->drawEllipse(rect);
       }
       else if(definition==type::g4)
       {
           QPen pen(Qt::darkGray, 1);
           QBrush brush(Qt::darkGray);
           painter->setPen(pen);
           painter->setBrush(brush);
           painter->drawEllipse(rect);
       }
    }
    if(alive==false)
    {
        QPen pen(Qt::black, 1);
        QBrush brush(Qt::black);
        painter->setPen(pen);
        painter->setBrush(brush);
        painter->drawEllipse(rect);
    }


}

