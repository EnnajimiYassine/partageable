
#include "..\interfaces\Composant4.h"
#include "Composant4Version.h"
#include <string>

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant1(int p1, int p2)
{

	return composant1(p1, p2);
}



char * getComposant1Version()
{
	char * str = getComposant1Version();
	char * str2 = " Composant 4 version "  COMPOSANT4_VERSION_STR;
	char * version = (char*)malloc(strlen(str) + strlen(str2));
	strcpy(version, str);
	strcat(version, str2);
	return version;
}
