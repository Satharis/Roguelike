#pragma once

struct Item;

class ItemMap
{
public:
	ItemMap();
	~ItemMap();

	// Returns the id of the tile located at the specified coordinates.
	int GetItem(int x, int y);

	// Returns the width of the item map in tiles.
	int GetWidth();

	// Returns the height of the item map in tiles.
	int GetHeight();

	// Initializes item map with data from an array.
	void LoadFromArray(int* sourceArray, int width, int height);

	// Draw all items to the main window.
	void Draw(Item* itemSet);

private:
	int m_width;
	int m_height;
	int* m_mapGrid;
};
