
#include "Composant1.h"
#include "Composant1Version.h"
#include <string>

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant1(int p1, int p2)
{
	
	return addition(p1,p2);
}

int addition_interne(int a1, int a2)
{
	return a1+a2;
}

char * getComposant1Version()
{
	char * str = getComposant3Version();
	char * str2 = " Composant 1 version "  COMPOSANT_VERSION_STR;
	char * version = (char*)malloc(strlen(str)+strlen(str2));
	strcpy(version, str);
	strcpy(version, str2);
	return version ;
}
