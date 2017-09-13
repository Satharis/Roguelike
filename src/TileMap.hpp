#pragma once

#include <memory>

#include "Tile.hpp"

class TileMap
{
public:
	TileMap();
	~TileMap();

	// Returns the id of the tile located at the specified coordinates.
	int GetTile(int x, int y) const;

	// Returns the width of the tile map in tiles.
	int GetWidth() const;

	// Returns the height of the tile map in tiles.
	int GetHeight() const;

	// Initializes tile map with data from an array.
	void LoadFromArray(int* sourceArray, int width, int height);

	// Draw all terrain tiles to the main window.
	void Draw(const Tileset& tileSet) const;

private:
	int m_width;
	int m_height;
	std::unique_ptr<int[]> m_mapGrid;
};