#include "CakeMaker.h"
#include "Menu.h"
#include "Ingredients.h"
#include<iostream>
#include <string>

using namespace std;

void CakeMaker::runCakeMaker()
{

	Menu meniu;
	CakeMaker cakes;
	Ingredients ingrediente;

	
	
	int optiune;
	do
	{
		meniu.showMenu();
		cin >> optiune;
		switch (optiune)
		{
		
		case 0: exit(0);
			break;
		case 1: cout << endl;
			insertCake();
			cout <<"You inserted " << storageCake <<" cakes" << endl;
			break;
		case 2: cakes.DeleteCake(); //delete from list 
		break;
		case 3: cout << endl;
			ingrediente.addIngredients("Soda", 0.1);
			ingrediente.addIngredients("Lemon", 0.42);
			ingrediente.addIngredients("Flour", 1);
			ingrediente.displayIngredients();
			
			break;
		case 4: cakes.ShowListCake(); //this list is the list u inserted
			break;
		case 5:cout << endl;
			meniu.showIfSugar(); //1 for cakes that containts sugar 2 for cakes sugarless
			break;
		case 6: meniu.menuCakes();
			break;
		case 7: meniu.showMeTheMoney();
			break;
		default: cout << "Optiune invalida!";
			break;
		}

	} while (optiune!=10);

}



void CakeMaker::insertCake()
{
	string nume;
	int gramaj;
	cout << "Insert a name for the cake" << endl;
	cin >> nume;
	cout << "Insert the heavy of the cake" << endl;
	cin >> gramaj;
	
	CakeMaker* prajituri = new CakeMaker;
	//cakes.push_back(make_pair(nume,gramaj));
	cakes.push_back(make_pair(nume, gramaj));
	cout << "Cake is added" << endl;
	storageCake++;
	
	
	
}

void CakeMaker::DeleteCake()
{
	string cakeToDelete;
	cout << "Enter the name of the cake you want to delete: ";
	cin >> cakeToDelete;

	auto it = find_if(cakes.begin(), cakes.end(), [&](const pair<string, int>& prajitura) {
		return prajitura.first == cakeToDelete;
	});

	if (it != cakes.end())
	{
		cakes.erase(it);
		cout << "Cake deleted";
	}
	else
	{
		cout << "Cake not found";
	}
}


void CakeMaker::ShowListCake()
{
	for (auto prajituri : cakes)
	{
		cout<<"Cake's name: "<<prajituri.first<<endl;
		cout << "Cake's grams: " << prajituri.second << endl;
	}
}