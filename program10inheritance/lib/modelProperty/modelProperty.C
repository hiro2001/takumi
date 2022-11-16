#include "modelProperty.H"

//	Constructor
modelProperty::modelProperty( string name, double m, double *pos, double *vel )
{
	bodyName = name;
	mass = m;
	for( int i=0; i<3; i++ ){
		initial_pos[i] = pos[i];
		initial_vel[i] = vel[i];
	}
}

//	Destructor
modelProperty::~modelProperty()
{
}
