#pragma once
#include "Store.h"
class King:public Store
{
private:
	std::map<std::string, int>K_menu;
public:
	King(std::string nam, std::string loc);
	void K_addItem(std::string item, int quant);
	void K_receipt();
};
void K_face();