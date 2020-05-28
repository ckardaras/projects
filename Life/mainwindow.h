#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QVector>
#include <QGraphicsItem>
#include <QPen>
#include <QBrush>

/******** Enum cell_type **************/

enum class cell_type
{
    cell,
    virus,
    space
};


/******** Class Space **************/


class Space : public QObject, public QGraphicsItem {

    Q_OBJECT

public:
    Space();

    Space(QColor color, const int x, const int y);  // constructor

    int get_x() const { return x_; }  // inline member function
    int get_y() const { return y_; }  // inline member function

    double Distance(const Space &other) const;  // member function

    QRectF boundingRect() const override;
    QPainterPath shape() const override;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *item, QWidget *widget) override;

    static int get_width() { return width_; };

// in point.h
signals:
    // for distance
    void PointSelected(int x, int y);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;



private:
  int x_;
  int y_;
  QColor color_;

  // all our Points will be 10 wide and tall (they are circles)
  static const int width_ = 20;

  // if you declare the operator as a friend, then it isn't
  // part of the object
  // friend will let this method access the private fields
  friend bool operator==(const Space &first, const Space &other);
};  // class Point














/******** Class MainWindow **************/

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void BoardSetup();
    void fill_list();



private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene; //graph drawing
    const int width=26;
    const int height=16;
    QVector<Space> list;
    int turn = 1;




   /*
    QPen pen;
    QBrush brush;
    const int width=13;
    const int height =8;
    int turn=1;*/

};




#endif // MAINWINDOW_H
