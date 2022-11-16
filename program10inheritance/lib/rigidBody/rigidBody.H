#ifndef rigidBody_H
#define	rigidBody_H

#include <iostream>

using namespace std;

class rigidBody{
private:
public:
	double	time;	
	double	pos[3];
	double	vel[3];
	double	deltaT;
	void   	infomation();
	void	EulerMethod( double *force, double mass );

	rigidBody();
	~rigidBody();
};

#endif