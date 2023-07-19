#pragma once
#include "Store.h"

class McDonalds :public Store
{
protected:
	std::map<std::string, int>M_menu;
public:
	McDonalds(std::string nam, std::string loc);
	void Mc_addItem(std::string item, int quant);
	void Mc_receipt();
};

void M_face();