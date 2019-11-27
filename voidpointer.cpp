#include <iostream>
using namespace std;
int main(){
	int a=10;
	float b=100;
	void *Pv;//void pointer
	Pv=&a;
	cout<<*(int *)Pv<<endl;
	//cout<<a;
	Pv =&b; 
	cout<<*(float *)Pv;
	//cout <<b;
}
