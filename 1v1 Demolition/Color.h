
#pragma once

struct Color
{
	float r, g, b, a;
	
	Color() : r(0.0f), g(0.0f), b(0.0f), a(1.0f)
	{}

	Color(float r, float g, float b, float a = 1.0f) : r(r), g(g), b(b), a(a)
	{}

	void Set(float r, float g, float b, float a = 1.0f)
	{
		this->r = r;
		this->g = g;
		this->b = b;
		this->a = a;
	}

	float* operator & ()
	{
		return (float*)this;
	}

	bool operator ==(const Color& v) const
	{
		return (r == v.r && g == v.g && b == v.b);
	}
};

extern Color Red; 
extern Color Green;
extern Color Blue;
extern Color Black;
extern Color White;
extern Color Brown;
extern Color Yellow;
extern Color Pink;
extern Color LightPink;
extern Color Violet;
extern Color LightPurple;
extern Color Purple;
extern Color PurePurple;
extern Color Orange;
extern Color Cyan;
extern Color LightBlue;
extern Color Magenta;
extern Color Grey;