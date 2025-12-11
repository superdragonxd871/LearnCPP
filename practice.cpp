#include <iostream>
#include <string>
using namespace std;

class product{
    public:
    string company;
    int variant;
     product(int variant){
        company="apple";
        this->variant=variant;
    };
};

int main(){
    product iphone(15);
    cout<<iphone.company;
    cout<<iphone.variant;
    
}