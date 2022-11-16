#include <iostream>
#include "newhead.H"
using namespace std;

robot r;
void aircraft(){
	r.resetB();
  r.bodyName = "bathrobo"; 
	r.weight = 1;
	r.data2[0] = 0.17;
	r.data2[1] = 0.34; //data1=密度[kg/m^3], data2=体積[m^3]
}

void change(){
	while(1){
		r.takuscanf();
		r.calculate2();
		r.infomation2();
	}
}

int main(){
	aircraft();
	r.calculate();
  r.infomation();

	change();
  return 0;
}
