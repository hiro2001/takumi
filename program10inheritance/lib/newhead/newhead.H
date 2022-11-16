#ifndef newhead_H
#define newhead_H

#include <iostream>

#define g 9.80665

using namespace std;

class robot{
  private:
  public:

	int w, i, t, Bsize = 11;
  double B[2][11]; //浮力
	double weight, v;
	double data1[11][2] = {{0, 0.9999}, 
							{10, 0.9997},
							{20, 0.9982},
							{30, 0.9957},
							{40, 0.9923},
							{50, 0.9881},
							{60, 0.9832},
							{70, 0.9778},
							{80, 0.9718},
							{90, 0.9653},
							{100, 0.9584}};
	double data2[2];
	char c;
	string bodyName;
	
	void resetB();
	void calculate();
  void infomation();
  void infomation2();
	void calculate2();
	void takuscanf();
};

#endif
