#include "TileMap.hpp"

#include <cassert>

#include <libtcod.hpp>

TileMap::TileMap() : m_width(0), m_height(0)
{

}

TileMap::~TileMap()
{

}

int TileMap::GetTile(int x, int y) const
{
	assert(x >= 0 && x < m_width && y >= 0 && y < m_height);

	int cellNumber = y * m_width + x;
	return m_mapGrid[cellNumber];
}

int TileMap::GetWidth() const
{
	return m_width;
}

int TileMap::GetHeight() const
{
	return m_height;
}

void TileMap::LoadFromArray(int* sourceArray, int width, int height)
{
	assert(sourceArray && width > 0 && height > 0);

	// Clear the old data if we have any, then allocate new memory
	// and copy over the array data passed in as a parameter.
	int cellCount = width * height;
	m_mapGrid.reset(new int[cellCount]);

	for (int i = 0; i < cellCount; ++i)
	{
		m_mapGrid[i] = sourceArray[i];
	}

	m_width = width;
	m_height = height;
}

void TileMap::Draw(const Tileset& tileSet) const
{
	assert(m_mapGrid && m_height > 0 && m_width > 0);

	for (int y = 0; y < m_height; ++y)
	{
		for (int x = 0; x < m_width; ++x)
		{
			int nextCellIndex = y * m_width + x;
			int nextCellId = m_mapGrid[nextCellIndex];
			TCODConsole::root->putCharEx(x, y, tileSet[nextCellId].character, tileSet[nextCellId].color, tileSet[nextCellId].bgColor);
		}
	}
}