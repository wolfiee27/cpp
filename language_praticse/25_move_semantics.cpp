# include <iostream>

using namespace std;


// the optimiztion is achived by moving contents of a => temp , ( difference is that it will not duplicate the same content into temp )
// it will do a full move of the content
void swap(int &a , int &b ){
    int temp = move(a);
    a = move(b);
    b = move(temp);
}   


// experiment to understand move semantics
// move semantics is utilized to optimize swap operations by moving variables 

int main() {

    int a;
    int b;

    a = 10;
    b = 20;

    swap(a,b);

    printf("value of a: %d, value of b: %d",a ,b);
    return 0;
}