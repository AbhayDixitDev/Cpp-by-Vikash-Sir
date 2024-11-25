#include <iostream>
using namespace std;

class Table{
	public:
		static void table(int n){
			for(int i=1;i<=10;i++){
				cout<<n<<" * "<< i<<" = "<< n*i<<endl;
			}
		}
};




int main(){
	int n;
	cout<<"enter a number for table:";
	cin>>n;
	
	Table::table(n);
	
	
}