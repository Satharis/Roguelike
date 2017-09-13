#pragma once

#include <memory>

#include <libtcod.hpp>

struct Tile
{
	char character;
	TCODColor color;
	TCODColor bgColor;
	bool passable;
};

typedef std::unique_ptr<Tile[]> Tileset;