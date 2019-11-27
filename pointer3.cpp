#include <iostream>
using namespace std;
int main(){
	int a, *Pa, b, *Pb, c, *Pc;
	a=5;
	cout<<a<<endl;
	Pa =&a;
	Pb=&a;
	Pc=&a;
	//jika variabel 1 diakses banyak pointer, mengambil nilai terakhir 
	*Pa=5;
	*Pb=6;
	*Pc=7;
	cout<<"Update "<<endl;
	cout<<a;
}
