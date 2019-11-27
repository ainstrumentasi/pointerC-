#include <iostream>
using namespace std;
int main(){
	int a, *Pa, b, *Pb, c, *Pc;
	a=5; b=6; c=a+b;
	cout<<a<<" "<<b<<" "<<c<<endl;
	Pa =&a;
	Pb=&b;
	Pc=&c;
	//mengganti isi nilai dari a, b, dan c
	*Pa=100;*Pb=200;
	*Pc=*Pa+*Pb;
	cout <<"nilai update "<<endl;
	cout <<a<<" "<<b<<" "<<c<<endl;
}
