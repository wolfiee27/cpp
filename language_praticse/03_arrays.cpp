#include <iostream>

using namespace std;


// exp to understand array's and how to access them through a pointer;

int main(){

    int numbers[3] = {0, 10, 20};
    int *mypointer;

    mypointer = numbers;
    printf("numbers Array %d \n", numbers[0]);
    printf("pointer[0] %d \n \n", *mypointer);

    // try printing the second element of the array 
    // by pointing it to second elem by updating the pointer value
    mypointer++; // mypointer = mypointer +1
    printf("pointer[1] %d \n\n", *mypointer);
    return 0;
}