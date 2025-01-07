#include <iostream>
using namespace std;

class Number {
private:
    int* value; // Dinamik olarak bir tamsayı tutar
public:
    // Constructor: Dinamik bellek ayırır
    Number(int val) {
        value = new int(val);
        cout << "Constructor çağrıldı: " << *value << endl;
    }

    // Copy Constructor: Derin kopya yapar
    Number(const Number& other) {
        value = new int(*other.value); // Yeni bir bellek ayır ve değeri kopyala
        cout << "Copy Constructor çağrıldı: " << *value << endl;
    }

    // Assignment Operator: Derin kopya yapar
    Number& operator=(const Number& other) {
        if (this == &other) {
            return *this; // Kendi kendine atamayı önler
        }

        delete value;                // Eski belleği serbest bırak
        value = new int(*other.value); // Yeni bellek ayır ve değeri kopyala
        cout << "Assignment Operator çağrıldı: " << *value << endl;

        return *this;
    }

    // Destructor: Dinamik belleği serbest bırakır
    ~Number() {
        delete value;
        cout << "Destructor çağrıldı" << endl;
    }

    // Değeri ekrana yazdırır
    void display() const {
        cout << "Value: " << *value << endl;
    }
};


int main() {
    Number num1(10);        // Constructor çağrılır
   
    Number num2 = num1;     // Copy constructor çağrılır

    
    num2.display(); // value 10

    Number num3(20);        // Constructor çağrılır
    
    num3 = num1;            // Assignment operator çağrılır

    return 0;               // Destructor her nesne için çağrılır
}
