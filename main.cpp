//Author: Daniel Olaes & Ivan Ma
//Description: Hello World in C++
//====================================================
//main

#include <iostream>
#include <string>
using namespace std;

int hello1Function(string name1);
int hello2Function(string name2);

int main()
{
	string name1 = "Daniel Olaes";
	hello1Function(name1);

	string name2 = "Ivan Ma";
	hello2Function(name2);
	return 0;
}
