#ifndef CAKEMAKER_H
#define CAKEMAKER_H

#include "Ingredients.h"
#include<string>
#include<list>

using namespace std;

class CakeMaker
{
public:
	void runCakeMaker();
	int storageCake=0;
 
private:
	void insertCake();
	void ShowListCake();
	void DeleteCake();
	//int storageCake;
	list<Ingredients*>ingredient;
	std::list<std::pair<std::string, int>> cakes;

	
};





#endif CAKEMAKER_H