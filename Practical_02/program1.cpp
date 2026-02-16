#include<iostream>
using namespace std;

class Geometry{
public:
    float area(float r){
        return 3.14*r*r;
    }

    float area(float l, float b){
        return l*b;
    }

    float Volume(float l, float b, float h){
        return l*b*h;
    }
};

int main(){
    Geometry g;
    cout<<"Area of circle = "<<g.area(2)<<endl;
    cout<<"Area of rectangle = "<<g.area(3,4)<<endl;
    cout<<"Volume of cuboid = "<<g.Volume(3,4,5)<<endl;
    return 0;
}
