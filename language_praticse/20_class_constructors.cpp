# include <iostream>
# include <string>
using namespace std;

class Phone{
    private:
        string _name = "";
        string _os = "";
        int _price = 0;
    
    public:
        Phone(); // default constructor
        Phone(const string &name,const string &os,const int &price); // parameterized constructor
        Phone(const Phone &); // copy constructor
    
    void display(){
        printf("\n name: %s , os: %s , price: %d", _name.c_str(), _os.c_str(), _price);
    }
};

Phone::Phone(): _name(), _os(), _price() {
    puts("\n default constructor");
}

Phone::Phone(const string &name,const string &os,const int &price): _name(name), _os(os), _price(price){
    puts("\n parameterized constructor");
}

Phone::Phone(const Phone & values){
    puts("\n copy constructor ");
    _name = "Iphone";
    _os = values._os;
    _price = values._price;
}


//experiment to understand class constructors
// 1) deafult constructor
// 2) parameterised constructor
// 3) copy constructor
int main() {

    Phone apple("14 pro max", "ios", 140000);
    apple.display();

    Phone apple2 = apple;
    apple2.display();
    return 0;
}