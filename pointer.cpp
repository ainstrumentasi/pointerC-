#include <iostream>
using namespace std;
int main(){
	int a, *Pa, b, *Pb, c, *Pc;
	a=5; b=6; c=a+b;
	cout<<"alamat a : "<<&a<<endl;
	cout<<"nilai a : "<<a<<endl;
	cout<<"alamat b : "<<&b<<endl;
	cout<<"nilai b : "<<b<<endl;
	cout<<"alamat c : "<<&c<<endl;
	cout<<"nilai c : "<<c<<endl;
	//cara mengakses alamat variabel  melalui pointer
	Pa =&a;
	Pb=&b;
	Pc=&c;
	cout<<"alamat Pa : "<<&Pa<<endl;
	cout<<"nilai Pa : "<<*Pa<<endl;
	cout<<"alamat Pb : "<<&Pb<<endl;
	cout<<"nilai Pb : "<<*Pb<<endl;
	cout<<"alamat Pc : "<<&Pc<<endl;
	cout<<"nilai Pc : "<<*Pc<<endl;
	return 0;
}
