#include <iostream>
#include <cstdint> // newly introduced module for integer size data type

using namespace std;

//exprement to understand detailed categories of Integere data type 
// NOTE: 1 byte is of 8 bits

int main(){

    // classic declaration of integers
    short int a = 10;
    int b = 20 ;
    long int c = 30;
    long long int d =  40;
    printf(" \n the size of integers: ");
    printf(" \n short int a is: %ld bits ", sizeof(a) * 8);
    printf(" \n int b is: %ld bits ", sizeof(b) * 8);
    printf(" \n long int c is: %ld bits ", sizeof(c) * 8);
    printf(" \n long long int d is: %ld bits \n \n", sizeof(d) * 8);


    //data types from cstdint headers
    int8_t w = 10;
    int16_t x = 20;
    int32_t y = 30;
    int64_t z = 40;
    printf(" \n the size of integers: ");
    printf(" \n int8_t w is: %ld bits ", sizeof(w) * 8 );
    printf(" \n int16_t x is: %ld bits ", sizeof(x) * 8);
    printf(" \n int32_t y is: %ld bits ", sizeof(y) * 8);
    printf(" \n int64_t z is: %ld bits \n \n", sizeof(z) * 8);


    return 0;
}