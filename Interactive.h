#pragma once
/*
Naszir Merritt 
* 
* Header File for function prototypes
* 

*/





#include <string>

using namespace std;

// CLASS
class Character
{
public:
	string Status = "Lost";




};


class Human : public Character
{
public:
	int* pHealth = &Health;
	string* pName = &Name;

private:
	int Health = 100;
	string Name = "Human";
};



class Halfling : public Character
{
public:
	int* pHealth = &Health;
	string* pName = &Name;


private:
	int Health = 75;
	string Name = "Halfling";
};


class Orc : public Character
{
public:
	int* pHealth = &Health;
	string* pName = &Name;

private:
	int Health = 150;
	string Name = "Orc";
};


void ToBeContinued(int percentage = 30);

void PlayerRules();

void Stats();

void PlayerHellpResponse(string prompt);

void CreatorResponse(string prompt);

void DogResponse(string prompt, string var);

void Beginning();

void PartOne();

void CharacterSelect(); 

int HellpAttack();

int RandomSix(int var);

int RandomFate(int var);

string YesNoDecision(string prompt);

void InventoryList(string Inventory[13]);


