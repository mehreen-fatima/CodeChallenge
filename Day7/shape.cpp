#include<iostream>
#include<memory>
using namespace std;
class Shape{
    public:
    virtual void Area() const=0;
    virtual ~Shape(){}

};
class Rectangle: public Shape{
    float length, width;
    public:
    Rectangle(float l, float w): length(l), width(w){}
    void Area() const override {
        float A=length*width;
        cout<<"Area of Rectangle is:"<<A<<endl;}
        
};
class Triangle: public Shape{
    float height,base;
    public:
    Triangle(float H, float B): height(H), base(B){}
    void Area()const override{
        float A=0.5*(height*base);
        cout<<"Area of Triangle is:"<<A<<endl;
    }
};
class Circle: public Shape{
    float radius;
    public:
    Circle(float r) : radius(r){}
    void Area() const override{
        float A=3.1415*radius*radius;
        cout<<"Area of Circle is:"<<A<<endl;
        
    }
};

void displayMenu(){

    cout<<"This program calculates Area of shapes\n";
    cout<<"choose number for the shape \n";
    cout<<"1 Rectangle"<<endl;
    cout<<"2 Triangle "<<endl;
    cout<<"3 circle "<<endl;
    cout<<"4 Exit"<<endl;

}
int main(){

    
    
    

    int choice;

    do
    {
        displayMenu();
        cin>>choice;
        switch (choice)
        {
        case 1:{
            float length, width;
            cout<<"Enter length of rectangle:"<<endl;
            cin>>length;
            cout<<"Enter base of rectangle:"<<endl;
            cin>>width;
            unique_ptr<Shape> rec1=make_unique<Rectangle>(length,width);
            rec1->Area();
            break;}
        case 2:{
            float height, base;
            cout<<"Enter heigth of triangle:"<<endl;
            cin>>height;
            cout<<"Enter base of rectangle:"<<endl;
            cin>>base;
            unique_ptr<Shape> tri1=make_unique<Triangle>(height,base);
            tri1->Area();
            break;}
        case 3:{
            float radius;
            cout<<"Enter radius of circle:"<<endl;
            cin>>radius;
            unique_ptr<Shape> cir1=make_unique<Circle>(radius);
            cir1->Area();
            break;}
        case 4:{
            cout<<"thanks for using area calculator"<<endl;
            break;}
        default:{
            break;}
        }
    } while (choice !=4);
    
}
