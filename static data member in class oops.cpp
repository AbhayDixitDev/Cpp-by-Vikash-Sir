#include <iostream>
using namespace std;

class Cybrom{
	static int a;
	
	public:
		static void show(){
			a++;
			cout<<a<<" ";
		}
};
int Cybrom::a=10;

int main(){
	Cybrom a;
	a.show();
	a.show();
	Cybrom b;
	b.show();
	b.show();
}