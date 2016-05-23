# ifndef CIRCLE_HPP
# define CIRCLE_HPP

#include "color.hpp"
#include "window.hpp"
//#include "mat2.hpp"
//#include "vec2.hpp"
#include <cmath>

class Circle
{
public:
	Circle();
	Circle(float x,float y, float r);
	Circle(float x,float y, float r,Color const& c);

	Circle(float r);	
//	void draw (Window const&);
	float x()const;
	float y()const;
	float r()const;
	double Circumference()const;
private:
	float x_;
	float y_;
	Color color_;
	double r_;

};

#endif