#include <iostream>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>

#include "plotwindow.h"
#include "ui_plotwindow.h"

// Names: Chris Kardaras
//
//

int PlotWindow::random_clicks_ = 0;

PlotWindow::PlotWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlotWindow)
{
    // we need to set up the ui before we draw on our scene
    ui->setupUi(this);

    // scene is a pointer field of plot window
    scene = new QGraphicsScene;

    QGraphicsView * view = ui->plotGraphicsView;
    view->setScene(scene);
    view->setSceneRect(0,0,view->frameSize().width(),view->frameSize().height());


    srand(time(0));


    qDebug() << "Here's an example debugging statement";


    // Day 1, Task 2, number 5:
    // use the scene->addLine method to add lines to your scene for the x and y axes.


    scene->addLine(0,(view->frameSize().height())/2,view->frameSize().width(),view->frameSize().height()/2);
    scene->addLine(view->frameSize().width()/2,0,view->frameSize().width()/2,view->frameSize().height());
    // you may find the view->frameSize.[width()|height()] methods helpful as well.



    // Day 1, Task 4, number 2:
    // connect the random button's &QAbstractButton::pressed event to the PlotWindow's new slot
    // connect(sender, sender signal, receiver, receiver slot)
    connect(ui->addButton, &QAbstractButton::pressed, this, &PlotWindow::SlotTest);


}



PlotWindow::~PlotWindow()
{
    delete ui;
}

void PlotWindow::on_randomButton_clicked()
{
    qDebug()<<"Types:"<<QString("Hello World!");

}

void PlotWindow::SlotTest()
{
    qDebug()<<"Types:"<<QString("Does This work?");
}
