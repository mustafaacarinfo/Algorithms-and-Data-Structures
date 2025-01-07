#include <iostream>
using namespace std;

class Base {
public:
    //Base() { std::cout << "Base Constructor" << std::endl; }
};

class Derived : public Base {
public:
    //Derived() { std::cout << "Derived Constructor" << std::endl; }
};

class MyClass {
private:
    int a;
    int b;

public:
    // Başlatma listesi ile iki üye başlatılıyor
    MyClass(int x, int y) : a(x), b(y) {}

    void print() {
       // std::cout << "a: " << a << ", b: " << b << std::endl;
    }
};

int main() 
{

int favnum = 0;
 
std::cin >> favnum;

std::cout << "thats my fav num" << std::endl;
std::cout << favnum << std::endl;






     // Çıktı: a: 10, b: 20
}





























