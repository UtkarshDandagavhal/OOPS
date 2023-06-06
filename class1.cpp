#include<iostream>
using namespace std;
class Animal{
  // state and behavior
  private:
  int weight;
public:
  int age;
  string name;
  
  // construtor by default called now - also know default construtor
  Animal(){
      this->weight = 0;
      this->age = 0;
      this->name = "";
  }
  Animal(int weight){
      this->weight = weight;
      cout<<"parametrised construtor1 called"<<endl;
  }
  // parametrised construtor
  Animal(int weight, int age){
      this->weight = weight;
      this->age = age;
      cout<<"parametrised construtor2 called";
  }
  
  Animal(int weight, int age, string name){
      this->weight = weight;
      this->age = age;
      this->name = name;
      cout<<"parametrised construtor3 called"<<endl;
  }
  // function create
  void eat(){
      cout<<"Eat now"<<endl;
  }
  void sleep(){
      cout<<"Sleep now"<<endl;
  }
  
  // create getter fetching private member
  int gettweight(){
      return weight;
  }
  // create setter fetching private member
  void settweight(int w){
      weight = w;
  }
  
  //copy construtor
  Animal(Animal &obj){
      this->age = obj.age;
      this->weight = obj.weight;
      this->name = obj.name;
      cout<<"its copy construtor"<<endl;
  }
  
};
int main(){
    // OBJECT CREATION
    // static
    // Animal ramesh;
    // ramesh.age = 12;
    // ramesh.name = "lion";
    
    // cout<<"Age of ramesh: "<<ramesh.age<<endl;
    // cout<<"name of ramesh: "<<ramesh.name<<endl;
    // cout<<"weight of ramesh: "<<ramesh.weight<<endl;
    
    // ramesh.settweight(101);
    // cout<<"weight of ramesh: "<<ramesh.gettweight()<<endl;
    
    // ramesh.eat();
    // ramesh.sleep();
    
    // dynamic memory allocation 
    // create an OBJECT
    // Animal* Suresh = new Animal;
    
    // access the elements 
    // (*Suresh).age = 15;
    // (*Suresh).name = "bill";
    
    
    // (*Suresh).eat();
    // (*Suresh).sleep();
    
    // alternate way to access element using arrow operator
    // Suresh->age = 17;
    // Suresh->name = "ok";
    
    // Suresh->eat();
    // Suresh->sleep();
    
    
    Animal a(10);
    Animal* b = new Animal(50,10,"xuv");
    
    
    // Object copy
    Animal c = a;
    
    //another way to copy Object
    Animal animal1(c);
    
}
