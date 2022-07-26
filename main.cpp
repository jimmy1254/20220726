#include <iostream>
#include "World.h"
#include "Player.h"
#include "Monster.h"
#include <list>
#include <vector>
#include <stack>

int main()
{
	World* MyWorld = new World();

	MyWorld->SpawnActor(new Player());
	MyWorld->SpawnActor(new Monster());

	//range for
	for (Actor* MyActor : MyWorld->ActorList)
	{
		MyActor->Render();
	}
	
	/*for (int i = 0; i < MyWorld->ActorList.size(); ++i)
	{
		MyWorld->ActorList[i]->Render();
	}*/



	delete MyWorld;

	return 0;
}