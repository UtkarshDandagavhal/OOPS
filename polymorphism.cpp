/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class A{
  public:
    int price;
    
     void Increse(){
        cout<<"Increse Price: "<<endl;
    }
};

class B : public A{
    public:
      // Function/method override 
      void Increse(){
          cout<<"Increse More"<<endl;
      }
};
int main()
{
    // B b1;
    // b1.Increse();
    
    // A* parent = new A();
    // parent->Increse();
    
    //   B* parent1 = new B();
    //   parent1->Increse();
    
    // it depend upon the runtime polymorphism
    // its the concept of upcasting
    // A* p1 = new B();
    // p1->Increse();
    
      B* p2 = (B*) new A();
      p2->Increse();
    
    return 0;
}
