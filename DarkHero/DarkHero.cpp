// DarkHero.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <thread>
//#include <iostream>

using namespace std;

class Hero
{
public:
	string name;

	Hero() {};
	~Hero() {};
};

void test1()
{
	Hero* hero = new Hero();

	cout << "Enter name of hero: ";
	cin >> hero->name;

	cout << hero->name << endl;

	cout << "Address: " << hero << "\n";

	cout << "sleeping...";
	this_thread::sleep_for(chrono::seconds(1));
	cout << "done sleeping!" << endl;

	cout << "Address: " << hero << "\n";

	cout << "size: " << sizeof(hero) << endl;

	//hero->~Hero();
	delete hero;

	cout << "size: " << sizeof(*hero) << endl;

	cout << "Address: " << hero << "\n";

	hero->name = "Hej Dersens";

	cout << "Name: " << hero->name << endl;

	cout << "Ending test" << endl;
}

void test2()
{
	Hero* p1;
	Hero h2;
	{
		Hero h1 = *(new Hero());
		h1.name = "hejsa";
		h2 = h1;
		p1 = &h1;
		cout << p1->name << endl;
		cout << p1 << endl;
		cout << h2.name << endl;
	}

	cout << p1->name << endl;
	cout << p1 << endl;
	cout << h2.name << endl;

}

int _tmain(int argc, _TCHAR* argv[])
{
	test1();
	//test2();
	return 0;
}

