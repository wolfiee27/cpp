# include <iostream>

using namespace std;

int lifeup(){
    // the initialization will happen only once 
    // this value will be stored in memory and will be updated, initialization will not happen in the second call
    static int life = 4;
    return ++life;
}

// experiment to understand linkers and qualifiers
int main() {
    int life;

    life = lifeup();
    printf("\n intial life:%d", life);

    // mario gets a mushroom , increment life by one value
    life = lifeup();
    printf("\n life:%d", life);

    // mario gets another mushroom , increment life by one value
    life = lifeup();
    printf("\n life:%d", life);

    return 0;
}
/*
QUALIFIERS:
    are of two types
    1) modification qualifiers
    2) Life duration qualifiers

    MODIFICATION QUALIFIERS: 
        this informs the compiler about the variable prop
        1)  const
            constant value accross the program

        2)  volatile
            this allows multiple threads of the program to modify the valotile variable 

        3)  mutable
            makes the variable mutable as the name suggests

    LIFE DURATION QUALIFIERS:
        1) static 
            global scope

        2) register
            suggest the varibale to be stored in the register ( the complier will accept/ignore the req )

        3) extern         
            store's the data in the external library.
*/  




