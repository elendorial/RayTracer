#include "SingleSphere.h"
#include "World.h"
#include "ShadeRec.h"

SingleSphere::SingleSphere(void)
:	Tracer()
{}

SingleSphere::SingleSphere(World* _worldPtr)
:	Tracer(_worldPtr)
{}

SingleSphere::~SingleSphere(void)
{}

RGBColor SingleSphere::trace_ray(const Ray& ray) const {
	ShadeRec sr(*world_ptr);
	double t;

	if(world_ptr -> sphere.hit(ray, t, sr))
		return (red);
	else
		return (black);
}