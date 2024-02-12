# include <iostream>

using namespace std;

class Rectangle{
    private:
        double _length;
        double _breath;
        Rectangle(); // make the deafault constructor inaccessible
    
    public:
        Rectangle(const double l = 2.0, const double b = 2.0) : _length(l), _breath(b) {
            puts("default constructor intialized");
        }

        double area() {
            return this->_length * this->_breath ;
        }

        int compare(Rectangle r2){
            return this->area() > r2.area();
        }
};

// experiment to understand the workings of the this keyword
// this refers to the current object using the class
int main() {

    Rectangle r1(double(3.0),double(3.0));
    Rectangle r2(double(4.0),double(4.0));

    if(r1.compare(r2)){
        printf("area of rectangle one is bigger, r1 area: %f > r2 area: %f", r1.area(), r2.area());
    }else{
        printf("area of rectangle two is bigger, r2 area: %f > r1 area: %f", r2.area(), r1.area());
    }
    

    return 0;
}