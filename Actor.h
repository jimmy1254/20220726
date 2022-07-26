#pragma once
#include "Vector2D.h"


//abstract class
class Actor
{
public:
	Actor() : Shape(' ') 
	{
	}
	virtual ~Actor() {}

	//has a
	Vector2D Location;

	char Shape;

	//interface 강제
	//pual virtual function
	//virtual void Render() = 0; 자식이 정의를 해야한다
	virtual void Render();

};

