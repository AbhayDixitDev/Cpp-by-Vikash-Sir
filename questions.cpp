//wap to find out the greatest number between two using functions
//wap for swapping using functions using two variables
//wap to find out the square root of any number and message if not valid number


#include <iostream>
using namespace std;

//void max(int a=0,int b=0){
//	(a>b)?cout<<"number 1 is greatest":cout<<"number 2 is greatest";
//}
//
//int main(){
//	int a,b;
//	cout<<"Enter two numbers:";
//	cin>>a>>b;
//	max(a,b);
//}

//
//void swap(int a,int b){
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	cout<<"number 1:"<<a<<" number 2:"<<b;
//}
//int main(){
//	int a,b;
//	cout<<"Enter two numbers:";
//	cin>>a>>b;
//	swap(a,b);
//}


void sqrt(int a) {
    if (a < 0) {
        cout << "Error: Square root of negative numbers is not supported." << endl;
        return;
    }

    double i = 0.0;
    double increment = 0.001; 
    bool found = false;


    while (i * i <= a) {
        if (i * i == a) {
            cout << "Square root of " << a << " is " << i << endl;
            found = true;
            break;
        }
        i += increment;
    }

 
    if (!found) {
        cout << "Approximate square root of " << a << " is " << (i - increment) << endl;
    }
}

int main() {
    int a;
    cout << "Enter a number to find out its sqrt: ";
    cin >> a;

    sqrt(a);

    return 0;
}
