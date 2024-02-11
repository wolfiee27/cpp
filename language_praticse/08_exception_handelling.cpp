#include <iostream>

using namespace std;

// expreminet to understand try , catch , throw 
int main() {

    int myNum = 10;

    try{
        printf("\n try block being executed ...");
        throw myNum;
        printf("\n this is will no execute, since throw happens");
    }catch(int err){
        printf("\n integer exception handled %d", err);
    }catch(float err){
        printf("\n float exception handled %f", err);
    }catch(...){
        printf("\n something went wrong ");
    }

    return 0;
}