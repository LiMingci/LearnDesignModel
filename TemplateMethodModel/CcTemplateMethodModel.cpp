#include <iostream>
#include "CcTemplateMethodModel.h"

Abstract::Abstract()
{
	//
}

Abstract::~Abstract()
{
	//
}

void Abstract::templateMethod()
{
	primitiveOperation1();
	primitiveOperation2();
	std::cout << "done!" << std::endl;
}

ConcreteA::ConcreteA()
{
	//
}

ConcreteA::~ConcreteA()
{
	//
}

void ConcreteA::primitiveOperation1()
{
	std::cout << "run A opt1" << std::endl;
}

void ConcreteA::primitiveOperation2()
{
	std::cout << "run A opt2" << std::endl;
}

ConcreteB::ConcreteB()
{
	//
}

ConcreteB::~ConcreteB()
{
	//
}

void ConcreteB::primitiveOperation1()
{
	std::cout << "run B opt1" << std::endl;
}

void ConcreteB::primitiveOperation2()
{
	std::cout << "run B opt2" << std::endl;
}