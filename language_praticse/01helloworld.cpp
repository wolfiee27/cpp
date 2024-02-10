#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    char name[30];
    cout << "please enter your name: ";
    cin >> name;
    cout << "now enter your age: ";
    cin >> age;
    // cout << "hello " << name << " !!!, is your age: " << age << endl;
    printf(" hello %s !!!, is your age %d ?", name , age);
    return 0;
}