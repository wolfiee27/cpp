# include <iostream>
# include <string>
using namespace std;


template <typename T>
void func(T t){
    cout << "one Func " << t << endl;
}

template <typename T, typename... Args>
void func(T t, Args... args){
    cout << "Two func " << t << endl;
    func(args...);
}

// experiment to understand , veriadic -> take multiple properties as inputs to a function as a single variable
int main() {
    int a = 10;
    func(string("gokul"));
    func(10, 20 , 30.11 , 40.52 , string("hello"));

    return 0;
}