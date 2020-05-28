/*
Chris Kardaras
PE 2
This Program creates a point class and then is able
to determine that points euclidian distance


*/
/*#include "Point.h"
#include <iostream>


using namespace std;

int main()
{

    vector<int> testInit1{-1,2,3};
    Point A(testInit1);
    vector<int> testInit2{4,0,-3,4};
    Point B(testInit2);
    cout<<A.Distance(B)<<endl;

    return 0;
}*/

#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    vector<int> v1 {-1,2,3};
    vector<int> v2 {4,0,-3};
    vector<int> v3 {8,7,1};

    Point pointA(v1);
    Point pointB(v2);
    Point pointC(v3);

    cout<<"Point Locations:"<<endl;
    cout<<"Point A: (" << pointA.getX(0) << "," << pointA.getX(1) << "," << pointA.getX(2)<<")" << endl;
    cout<<"Point B: (" << pointB.getX(0) << "," << pointB.getX(1) << "," << pointB.getX(2)<<")" << endl;
    cout<<"Point C: (" << pointC.getX(0) << "," << pointC.getX(1) << "," << pointC.getX(2)<<")" << endl;
    cout<<endl;

    cout<<"Euclidian Distances:"<<endl;
    cout<<"A to B: "<<pointA.Distance(pointB)<<endl;
    cout<<"A to C: "<<pointA.Distance(pointC)<<endl;
    cout<<"B to C: "<<pointB.Distance(pointC)<<endl;
    cout<<endl;

    int posMoveValue = 10;
    int negMoveValue = -20;

    pointA.Translate(posMoveValue);
    cout<<"point A was translated by "<< posMoveValue <<" the new location is: (" << pointA.getX(0) << "," << pointA.getX(1) << "," << pointA.getX(2)<<")" << endl;
    cout<<"New Euclidian Distances:"<<endl;
    cout<<"A to B: "<<pointA.Distance(pointB)<<endl;
    cout<<"A to C: "<<pointA.Distance(pointC)<<endl;
    cout<<"B to C: "<<pointB.Distance(pointC)<<endl;
    cout<<endl;

    pointA.Translate(negMoveValue);
    cout<<"point A was translated by "<< negMoveValue <<" the new location is: (" << pointA.getX(0) << "," << pointA.getX(1) << "," << pointA.getX(2)<<")" << endl;
    cout<<"New Euclidian Distances:"<<endl;
    cout<<"A to B: "<<pointA.Distance(pointB)<<endl;
    cout<<"A to C: "<<pointA.Distance(pointC)<<endl;
    cout<<"B to C: "<<pointB.Distance(pointC)<<endl;
    cout<<endl;

    return 0;
}
