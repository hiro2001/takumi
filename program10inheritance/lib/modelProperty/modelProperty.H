#ifndef modelProperty_H
#define	modelProperty_H

#include <rigidBody.H>

class modelProperty
: public rigidBody
{
private:
public:
	string 	bodyName;
	double	mass;
	double	initial_pos[3];
	double	initial_vel[3];

	modelProperty( string bodyName, double mass, double *initial_pos, double *initial_vel );
	~modelProperty();
};

#endif