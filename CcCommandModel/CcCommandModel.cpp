#include <iostream>
#include <algorithm>

#include "CcCommandModel.h"

Receiver::Receiver()
{
	//
}

Receiver::~Receiver()
{
	//
}

void Receiver::doA()
{
	std::cout << "do A" << std::endl;
}

void Receiver::doB()
{
	std::cout << "do B" << std::endl;
}

Command::Command(Receiver* receiver)
{
	m_recevier = receiver;
}

Command::~Command()
{
	//m_receiverÔÚÍâÊÍ·Å
}

CommandA::CommandA(Receiver* recevier)
	: Command(recevier)
{
	//
}

CommandA::~CommandA()
{
	//
}

void CommandA::exeCmd()
{
	if (m_recevier == nullptr)
		return;

	m_recevier->doA();
}

CommandB::CommandB(Receiver* recevier)
	: Command(recevier)
{
	//
}

CommandB::~CommandB()
{
	//
}

void CommandB::exeCmd()
{
	if (m_recevier == nullptr)
		return;

	m_recevier->doB();
}

Invoker::Invoker()
{
	//
}

Invoker::~Invoker()
{
	m_commandList.clear();
}

void Invoker::add(Command* cmd)
{
	m_commandList.push_back(cmd);
}

void Invoker::remove(Command* cmd)
{
	auto iter = std::find(m_commandList.begin(), m_commandList.end(), cmd);

	if (iter != m_commandList.end())
	{
		m_commandList.erase(iter);
	}
}

void Invoker::submitCmd()
{
	for (auto iter = m_commandList.begin(); iter != m_commandList.end(); iter++)
	{
		if (*iter)
			(*iter)->exeCmd();
	}
}