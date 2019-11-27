#include <iostream>
using namespace std;
int main(){
	int a=10, *Pa1, **Pa2, ***Pa3;
	int b=5, *Pb1, **Pb2, ***Pb3;
	Pa1=&a;
	Pa2=&Pa1;
	Pa3=&Pa2;
	Pb1=&b;
	Pb2=&Pb1;
	Pb3=&Pb2;
	cout <<a <<" "<<*Pa1 <<" " <<**Pa2 <<" "<<***Pa3 <<endl;
	cout <<b <<" "<<*Pb1 <<" " <<**Pb2<<" "<<***Pb3<<endl;
	**Pa2=19;***Pb3=50;
	cout <<a <<" "<<*Pa1 <<" " <<**Pa2 <<" "<<***Pa3 <<endl;
	cout <<b <<" "<<*Pb1 <<" " <<**Pb2<<" "<<***Pb3<<endl;
}
