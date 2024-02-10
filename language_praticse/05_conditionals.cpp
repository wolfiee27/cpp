#include <iostream>

using namespace std;

// exprement to understand conditional blocks 

int main() {

    int rating = 3;

    if (rating == 5) {
        printf("you are 5 star rated, yeahhh!!!");
    }else if ( rating >= 3 && rating <= 4 ) {
        printf("its okay rated ");
    } else {
        printf("you could do better than that, :( ");
    }

    return 0;
}