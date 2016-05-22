#define _USE_MATH_DEFINES
#include <cmath>
#include "circle.hpp"
#include "color.hpp"

//#include "mat2.hpp"
	Circle::Circle()	:
	x_{0.0},y_{0.0}, r_{1.0}, color_{0.0}{}
	Circle::Circle(float x,float y, float r) :
	x_{x},y_{y}, r_{r}, color_{0.0}{}
	Circle::Circle(float x,float y, float r, Color const& c) :
	x_{x},y_{y}, r_{r}, color_{c}{}

	Circle::Circle(float r) :
	x_{0.0},y_{0.0}, r_{r}, color_{0.0}{} 

/*	void Circle::draw(Window const& win)
	{
		Vec2 v(x_,y_);
		Vec2 v1(x_,y_+r_);
		win.drawLine(v.x,v.y,v1.x,v1.y,color_.r, color_.g, color_.b);
		Mat2 m1=make_rotation_mat2(2*M_PI/360);
		Vec2 v2=v1*m1;
		win.drawLine(v.x,v.y,v2.x,v2.y,color_.r, color_.g, color_.b);
		for (int i = 2; i < 362; ++i)
			{
				win.drawLine(v1.x, v1.y, v2.x, v2.y, color_.r, color_.g, color_.b);
		//		win.drawLine(v.x, v.y, v2.x, v2.y, color_.r, color_.g, color_.b);
				v1=v2;
				v2=v2*m1;

			}

		/*Point2d p1(mid_.x(), mid_.y()+r_);
		Point2d p2(mid_.x(), mid_.y()+r_);
		p2.translate(mid_.x()*r_*cos(1), mid_.y()*r_*sin(1));

			for (int i = 2; i < 360; ++i)
			{	
			win.drawLine(p1.x(), p1.y(),p2.x(),p2.y(),color_.r, color_.g, color_.b);
			p2.rotate(2*M_PI/steps);
			p1.rotate(2*M_PI/steps);*/

			

			/*p1.translate(mid_.x()*r_*cos(i), mid_.y()*r_*sin(i));
			p2.translate(mid_.x()*r_*cos(i), mid_.y()*r_*sin(i));
			}


	}*/
	float Circle::x()const
	{
		return x_;
	}
	float Circle::y()const
	{
		return y_;
	}
	float Circle::r()const
	{
		return r_;
	}
	double Circle::Circumference()const
	{
		return 2*M_PI*r_;
	}