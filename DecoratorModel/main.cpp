#include "CcDecoratorModel.h"


int main(int argc, char* argv[])
{
	Tank* ptank = new T90();

	Decorator* decorator = new Decorator();
	decorator->decorator(ptank);

	BigShot* bigshot = new BigShot();
	bigshot->decorator(decorator);
	
	SilentShot* silentshot = new SilentShot();
	silentshot->decorator(bigshot);
	silentshot->shot();

	delete silentshot;
	delete bigshot;
	delete decorator;
	delete ptank;

	return 0;
}