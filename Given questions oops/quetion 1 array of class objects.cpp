//Q.1 Write a C++ program to display Names, Roll No., and grade of 3 students 
//who have appeared in the examination. Declare the class of name, roll no., 
//and grade. Create an array of class objects. Read and display the contents of the array

#include <iostream>
using namespace std;

class Name{
	string name;
	public:Name(string nm){
		name=nm;
	}
	Name Operator <<(){
		cout<<name<<" ";
	}
};

class Rollno{
	int rollno;
	public:Rollno(int rl){
		rollno=rl;
	}
	void operator << (){
		cout<<rollno<<" ";
	}
};

class Grade{
	char grade;
	public:Grade(char gr){
		grade=gr;
	}
	void operator << (){
		cout<<grade<<" ";
	}
};

int main(){
    Name obj1("Abhay");
    Rollno obj2(121);
    Grade obj3('A');
    
    
	void array[]={obj1,obj2,obj3};
	
	for(auto i:array){
		cout<<i;
	}	
}