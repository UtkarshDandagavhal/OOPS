#include <iostream>

using namespace std;

class Animal {
    public: 
          int age;
          int weight;
          
    public:
          void eat(){
              cout<<"Eat"<< endl;
          }
};

class Dog:public Animal{
    // cout<<"Inherit the properties: "<<endl;
};

int main()
{
    
    Dog d;
    d.eat();
    return 0;
}
