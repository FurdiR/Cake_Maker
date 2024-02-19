#include "Menu.h"
#include <iostream>
using namespace std;

void Menu::showMenu()
{
	cout << "*****Welcome to Cake World!******" << endl;
	cout << "\n";
	cout << "Those are the cakes available: " << endl;
	cout << "1. Ginger cake" << endl;
	cout << "2.Carrot cake" << endl;
	cout << "3.Chocolate cake" << endl;
	cout << "4.Vanilla cake" << endl;
	cout << "5.Blue cake" << endl;
	cout << "$$$$$ This is the menu: $$$$$" << endl;
	cout << "1.Insert cake " << endl;
	cout << "2.Delete cake" << endl;
	cout << "3.Show the cakes you inserted" << endl;
	cout << "4.Show the ingredients: " << endl; // aici mai punem niste ingrediente sau remove them
	cout << "5.Show the cakes with sugar and cakes without sugar " << endl;
	cout << "6.Ask for a cake" << endl;
	cout << "7.Ask for all cake's prices" << endl;
	cout << "Press 0 for exit the menu" << endl;
	cout << "Choose an option: ";
}


void Menu::menuCakes()
{
	cout << "*****Welcome to Cake World!******" << endl;
	cout << "\n";
	cout << "Those are the cakes available: " << endl;
	cout << "1. Ginger cake" << endl;
	cout << "2.Carrot cake" << endl;
	cout << "3.Chocolate cake" << endl;
	cout << "4.Vanilla cake" << endl;
	cout << "5.Blue cake" << endl;
	cout << "Choose what cake would you prefer: ";
}

void Menu::showMeTheMoney()
{
	cout << "*****1. Ginger cake......20 lei******" << endl;
	cout << "*****2.Carrot cake....100 lei*****" << endl;
	cout << "*****3.Chocolate cake....5 lei****" << endl;
	cout << "*****4.Vanilla cake......200 lei****" << endl;
	cout << "****5.Blue cake.....120 lei*****" << endl;
}

void Menu::showIfSugar()
{
	int z;
	cout << "If you want a cake with sugar: " << endl << "Press 1.Yes or 2.No" << endl;
	cin >> z;
	if(z == 1)
	{
		cout << "Those are the cakes with sugar"<<endl;
		cout << " * ****1. Ginger cake******" << endl;
			cout << "*****2.Carrot cake*****" << endl; 
	}
	else
	{
		cout << "Those are the cakes without sugar" << endl;

		cout << "*****3.Chocolate cake****" << endl;
		cout << "*****4.Vanilla cake****" << endl;
		cout << "****5.Blue cake*****" << endl;
	}
	
}