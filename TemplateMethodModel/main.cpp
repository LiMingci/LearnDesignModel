#include "CcTemplateMethodModel.h"

int main(int argc, char* argv[])
{
	ConcreteA algA;
	algA.templateMethod();

	ConcreteB algB;
	algB.templateMethod();

	return 0;
}