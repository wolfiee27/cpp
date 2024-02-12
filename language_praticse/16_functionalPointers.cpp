# include <iostream>

using namespace std;

void hello() {
    printf("hello, how are you");
}


int main() {
    
    void (*fnpointer)() = hello;

    fnpointer();
    return 0;
}

