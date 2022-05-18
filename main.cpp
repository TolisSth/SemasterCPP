#include <iostream> 
#include <string>
#include <cmath>    //defining pi through this library, Pi is now named M_PI

using namespace std; 

string userColor; 
float userRay; 

class Circle{
    public: 
        string color; 
        float ray; 
        Circle(); 
        Circle(float r, string c);
        float volume(float r, float p);
        float perimeter(float r, float p);
        void reset(float r); 
}; 

int main(void){
    cout<<"ray: "; 
    cin>>userRay; 
    cout<<"color: "; 
    cin>>userColor;

    Circle circle1 = Circle();
    Circle circle2 = Circle(userRay, userColor); 

    cout<<circle2.volume(circle2.ray, M_PI)<<endl; 
    cout<<circle2.perimeter(circle2.ray, M_PI)<<endl;

    cout<<"New ray: "; 
    cin>>userRay; 
 
    circle2.reset(userRay); 
    cout<<circle2.ray; 
    return 0; 
}

Circle::Circle(){
    ray = 0; 
    color = "-";
    cout<<"Object created"<<endl; 
}

Circle::Circle(float r, string c){
    ray = r; 
    color = c; 
    cout<<"Object created"<<endl; 
}

float Circle::volume(float r, float p){
    float v; 
    v = 2 * p * pow(r,2); 
    return v; 
}

float Circle::perimeter(float r, float p){
    float per; 
    p = 2 * p * r; 
    return p; 
}

void Circle::reset(float r){
    ray = r; 
}