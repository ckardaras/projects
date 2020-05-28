#ifndef POINT_H //Header Guard
#define POINT_H


class Point
{
    public:
        Point(); //Main Constructor
        Point(int X, int Y); //secondary constructor which takes in x and y
        ~Point(); //destructor
        int getX(); //get x value
        void setX(int newX); //set the x value
        int getY(); //get y value
        void setY(int newY); //set the y value
        double Distance(Point anotherPoint); //finds euclidian distance between this point and another
        void Translate(int moveValue); //translates both x and y coordinates by provided integer

    protected:

    private:
        int x_; //x value of point, ends in underscore because is private
        int y_; // y value of point, ends in underscore because is private
};

#endif // POINT_H
