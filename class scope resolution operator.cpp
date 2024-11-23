#include <iostream>
using namespace std;

class Cybrom{
	int a, b;
	public:
	void sum (int x, int y);
	int cube(int a);
};

void Cybrom::sum(int x, int y)
{
	cout<<x+y<<"\n";
}

int Cybrom::cube(int a ){
	cout<<a*a*a<<"\n";
}

int main(){
	Cybrom c;
	c.sum(4,6);
	c.cube(5);
}