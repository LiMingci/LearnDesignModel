#pragma once
#include <iostream>

class Tank
{
public:
	virtual void shot();
};

class T90 : public Tank
{
public:
	void shot();

};

class Decorator : public Tank
{
public:
	void decorator(Tank* tank);

	void shot();

protected:
	Tank* tank;
};


class BigShot : public Decorator
{
public:
	void shot();
};

class SilentShot : public Decorator
{
public:
	void shot();
};
