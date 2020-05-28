#ifndef DOT_H
#define DOT_H

#include <QPainter>
#include <QGraphicsItem>
#include <QMouseEvent>

class dot: public QGraphicsItem
{
    public:
        dot(int X, int Y, bool in_map);

        QRectF boundingRect() const;

        //overriding paint()

        virtual void paint(QPainter * painter,
                       const QStyleOptionGraphicsItem * option,
                       QWidget * widget);
        int x_;
        int y_;

        int drawn_x;
        int drawn_y;

        bool in_map_;
        bool eaten;

        int score;
};

class superDot: public dot
{
public:
    void paint(QPainter * painter,
                           const QStyleOptionGraphicsItem * option,
                           QWidget * widget);

    superDot(int X, int Y, bool in_map);
};

#endif // DOT_H
