#include "CcMementoModel.h"

int main(int argc, char* argv[])
{
	Caretake caretake;
	GameRole role;
	role.show();
	caretake.save(role.save());

	role.attack();
	role.show();

	role.load(caretake.load(0));
	role.show();

	return 0;
}