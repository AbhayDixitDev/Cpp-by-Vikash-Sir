#include <iostream>
using namespace std;

class student2;
class student1{
	int marks=80;
	friend void cmp(student1,student2);
};

class student2{
	int marks=90;
	friend void cmp(student1,student2);
};

void cmp (student1 s1,student2 s2){
	if(s1.marks>s2.marks){
		cout<<s1.marks;
	}
	else{
		cout<<s2.marks;
	}
}

int main(){
	student1 s1;
	student2 s2;
	cmp(s1,s2);
}