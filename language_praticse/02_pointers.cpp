#include <iostream>

using namespace std;

int main() {

    // create a int score variable 
    // use the pointer var to store the addr of score
    int score = 100;
    int *myPointer = &score;
    printf("1) \tscore: %d \n", score);
    printf("1) \tpointer: %p \n \n", myPointer);


    // create a reference var anotherScore and make a hardlink to the var score
    // modify the ref var and observe the changes in the hardlinked var
    int &anotherScore = score;
    anotherScore = 200;
    printf("2) \tscore: %d \n", score);
    printf("2) \tpointer: %p \n \n \n", myPointer);


    // make changes to the score var by storing another int value to the location where the 
    // score var resides , observe the changes in the var , ref , and the pointer location
    *myPointer = 30000;
    printf("3) \t score: %d \n", score);
    printf("3) \t anotherScore: %d \n", anotherScore);
    printf("3) \t pointer: %p \n", myPointer);

    return 0;
}