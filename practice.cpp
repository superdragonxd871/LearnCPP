#include <iostream>
#include <string>
using namespace std;

class animal{
    public:
    void speak(){
        cout<<"sound"<<endl;
    };
};
class dog : public animal{
    public:
    void speak(){
        cout<<"bow bow"<<endl;
    };
};

int main(){
    animal d1;
    d1.speak();
    dog d2;
    d2.speak();
}