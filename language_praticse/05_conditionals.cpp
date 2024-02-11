#include <iostream>

using namespace std;

// exprement to understand conditional blocks 

int main() {

    int rating = 3;

    // if - else blocks
    if (rating == 5) {
        printf("you are 5 star rated, yeahhh!!!");
    }else if ( rating >= 3 && rating <= 4 ) {
        printf("its okay rated ");
    } else {
        printf("you could do better than that, :( ");
    }


    printf("\n \n");

    // switch 

    switch(rating){
        case 1 : 
            printf("very poor ");
            break;
        case 2:
            printf("please improver");
            break;
        case 3: 
            printf("come on ");
            break;
        case 4:    
            printf("manageable ");
            break;
        case 5:
            printf("thats good");
            break;
        default:
            printf("this is not a valid answer");
            break;
    }

    return 0;
}