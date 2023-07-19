#include "King.h"
King::King(std::string nam, std::string loc) :Store(name, location) {//sets all items in a dictionary to 0
	K_menu["Wopper"] = 0;
	K_menu["Fries"] = 0;
	K_menu["Drink"] = 0;
	K_menu["Meal"] = 0;
}

void King::K_addItem(std::string item, int quant) {
	int more;
	if (item=="Wopper"){
		more = K_menu["Wopper"] + quant;
		K_menu["Wopper"] = more;
	}
	else if (item == "Fries") {
		more = K_menu["Fries"] + quant;
		K_menu["Fries"] = more;
	}
	else if (item == "Drink") {
		more = K_menu["Drink"] + quant;
		K_menu["Drink"] = more;
	}
	else if (item == "Meal") {
		more = K_menu["Meal"] + quant;
		K_menu["Meal"] = more;
	}
	else{ std::cout << "ITEM DOESNT EXIST" << std::endl;}
}

void King::K_receipt() {
	double total;
	for (auto i : K_menu)
	{
		if (i.second>0)
		{
			std::cout << i.first << ": " << i.second << std::endl;
		}
	}
	std::cout << "YOUR TOTAL IS:";
	total = (K_menu["Wopper"] * 6.25) + (K_menu["Fries"] * 3.75) + (K_menu["Drink"] * 2.25) + (K_menu["Meal"] * 8.50);
	std::cout << total;
}

void K_face() {

	std::string select;
	int quant;
	King King("Burger King", "Troost");

	std::cout << "1) Wopper" << std::endl << "2) Fries" << std::endl << "3) Drink" << std::endl << "4) Meal (includes Fries and a drink)" << std::endl;
	while (select != "N") {
		std::cout << "Enter a choice (Press 'N' to escape)" << std::endl;
		std::cin >> select;
		if (select == "1") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Wopper";
			King.K_addItem(item, quant);
		}
		else if (select == "2") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Fries";
			King.K_addItem(item, quant);
		}
		else if (select == "3") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Drink";
			King.K_addItem(item, quant);

		}
		else if (select == "4") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Meal";
			King.K_addItem(item, quant);
		}
		else if (select == "N") { break; }
		else { std::cout << "Enter a Valid selection" << std::endl; }
	}
	King.K_receipt();
}