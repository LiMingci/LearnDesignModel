#pragma once
#include <list>

class Receiver
{
public:
	Receiver();
	~Receiver();

	void doA();

	void doB();

private:

};

class Command
{
public:
	Command(Receiver* recevier);
	~Command();

	virtual void exeCmd() = 0;

protected:
	Receiver* m_recevier;

};

class CommandA : public Command
{
public:
	CommandA(Receiver* recevier);
	~CommandA();

	void exeCmd();

private:

};


class CommandB : public Command
{
public:
	CommandB(Receiver* recevier);
	~CommandB();

	void exeCmd();
private:

};


class Invoker
{
public: 
	Invoker();
	~Invoker();

	void add(Command* cmd);

	void remove(Command* cmd);

	void submitCmd();

private:
	std::list<Command*>   m_commandList;

};