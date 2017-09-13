#include <cassert>
#include <libtcod.hpp>
#include "Item.hpp"
#include "ItemMap.hpp"


ItemMap::ItemMap() : m_mapGrid(nullptr), m_width(0), m_height(0)
{

}

ItemMap::~ItemMap()
{
	delete[] m_mapGrid;
}

int ItemMap::GetItem(int x, int y)
{
	assert(x >= 0 && x < m_width && y >= 0 && y < m_height);
	int cellNumber = y * m_width + x;
	return m_mapGrid[cellNumber];
}

int ItemMap::GetWidth()
{
	return m_width;
}

int ItemMap::GetHeight()
{
	return m_height;
}

void ItemMap::LoadFromArray(int* sourceArray, int width, int height)
{
	assert(sourceArray && width > 0 && height > 0);

	// Clear the old data if we have any, then allocate new memory
	// and copy over the array data passed in as a parameter.
	if (m_mapGrid)
	{
		delete[] m_mapGrid;
		m_mapGrid = nullptr;
	}

	int cellCount = width * height;
	m_mapGrid = new int[cellCount];

	for (int i = 0; i < cellCount; ++i)
	{
		m_mapGrid[i] = sourceArray[i];
	}

	m_width = width;
	m_height = height;
}

void ItemMap::Draw(Item* itemSet)
{
	assert(m_mapGrid && m_height > 0 && m_width > 0);

	for (int y = 0; y < m_height; ++y)
	{
		for (int x = 0; x < m_width; ++x)
		{
			int nextCellIndex = y * m_width + x;
			int nextCellId = m_mapGrid[nextCellIndex];
			if(nextCellId >= 0)
				TCODConsole::root->putCharEx(x, y, itemSet[nextCellId].character, itemSet[nextCellId].color, TCODColor::black);
		}
	}
}