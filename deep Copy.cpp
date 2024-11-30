#include <iostream>
using namespace std;
#include <string.h>

class top
{
	char *x;
	public:
		top(char *n){
			x= new char[20];
			strcpy(x,n);
		}
		
		top(top &obj){
			x=new char[20];
			strcpy(x,obj.x);
		}
		
		void concat(char *s){
			strcat(x,s);
		}
		
		void show(){
			cout<<x<<"\n";
		}
	
};


int main(){
	top t1("Abhay");
	top t2(t1);
	t1.show();
	t2.show();
	t1.concat(" Dixit");
	t2.concat(" Srivastav");
	t1.show();
	t2.show();
}