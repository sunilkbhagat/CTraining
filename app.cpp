#include <iostream>
#include "triangle.h"
using namespace std;

void test(Triangle t, const char * prefix="Test Triangle"){
    show(t,prefix);
    cout<<"area ="<<area(t)<<endl
        <<"perimeter="<<perimeter(t)<<endl<<endl;
}

int validateside(double a1,double a2,double s3){
    if(a+b > c)
        return 1;
    if(b+c > a)
        return 1;
    if(a+c > b)
        return 1;
    else 
        return 0;

}

int main(int argc, char const *argv[])
{
    cout<<"sizeof(Triangle)="<<sizeof(Triangle)<<endl;
    double a1,double a2,double s3;
    if(validateside(a1, a2, 3))
        return 0;
    Triangle t1 = {a1,a2,a3};


    
    test(t1,"t1");

    Triangle t2={1,1,1};
    test(t2,"t2");

    return 0;
}