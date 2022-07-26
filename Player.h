#pragma once
#include "Actor.h"


class Player : public Actor
{
public:
	Player() 
	{
		Shape = 'P';
	}
	virtual ~Player() {}
	
};
