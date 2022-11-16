#include <rigidBody.H>
#include <modelProperty.H>

int main(){
	double	pos[3], vel[3];
	for( int i=0; i<3; i++ ){
		pos[i] = 0.0;	vel[i] = 0.0;
	}
	modelProperty	body( "fish", 0.1, pos, vel );
	double		force[3];

	// initial data
	for( int i=0; i<3; i++ ){
		body.pos[i] = body.initial_pos[i];
		body.vel[i] = body.initial_vel[i];
	}
	body.time = 0.0;
	body.deltaT = 0.001;

	force[0] = 1.0;	force[1] = 0.0;	force[2] = 0.0;

	// integration
	for( int i=0; i<10; i++ ){
		body.EulerMethod( force, body.mass );
		body.infomation();
	}

	return 0;
}