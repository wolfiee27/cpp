#include <iostream>

using namespace std;

int main() {

    int myNumbers[] = {0,1,2,3,4,5,6,7};

    int i =0;
    // while loop
    while (i < 8) {
        printf(" myNumbers[%d]: %d \n", i, myNumbers[i] );
        i++;
    }

    // for loop
    for(int i=0; i <= 10; i = i+2){
        printf(" for loop i: %d \n", i);
    }


    //for Range
    for (int i  : myNumbers)
    {
        cout << i << endl;
    }
    printf("\n \n \n");

    char myString[] = "gokul";

    for(char i: myString){
        if( i == 0) break;
        printf("01 => character is : %c \n", i);
    }

    printf("\n \n \n");
    
    // myString[i] == 0
    // mystring[0] => 0 , 0 is false 
    for(int i=0; myString[i]; i++){
        printf("02 => character is : %c \n", myString[i]);
    }

    printf("\n \n \n");

    for(char *cp= myString; *cp ; cp++){
        printf("03 => character is : %c \n", *cp);
    }

    return 0;
}