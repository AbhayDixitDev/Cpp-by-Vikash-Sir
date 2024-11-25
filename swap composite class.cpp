#include <iostream>
using namespace std;

class input {
public:
    int a;
    int b;
    void num(int a1, int b1) {
        a = a1;
        b = b1;
    }
};

class swap1 {
public:
    input h; 
    void swap() {
        int temp = h.a;
        h.a = h.b;
        h.b = temp;

        cout << "After swap:" << endl;
        cout << "a = " << h.a << endl;
        cout << "b = " << h.b << endl;
    }
};

int main() {
    input h;
    h.num(10, 20); 

    swap1 s; 
    s.h = h; 
    s.swap();

    return 0;
}
