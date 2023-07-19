#include "Qudoba.h"
Qudoba::Qudoba(std::string nam, std::string loc) :Store(name, location) {//sets all items in a dictionary to 0
	Q_menu["Quesadilla"] = 0;
	Q_menu["Nacho"] = 0;
	Q_menu["Burrito"] = 0;
	Q_menu["Drink"] = 0;
}

void Qudoba::Q_addItem(std::string item, int quant) {
	int more;
	if (item == "Quesadilla") {
		more = Q_menu["Quesadilla"] + quant;
		Q_menu["Quesadilla"] = more;
	}
	else if (item == "Nacho") {
		more = Q_menu["Nacho"] + quant;
		Q_menu["Nacho"] = more;
	}
	else if (item == "Burrito") {
		more = Q_menu["Burrito"] + quant;
		Q_menu["Burrito"] = more;
	}
	else if (item == "Drink") {
		more = Q_menu["Drink"] + quant;
		Q_menu["Drink"] = more;
	}
	else { std::cout << "ITEM DOESNT EXIST" << std::endl; }
}

void Qudoba::Q_receipt() {
	double total;
	for (auto i : Q_menu)
	{
		if (i.second > 0)
		{
			std::cout << i.first << ": " << i.second << std::endl;
		}
	}
	std::cout << "YOUR TOTAL IS:";
	total = (Q_menu["Quesadilla"] * 3.75) + (Q_menu["Nacho"] * 2.75) + (Q_menu["Burrito"] * 5.25) + (Q_menu["Drink"] * .75);
	std::cout << total;
}

void Q_face() {
	std::string select;
	int quant;
	Qudoba Qudoba("Qudoba", "Main");

	std::cout << "1) Quesadilla" << std::endl << "2) Nacho" << std::endl << "3) Burrito" << std::endl << "4) Drink" << std::endl;
	while (select != "N") {
		std::cout << "Enter a choice (Press 'N' to escape)" << std::endl;
		std::cin >> select;
		if (select == "1") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Quesadilla";
			Qudoba.Q_addItem(item, quant);
		}
		else if (select == "2") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Nacho";
			Qudoba.Q_addItem(item, quant);
		}
		else if (select == "3") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Burrito";
			Qudoba.Q_addItem(item, quant);

		}
		else if (select == "4") {
			std::cout << "HOW MANY: ";
			std::cin >> quant;
			std::string item = "Drink";
			Qudoba.Q_addItem(item, quant);
		}
		else if (select == "N") { break; }
		else { std::cout << "Enter a Valid selection" << std::endl; }
	}
	Qudoba.Q_receipt();
}