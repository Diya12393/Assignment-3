#include <iostream>
using namespace std;
class Rectangle 
{
private:
    float length;
    float width;

public:
    void set(float l, float w) 
	{
        length = l;
        width = w;
    }

    float calculateArea()
	{
        return length * width;
    }
    void displayArea()
    { 
    cout<<"Area of rectangle: "<<calculateArea()<<endl;
    }
};

int main() {
    Rectangle rect;  
	  float l, w;

    cout<<"Enter length of rectangle: ";
    cin>>l;
    
    cout<<"Enter width of rectangle: ";
    cin>>w;

    rect.set(l, w);
    rect.displayArea();

    return 0;
}
