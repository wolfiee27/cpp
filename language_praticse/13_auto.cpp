# include <iostream>
# include <string>
using namespace std;

//experiment to understand dynamic variable type: auto

int main() {
    auto var1 = string("hello");
    auto var2 = int(10);

    if( typeid(var1) == typeid(string)) {
        printf("\n dynamic variable is allocated as string %s", var1);
    }

    if( typeid(var2) == typeid(int)) {
        printf("\n dynamic variable is allocated as int %d", var2);
    }

    return 0;
}