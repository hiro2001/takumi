#include "rigidBody.H"

using namespace std;

//	Constructor
rigidBody::rigidBody()
{
	pos[0] = 0.0;	pos[1] = 0.0;	pos[2] = 0.0;
	vel[0] = 0.0;	vel[1] = 0.0;	vel[2] = 0.0;
}

//	Destructor
rigidBody::~rigidBody()
{
	cout << "Finished." << endl;
}

//	Member function
void   	rigidBody::infomation()
{
	cout << time << " [s] " << endl;
	cout << pos[0] << " , " << pos[1] << " , " << pos[2] << " [m] " << endl;
	cout << vel[0] << " , " << vel[1] << " , " << vel[2] << " [m/s] " << endl;
}

void   	rigidBody::EulerMethod( double	*force, double mass )
{
	for( int i=0;	i<3; i++ ){
		pos[i] += vel[i] * deltaT;
		vel[i] += force[i] / mass * deltaT;
	}
	time += deltaT;
}
