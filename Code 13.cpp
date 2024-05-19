#include<iostream>
using namespace std;

class student {
public:
    void print() {
        cout << "She is very intelligent" << endl;
    }
};

class Girl {
public:
    void print() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        multi = a * b;
        cout << "The multiplication of " << a << "×" << b << " is " << multi << endl;
    }
private:
    int a = 24, b = 30;
    int multi;
};

class Ansha {
public:
    void print() {
        cout << "Ansha, you idiot!" << endl;
    }
};

int main() {
    student s;
    Girl g;
    Ansha a;
    
    g.print();
    a.print();
    
    return 0;
}
