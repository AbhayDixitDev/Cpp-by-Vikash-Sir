//function overloaing in a class
//if a class have multiple function with different parameters but function name are same this will be called function overloading


#include <iostream>
using namespace std;

class Cybrom{
	int a, b;
	public:
	void sum (int x, int y);
	void sum (int x, int y, int z);
	void sum (int x, int y,int z, int a);
	int cube(int a);
};

void Cybrom::sum(int x, int y)
{
	cout<<x+y<<"\n";
}

void Cybrom::sum(int x, int y,int z)
{
	cout<<x+y+z<<"\n";
}

void Cybrom::sum(int x, int y, int z, int a)
{
	cout<<x+y+z+a<<"\n";
}

int Cybrom::cube(int a ){
	cout<<a*a*a<<"\n";
}

int main(){
	Cybrom c;
	c.sum(4,6);
	c.sum(4,6,8);
	c.sum(4,6,8,10);
	c.cube(5);
}