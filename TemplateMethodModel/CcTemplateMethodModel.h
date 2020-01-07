#pragma once

class Abstract
{
public:
	Abstract();
	~Abstract();

	void templateMethod();

protected:
	virtual void primitiveOperation1() = 0;

	virtual void primitiveOperation2() = 0;

private:

};


class ConcreteA : public Abstract
{
public: 
	ConcreteA();
	~ConcreteA();

protected:
	void primitiveOperation1();

	void primitiveOperation2();

private:

};

class ConcreteB : public Abstract
{
public:
	ConcreteB();
	~ConcreteB();

protected:
	void primitiveOperation1();

	void primitiveOperation2();

private:


};


