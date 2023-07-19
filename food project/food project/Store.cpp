#include "Store.h"
Store::Store(std::string nam, std::string loc) {
	this->name = nam;
	this->location = loc ;
}
std::string Store::setStore() {
	return name;
}
std::string Store::setLoc() {
	return location;
}
std::string Store::toString() {
	return "You Placed and order from:\n" + name + "\n" + location;
}

