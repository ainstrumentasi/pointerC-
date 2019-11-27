#include <iostream>
using namespace std;
int main(){
	int a[5]={1,2,3,4,5},*Pa;
	Pa=a;
//	Pa=&a[0];
//	cout <<a<<" "<<&a[0];
	for(int i=0;i<5;i++){
		cout <<a[i]<<endl;
	}
	cout <<"cara akses dengan pointer "<<endl;
	//menggunakan array dengan pointer
		for(int i=0;i<5;i++){
		cout <<*(a+i)<<endl;
	}
}
