#include "Ingredients.h"
#include<list>
#include <iostream>
#include<string>

using namespace std;

Ingredients::Ingredients() {}//:nume("") 
Ingredients::Ingredients(const string& nume,double kg) :nume(nume),kg(kg) {}
list<Ingredients*>ingredients;


string Ingredients::getName()
{
    return nume;
}

double Ingredients::getKg()
{
    return kg;
}

void Ingredients::addIngredients(const string& nume,double kg) {

    
    Ingredients* newIngredient = new Ingredients(nume,kg);
    ingredients.push_back(make_pair(nume, kg));
 
    cout << "The name of ingredient is: " << nume << endl;
    cout << "Kilograms of ingredient: " << kg << endl;
    cout << "Ingredient added.\n";

};
void Ingredients::displayIngredients()
{
    cout << "The ingredients are: "<<nume<<endl;
    for (auto ingredientele : ingredients)
    {
        cout << "Ingredient name: " << ingredientele.first << " ";
        cout << "Ingredient kilos: " << ingredientele.second << endl;
    }

}


