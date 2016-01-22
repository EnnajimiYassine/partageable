#include "..\interfaces\Composant3.h"
#include "Composant3Version.h"
int Composant3(int a , int b)
{
	return addition( a, b);
}


int addition(int a , int b )
{
	return a+b;
}

char * getComposant3Version()
{
	return "Composant 3 version " COMPOSANT3_VERSION_STR;
}