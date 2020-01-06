#include <iostream>
#include "CcCommandModel.h"

int main()
{
	Invoker* invoker = new Invoker();

	Receiver* receiver = new Receiver();

	CommandA* cmdA = new CommandA(receiver);
	CommandB* cmdB = new CommandB(receiver);

	std::cout << "add command" << std::endl;
	invoker->add(cmdA);
	invoker->add(cmdB);
	invoker->submitCmd();

	std::cout << "remove command" << std::endl;
	invoker->remove(cmdA);
	invoker->submitCmd();

	delete cmdA;
	delete cmdB;
	delete invoker; 
	delete receiver;

	return 0;
}