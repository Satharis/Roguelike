#pragma once

#include <memory>
#include <string>

#include <libtcod.hpp>

struct Item
{
	std::string name;
	char character;
	TCODColor color;
};

typedef std::unique_ptr<Item[]> Itemset;

