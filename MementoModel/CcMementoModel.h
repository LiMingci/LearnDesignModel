#pragma once
#include <vector>

class Memento
{
public:
	Memento(int vitality, int attack, int defense);
	~Memento();

	Memento& operator=(const Memento& memento);

public:
	int m_vitality;
	int m_attack;
	int m_defense;

};


class GameRole
{
public:
	GameRole();
	~GameRole();

	Memento save();

	void load(Memento memento);

	void show();

	void attack();

private:
	int m_vitality;
	int m_attack;
	int m_defense;

};

class Caretake
{
public:
	Caretake();
	~Caretake();

	void save(Memento memento);

	Memento load(int state);

private:
	std::vector<Memento> m_vecMemento;

};
