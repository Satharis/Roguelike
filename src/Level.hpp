#pragma once

#include "ItemMap.hpp"
#include "TileMap.hpp"

// Level is a simple struct that wraps the contents of a single game map floor.
struct Level
{
	//ItemMap items;
	TileMap terrain;
};