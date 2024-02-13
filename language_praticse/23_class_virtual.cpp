# include <iostream>

using namespace std;

// experiment to explain about pointers of objects and 
//importance of virtual key while overiding a method

class A{
    public:
        // observe the changes in the o/p of Func2 when virtual is removed
        virtual void intro() { 
            printf("\n hello i am class one");
        }
};

class B: public A{
    public:
        void intro() {
            printf("\n hello i am class two");
        }
};

class C: public A{
    public:
        void intro() {
            printf("\n hello i am class three");
        }
};


void func2(){

    printf("\n \nfunc1 execution ");
    A a;
    B b;
    C c;

    a.intro();
    b.intro();
    c.intro();
}

void func1() {
    printf("\n \n func2 execution");
    A *a;
    B b;
    C c;

    a = &b;
    a->intro();

    a = &c;
    a->intro();
}

int main(){
    
    func1();
    func2();

    return 0;
}