# include <iostream>

using namespace std;

struct User {
    const int uid;
    const char *name;
    const char *email;
    int courseCount;
};


int main() {
    User gokul = {
        001,
        "gokul",
        "gokul@gmail.com",
        100
    };
    
    cout << gokul.name << endl;

    User *g = &gokul;
    cout << g->name << endl;


    cout << g->email << endl;
    g->email = "gokul@yahoo.com";
    cout << gokul.email << endl;



    return 0;
}