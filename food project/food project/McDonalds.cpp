#include "McDonalds.h"

McDonalds::McDonalds(std::string nam,std::string loc):Store(name,location){//sets all items in a dictionary to 0
	M_menu["Big Mac"] = 0;
	M_menu["Fries"] = 0;
	M_menu["Drink"] = 0;
	M_menu["Meal"] = 0;
}
void McDonalds::Mc_addItem(std::string item, int quant) {//takes item and quantity and tabulates the amount for each item
	int more;
	if (item == "Big Mac") {
		more = M_menu["Big Mac"] + quant;
		M_menu["Big Mac"] = more;
	}
	else if (item == "Fries") {
		more = M_menu["Fries"] + quant;
		M_menu["Fries"] = more;
	}
	else if (item == "Drink") {
		more = M_menu["Drink"] + quant;
		M_menu["Drink"] = more;
	}
	else if (item == "Meal") {
		more = M_menu["Meal"] + quant;
		M_menu["Meal"] = more;
	}
	else
	{
		std::cout << "ITEM DOESNT EXIST" << std::endl;
	}
}
void McDonalds:: Mc_receipt(){
	double total;
	for (auto i : M_menu)
	{
		if (i.second > 0)
		{
			std::cout << i.first << ": " << i.second << std::endl;
		}
	}
	std::cout << "YOUR TOTAL IS:";
	total = (M_menu["Big Mac"] * 5.00) + (M_menu["Fries"] * 3.00) + (M_menu["Drink"] * 2.00) + (M_menu["Meal"] * 9.00);
	std::cout << total;
}

void M_face() {
	
	std::string select;
	int quant;
	McDonalds McDonalds("McDonalds", "Troost");
	
	std::cout << "1) Big Mac" << std::endl << "2) Fries" << std::endl << "3) Drink" << std::endl << "4) Meal (includes Fries and a drink)" << std::endl;
	while (select != "N") {
		std::cout << "Enter a choice (Press 'N' to escape)" << std::endl;
		std::cin >> select;
		if (select == "1") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std:: string item = "Big Mac";
			McDonalds.Mc_addItem(item,quant);
		}
		else if (select == "2") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Fries";
			McDonalds.Mc_addItem(item, quant);
		}
		else if (select == "3") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Drink";
			McDonalds.Mc_addItem(item, quant);

		}
		else if (select == "4") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Meal";
			McDonalds.Mc_addItem(item, quant);
		}
		else if (select == "N") { break; }
		else {std::cout << "Enter a Valid selection" << std::endl;}
	}
	McDonalds.Mc_receipt();
}