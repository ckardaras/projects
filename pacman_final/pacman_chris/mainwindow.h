#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QVector>
#include <QPen>
#include <QBrush>
#include <QTimer>
#include <QSlider>
#include "square.h"
#include "player.h"
#include "dot.h"


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
    void PlayerSetup();
    void DotSetup();
    void SuperDotSetup();
    int checkforDot(player* person, int score);
    int checkforSuperDot(player* person, int score);
    void CheckForWinner();
    void botmove(player* bot);
    void CheckForKill(player* bot, player * person);




protected:
    void keyPressEvent(QKeyEvent *event);




private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsScene *graph;
    int turn=0;
    square* board[21][21];
    player* players[6];
    int p1Score;
    int p2Score;
    int timer;
    dot* dots[21][21];
    superDot* superdots[10];
    QTimer* clock;
    int p1_wins;
    int p2_wins;
    bool game_over;



private slots:
    void step();
    void reset();
    void botgame();

};
#endif // MAINWINDOW_H
