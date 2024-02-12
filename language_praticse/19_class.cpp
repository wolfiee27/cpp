# include <iostream>
#include <string>
using namespace std;


class User  {
    private:
        int _secret = 27;

    public:
        string name = "default";
        void classMessage();
        void setSecret(const int &newSecret ){ _secret = newSecret; }
        int getSecret(){ return _secret; }
};

//you can also define contents of a method seperately , like this
void User::classMessage(){
            cout << "class is great " << name << "!!!" << endl;
};


// experiment to understand class 
int main() {

    User obj;
    obj.name = "gokul";
    obj.classMessage();
    obj.setSecret(333);

    cout << obj.getSecret() << endl;
    return 0;
}