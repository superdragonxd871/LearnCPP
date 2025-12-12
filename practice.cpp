#include <iostream>
#include <string>
using namespace std;

class parent
{
public:
    string name;
    int age;
    void setparent(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void getparent()
    {
        cout << name << endl;
        cout << age << endl;
    }
};
class child : public parent
{
public:
    string work;
    void setchild(string name, int age, string work)
    {
        this->name = name;
        this->age = age;
        this->work = work;
    }
    void getchild()
    {
        cout << name << endl;
        cout << age << endl;
        cout << work << endl;
    };
};

class grandchild : public child
{
public:
    string address;
    void setgrand(string name, int age, string work, string address)
    {
        this->name = name;
        this->age = age;
        this->work = work;
        this->address = address;
    };
    void getgrand()
    {
        cout << name << endl;
        cout << age << endl;
        cout << work << endl;
        cout << address << endl;
    };
};
int main()
{
    child c1;
    c1.setchild("sourabh", 21, "student");
    c1.getchild();
    grandchild g1;
    g1.setgrand("vikram",20,"grandson","roadparrehtahai");
    g1.getgrand();
}