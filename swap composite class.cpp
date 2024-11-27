//#include <iostream>
//using namespace std;
//
//
//
//class swap1 {
//public:
//    
//    void swap2(int a,int b) {
//        int temp = a;
//        a = b;
//        b = temp;
//        cout << "After swap:" << endl;
//        cout << "a = " << a << endl;
//        cout << "b = " << b << endl;
//    }
//};
//
//class input {
//public:
//    int a;
//    int b;
//    swap(int k,int l)
//    {
//    	a=k;
//    	b=l;
//	}
//	swap1 obj;
//	obj.swap2(a,b);
//	
//};
//
//int main() {
//    input h;
//    h.swap(10,20);
//    
//}



#include <iostream>
using namespace std;

class swap1 {
public:
    void swap2(int a, int b) { 
        int temp = a;
        a = b;
        b = temp;
        cout << "After swap:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

class input {
public:
    int a;
    int b;   
    void performSwap(int s,int t) { 
        a=s;
        b=t;
		swap1 obj;
        obj.swap2(a, b); 
    }
};

int main() {
    input h;
    h.performSwap(10,20);
}
