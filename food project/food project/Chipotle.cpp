#include "Chipotle.h"
Chipotle::Chipotle(std::string nam, std::string loc) :Store(name, location) {//sets all items in a dictionary to 0
	C_menu["Quesadilla"] = 0;
	C_menu["Nacho"] = 0;
	C_menu["Burrito"] = 0;
	C_menu["Drink"] = 0;
}

void Chipotle::C_addItem(std::string item, int quant) {
	int more;
	if (item == "Quesadilla") {
		more = C_menu["Quesadilla"] + quant;
		C_menu["Quesadilla"] = more;
	}
	else if (item == "Nacho") {
		more = C_menu["Nacho"] + quant;
		C_menu["Nacho"] = more;
	}
	else if (item == "Burrito") {
		more = C_menu["Burrito"] + quant;
		C_menu["Burrito"] = more;
	}
	else if (item == "Drink") {
		more = C_menu["Drink"] + quant;
		C_menu["Drink"] = more;
	}
	else { std::cout << "ITEM DOESNT EXIST" << std::endl; }
}

void Chipotle::C_receipt() {
	double total;
	for (auto i : C_menu)
	{
		if (i.second > 0)
		{
			std::cout << i.first << ": " << i.second << std::endl;
		}
	}
	std::cout << "YOUR TOTAL IS:";
	total = (C_menu["Quesadilla"] * 5.25) + (C_menu["Nacho"] * 3.75) + (C_menu["Burrito"] * 6.25) + (C_menu["Drink"] * 1.00);
	std::cout << total;
}

void C_face() {
	std::string select;
	int quant;
	Chipotle Chipotle("Chipotle", "Main");

	std::cout << "1) Quesadilla" << std::endl << "2) Nacho" << std::endl << "3) Burrito" << std::endl << "4) Drink" << std::endl;
	while (select != "N") {
		std::cout << "Enter a choice (Press 'N' to escape)" << std::endl;
		std::cin >> select;
		if (select == "1") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Quesadilla";
			Chipotle.C_addItem(item, quant);
		}
		else if (select == "2") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Nacho";
			Chipotle.C_addItem(item, quant);
		}
		else if (select == "3") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Burrito";
			Chipotle.C_addItem(item, quant);

		}
		else if (select == "4") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Drink";
			Chipotle.C_addItem(item, quant);
		}
		else if (select == "N") { break; }
		else { std::cout << "Enter a Valid selection" << std::endl; }
	}
	Chipotle.C_receipt();
}