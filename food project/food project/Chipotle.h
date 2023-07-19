#pragma once
#include "Store.h"
class Chipotle:public Store
{
private:
	std::map<std::string, int>C_menu;
public:
	Chipotle(std::string nam, std::string loc);
	void C_addItem(std::string item, int quant);
	void C_receipt();
};

void C_face();