#pragma once
#include "Store.h"
class Qudoba:public Store
{
private:
	std::map<std::string, int>Q_menu;
public:
	Qudoba(std::string nam, std::string loc);
	void Q_addItem(std::string item, int quant);
	void Q_receipt();
};

void Q_face();