# include <iostream>

using namespace std;

int factorial(int a);

// experiment to understand recursion using => factorial of a number.
int main() {

    int n;

    printf("\n enter a number:");
    cin >> n;

    printf("result of the factorial is: %d", factorial(n));

    return 0;
}

int factorial(int a){
    if(a != 1){
        return a * factorial(a-1);
    }else{
        return 1;
    }
}