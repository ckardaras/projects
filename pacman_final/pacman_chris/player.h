#ifndef PLAYER_H
#define PLAYER_H


#include <QPainter>
#include <QGraphicsItem>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QDebug>

enum class type
{
    p1,
    p2,
    g1,
    g2,
    g3,
    g4
};

class player: public QGraphicsItem
{
public:
    player(int X, int Y, enum type def, bool is_human);

    QRectF boundingRect() const;

    //overriding paint()

    void paint(QPainter * painter,
                   const QStyleOptionGraphicsItem * option,
                   QWidget * widget);

    int x_;
    int y_;
    enum type definition;
    bool scared;
    bool alive;
    bool human;



protected:


};

#endif // PLAYER_H
