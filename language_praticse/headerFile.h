#ifndef headerFile_h
#define headerFile_h

// override example
// int add(int a, int b ){
//     return a+b;
// }

// float add(float a, float b){
//     return a+b;
// }

template <typename T>
T add(T a, T b){
    return a+b;
}

#endif