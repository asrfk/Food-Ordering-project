#pragma once
#include <string>
#include <iostream>
#include <map>
#include <cstdio>


class Store
{
protected:
	std::string name, location;
public:
	Store(std::string nam,std::string loc);
	std::string setStore();
	std::string setLoc();
	std::string toString();

};

