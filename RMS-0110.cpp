// RMS-0110.cpp 

#include <iostream>

using namespace std;

class shape
{
public :

    virtual float area()  = 0 ;

   virtual float pramter() = 0 ;

};

class circle : public shape
{
    const float pi = 3.14;
    float r;

public:

    circle() : r(0)
    {}

    circle(float r)
    {
        this->r = r;
    }

    void set_r(float r )
    {
        this->r = r ; 
    }

    float get_r()
    {
        return r;
    }

    float area()
    {
        return (r * r )* pi ;
    }
    float pramter()
    {
        return 2 * r * pi;
    }
};

class rectangle :public shape
{
protected : 

float side1;
float side2;

public:

    rectangle() : side1(0) , side2(0)
    {}

    rectangle(float side1, float side2)
    {
        this->side1= side1;
        this->side2= side2;
    }

    void set_side1(float side1 )
    {
        this->side1 = side1;  
    }

    void set_side2(float side2)
    {
        this->side2 = side2;
    }

    float get_side1()
    {
        return side1;
    }
    float get_side2()
    {
        return side2;
    }

    float area()
    {
        return side1 * side2;
    }

    float pramter()
    {
        return 2 * (side1 * side2);
    }

};

class square : public rectangle
{
public :

    square() 
    {
        side1 = side2 = 0;
    }
    square(float side)
    {
        side1 = side2 = side;
    }

    void set_sides(float side1)
    {
        this->side1 = side1;
    }

    float get_sides()
    {
        return side1;
    }

    float area()
    {
        return side1 * side2;
    }
    float pramter()
    {
        return 4* side1 ;
    }
};



int main()
{
    std::cout << "Hello World!\n";

    while (true)
    {
        cout << "wellcome to my calu the area & parmeter (0__)0)\n"
            << "1 for Square\n"
            << "2 for rectangle\n"
            << "3 for circle\n"
            << "4 for exit \n";
        int choise;
        cin >> choise;

        while (choise)
        {
            if (4 == choise)
            {
                break ;
            }

            if (1 == choise)
            {
               
            }
        }

    }
}
