#include "newhead.H"
#include <iostream>

using namespace std;

void robot::resetB(){
	for(w = 0; w < 2; w++)	
		for(i = 0; i < 11;i++)
			B[w][i] = 0;
}

void robot::calculate(){
	for(w = 0; w < 2; w++){
		for(i = 0; i < Bsize; i++){
			B[w][i] = data1[i][1] * data2[w] * g;
		}
	}
}

void robot::calculate2(){
	B[0][0] = data1[i][1] * data2[0] * g;
}

void robot::infomation(){
	for(w = 0; w < 2; w++){
		cout << "機体 No." << w+1 << endl;
		for(i = 0; i < Bsize; i++){
			cout << bodyName << " , " << weight << " kg, 温度" << data1[i][0] << "℃ , 浮力" << B[w][i] << " ( 水密度"<<data1[i][1] << " ,体積 " << data2[w] << " )" << endl;
		}
	}
}

void robot::infomation2(){
	cout << bodyName << " , " << weight << " kg, 温度" << data1[i][0] << "℃ , 浮力" << B[0][0] << " ( 水密度"<<data1[i][1] << " ,体積 " << data2[0] << " )" << endl;
}
void robot::takuscanf(){
	cout << "変更する値を選択してください" << endl;
	cout << "温度(10℃ 単位):t, 体積:v";
	cin >> c;
	switch(c){
		case 't':
		cout << "温度：";
		cin >> t;
		t /= 10;
		i = t;
		break;
		case 'v':
		cout << "体積：";
		cin >> v;
		data2[0] = v;
		break;
		default:
		std::exit(1);
		break;
	}
}


				
