#include<iostream>
using namespace std;
class Animal{
  // state and behavior
  private:
  int weight;
public:
  int age;
  string name;
  
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
};
int main(){
    // OBJECT CREATION
    // dynamic
    // static
    Animal ramesh;
    ramesh.age = 12;
    ramesh.name = "lion";
    
    cout<<"Age of ramesh: "<<ramesh.age<<endl;
    cout<<"name of ramesh: "<<ramesh.name<<endl;
    // cout<<"weight of ramesh: "<<ramesh.weight<<endl;
    
    ramesh.settweight(101);
    cout<<"weight of ramesh: "<<ramesh.gettweight()<<endl;
    
    ramesh.eat();
    ramesh.sleep();
    
    
}
