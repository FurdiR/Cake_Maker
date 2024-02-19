#ifndef INGREDIENTS_H

#define INGREDIENTS_H

#include<string>
#include<list>

using namespace std;

class Ingredients
{
public:
	void addIngredients(const string &nume,double kg);
	void displayIngredients();
	Ingredients(const string &nume,double kg);
	Ingredients();
	string getName();
	double getKg();
	

private:
	string nume;
	double kg;
	std::list<std::pair<std::string, double>> ingredients;
	//Ingredients(const string& nume);
	//void addIngredient(const Ingredients& ingredient);
};

#endif INGREDIENTS_H