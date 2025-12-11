#include <iostream>
#include <string>
using namespace std;

class product{
    private:
    int discount;
    public:
    string name;
    int price;
    int rating;

    void setinfo(string name,int price,int rating,int discount){
        this-> name=name;
       this-> price=price;
       this-> rating=rating;
       this-> discount=discount;
    };
    void giveinfo(){
        cout<<name<<endl;
        cout<<price<<endl;
        cout<<rating<<endl;
        cout<<discount<<endl;
    }

};

int main(){
    product p1;
    p1.setinfo("iphone",1000,23,45);
    p1.giveinfo();
}
