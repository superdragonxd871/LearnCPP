#include <iostream>
#include <string>
using namespace std;

class sum{
    public:
    sum(int a,int b){
        cout<<a+b<<endl;
    }
    sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    };
};
int main(){
    sum s1(3,6);
    sum s2(4,36,6);

}