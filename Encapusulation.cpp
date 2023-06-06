#include <iostream>

using namespace std;
// this is an example of encapusulation
class Animal{
    private:
        int age;
        string name;
        
    public:
        void eat(){
            cout << "Eating" <<endl;
        }
        void sleep(){
            cout << "Sleep" << endl;
        }
        
    // use getter and setter to access the data member
    int getAge(){
        return this->age;
    }
    
    void setAge(int age){
        this->age = age;
    }
};

int main()
{
    
    Animal a;
   
    a.setAge(12);
    
    cout<<"age of ramesh: "<<a.getAge()<<endl;
   
   
}
