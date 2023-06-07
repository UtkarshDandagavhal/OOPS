  /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Car{
    public:
        int price;
        
        void SpeedUp(){
            cout<<"Speed Increse Now:"<<endl;
        }
};

class Scorpio: public Car{
    
};
class Tata: public Car{
    
};

int main()
{
    cout<<"Hello World"<<endl;
    
    Scorpio s11;
    s11.SpeedUp();
    
    Tata t11;
    t11.SpeedUp();
    

    return 0;
}
