#include "CcDecoratorModel.h"

void Tank::shot()
{
	std::cout << "shot" << std::endl;
}

void T90::shot()
{
	std::cout << "T90 shot" << std::endl;
}

void Decorator::decorator(Tank* tank)
{
	this->tank = tank;
}

void Decorator::shot()
{
	if (tank == nullptr)
		return;
	tank->shot();
}

void BigShot::shot()
{
	std::cout << "big shot" << std::endl;
	tank->shot();
}

void SilentShot::shot()
{
	std::cout << "silent shot" << std::endl;
	tank->shot();
}


