/*
Chris Kardaras
PE 1
This Program creates a point class and then is able
to determine that points euclidian distance


*/

#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    Point pointA;
    Point pointB;
    Point pointC;

    pointA.setX(-7);
    pointA.setY(-4);

    pointB.setX(17);
    pointB.setY(7);

    pointC.setX(4);
    pointC.setY(-3);

    cout<<"Point Locations:"<<endl;
    cout<<"Point A: (" << pointA.getX() << "," << pointA.getY()<< ")" << endl;
    cout<<"Point B: (" << pointB.getX() << "," << pointB.getY()<< ")" << endl;
    cout<<"Point C: (" << pointC.getX() << "," << pointC.getY()<< ")" << endl;
    cout<<endl;

    cout<<"Euclidian Distances:"<<endl;
    cout<<"A to B: "<<pointA.Distance(pointB)<<endl;
    cout<<"A to C: "<<pointA.Distance(pointC)<<endl;
    cout<<"B to C: "<<pointB.Distance(pointC)<<endl;
    cout<<endl;

    int posMoveValue = 10;
    int negMoveValue = -20;

    pointA.Translate(posMoveValue);
    cout<<"point A was translated by "<< posMoveValue <<" the new location is: (" << pointA.getX() << "," << pointA.getY()<< ")" << endl;
    cout<<"New Euclidian Distances:"<<endl;
    cout<<"A to B: "<<pointA.Distance(pointB)<<endl;
    cout<<"A to C: "<<pointA.Distance(pointC)<<endl;
    cout<<"B to C: "<<pointB.Distance(pointC)<<endl;
    cout<<endl;

    pointA.Translate(negMoveValue);
    cout<<"point A was translated by "<< negMoveValue <<" the new location is: (" << pointA.getX() << "," << pointA.getY()<< ")" << endl;
    cout<<"New Euclidian Distances:"<<endl;
    cout<<"A to B: "<<pointA.Distance(pointB)<<endl;
    cout<<"A to C: "<<pointA.Distance(pointC)<<endl;
    cout<<"B to C: "<<pointB.Distance(pointC)<<endl;
    cout<<endl;

    return 0;
}
