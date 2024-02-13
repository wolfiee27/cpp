# include <iostream>

#include <memory> // mandetory if using smart pointers
using namespace std;


class User{
    public:
        User(){
            printf(" user class created \n ");
        }
        
        ~User(){
            printf("user class destroyed \n ");
        }

        void testFunc(){
            printf(" hello i am a test function \n ");
        }
};





// experiment to understand Smart pointers , they are of _ types
// 1) Unique Pointers 
//   - pointers which automatically gets deleted , 
//     once the scope in which they are declared ends.
//     a single resource can only have one unique pointer
//
// 2) Shared Pointers
//  - a single resource can be pointed by multiple pointers
//    there is a reference counter which will keep track of how many pointers are refering to the same memory.
//    once the reference counter becomes zero , then the resource will be destroyed
// 
// 3) weak pointers
//   - same as normal pointers
int main(){

    {
        unique_ptr<User> gokul = make_unique<User>();
        // unique_ptr<User> gokul2 = gokul;  // this block of code will not execute
        gokul->testFunc();
    }

    {
        shared_ptr<User> soundu = make_shared<User>();
        shared_ptr<User> gokul = soundu;
        weak_ptr<User> goku = soundu;
    }

    printf("class User is out of Scope");
    return 0;
}