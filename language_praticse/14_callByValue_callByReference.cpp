# include <iostream>

using namespace std;

// functions for diffrent reference types
int valueLifeUp(int life){
    return ++life;
}

void referencePointerLifeUp(int *life){
    ++(*life);
}

void referenceLifeUp(int &life){
    ++life;
}



// expreiment to understand diffrenece b/w call by value & call by reference 
int main() {
    int life = 10;

    // pass by value 
    life = valueLifeUp(life); // life = 11

    // pass by reference
    referencePointerLifeUp(&life); // life = 12
    referenceLifeUp(life); // life = 13

    printf("value of life %d", life);

    return 0;
}