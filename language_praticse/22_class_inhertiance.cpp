# include <iostream>

using namespace std;

//base class
class Man{
    private:
        string _name;
        int _age;
        Man();

    protected:
        void run(){printf("\n i can run");}

    public:
        Man(const string &name, const int &age) : _name(name), _age(age) {}
        void sayName() const {
            printf("\n hi my name is %s and my age is: %d", this->_name.c_str(), this->_age);
        }
};

//derived class
class Superman: public Man{
    private:
        bool flight;
    public:
        Superman(const string &name): Man(name, 26){};
        void run(){printf("\n I can run at light speed");} // method overiding
};

//
class Iornman: public Man{
    private:
        bool flight;
    public:
        Iornman(const string &name): Man(name, 35){}
        void run(){printf("\n i can fly at the speed of sound");} // method overiding
};


int main() {
    //base class
    Man gokul("gokul", 25);

    //derived class
    Superman clarkKent("clark Kent");
    Iornman tony("tonyStark");

    gokul.sayName(); //base class method


    clarkKent.sayName(); //base class method
    clarkKent.run(); //base class -> method overiding

    tony.sayName(); //base class method
    tony.run(); //base class -> method overiding

    return 0;
}