#include<iostream>
using namespace std;


class Shape
{
    public:
        void setWidth(int w)
        {
            width=w;
        }
        void setHeight(int h)
        {
            height=h;
        }

    protected:
        int width;
        int height;
};



class PaintCost
{
    public:
        int getCost(int area)
        {
            return (area*70);
        }
};


class Rectangle:public Shape,public PaintCost
{
    public:
        int getArea()
        {
            return (width*height);
        }
};




int main(void)
{

    Rectangle rect;
    int area;


    rect.setHeight(7);
    rect.setWidth(5);

    area=rect.getArea();

    cout<<"The Area is:"<<rect.getArea()<<endl;

    cout<<"The cost of paint is:"<<rect.getCost(area)<<endl;
    

    return 0;
};
