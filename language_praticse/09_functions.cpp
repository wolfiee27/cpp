#include <iostream>

using namespace std;

// 1) functions types => void
void sayHello(){
    printf(" hello !!! ");
}

// 2) functions with parms => int
int add(int a, int b){
    return a+b;
}

// exprement to understand function
// 1) function types
// 2) functions with params
int main(){
    sayHello();
    int c = add(5,10);
    printf(" \n 5 + 10 = %d", c);
    return 0;
}