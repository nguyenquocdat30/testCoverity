// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal{
private:
    string strName;
    int age;
public:
    Animal(){
        strName = {"This is Animal"};
        age = 0;
    }
    string getName(){
        return strName;
    }
    int getAge(){
        return age;
    }
};

int main() {
    Animal *cat = new Animal();
    cout<<cat->getName()<<endl;
    
    return 0;
}
