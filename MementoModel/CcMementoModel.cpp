#include <iostream>
#include "CcMementoModel.h"


Memento::Memento(int vitality, int attack, int defense)
	: m_vitality(vitality), m_attack(attack), m_defense(defense)
{
	//
}

Memento::~Memento()
{
	//
}

Memento& Memento::operator=(const Memento& memento)
{
	m_vitality = memento.m_vitality;
	m_attack = memento.m_attack;
	m_defense = memento.m_defense;

	return *this;
}

GameRole::GameRole()
	: m_vitality(100), m_attack(100), m_defense(100)
{
	//
}

GameRole::~GameRole()
{
	//
}

Memento GameRole::save()
{
	return Memento(m_vitality, m_attack, m_defense);
}

void GameRole::load(Memento memento)
{
	m_vitality = memento.m_vitality;
	m_attack = memento.m_attack;
	m_defense = memento.m_defense;
}

void GameRole::show()
{
	std::cout << m_vitality << std::endl
		<< m_attack << std::endl
		<< m_defense << std::endl;
}

void GameRole::attack()
{
	m_vitality -= 10;
	m_attack -= 10;
	m_defense -= 10;
}



Caretake::Caretake()
{
}

Caretake::~Caretake()
{
}

void Caretake::save(Memento memento)
{
	m_vecMemento.push_back(memento);
}

Memento Caretake::load(int state)
{
	return m_vecMemento[state];
}



