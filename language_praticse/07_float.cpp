#include <iostream>
#include <cmath>
using namespace std;


// expremient to understand diffrent sizes of floats
// NOTE: 1 byte = 8 bits
int main() {

    float a = 20.2;
    double b = 0.789;
    long double c = 0.8272;

    printf("\n size of float a: %ld bits", sizeof(a) * 8);
    printf("\n size of double b: %ld bits", sizeof(b) * 8 );
    printf("\n size of long double c: %ld bits", sizeof(c) * 8 );

    printf("\n \n \n ");

    printf("\n my float value: %f", a);
    printf("\n my float floored value : %f", floor(a));
    printf("\n my float ceil value : %f", ceil(a));

    return 0;
}