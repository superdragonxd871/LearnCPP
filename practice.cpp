#include <iostream>
#include <string>
using namespace std;

class product{
    public:
    string company;
     product(){
        company="apple";
    };
};

int main(){
    product iphone;
    cout<<iphone.company;
    
}