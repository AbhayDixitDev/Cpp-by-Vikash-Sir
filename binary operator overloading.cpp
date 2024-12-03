#include <iostream>
using namespace std;

class top{
	int a,b;
	public:
		top(int kg,int gm){
			a=kg;
			b=gm;
		}
//		void operator +(top obj){
//			a=a+obj.a;
//			b=b+obj.b;
//			cout<<a<<"kg and "<<b<<" gm\n";
//		}
        top operator +(top obj){
            top t(obj);
			t.a=a+obj.a;
			t.b=b+obj.b;
			cout<<t.a<<"kg and "<<t.b<<" gm\n";
			return t;
		}


		void show(){
			cout<<a<<" and "<<b<<"\n";
		}
		
};

int main(){
	top p1(20,10);
	top p2(90,30);
//	p1.show();
//	p2.show();
	p1+p2;
	p1.show();
	p2.show();
	}