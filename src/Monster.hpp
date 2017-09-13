#pragma once

#include "libtcod.hpp"

class MonsterClass;

class Monster
{
public:
	/*Monster();
	~Monster();

	// Returns the base class of this monster.
	MonsterClass* GetClass() const;

	// Sets this monster's base class.
	void SetClass(MonsterClass& monsterClass);

	// Returns the x coordinate of this monster's position.
	int GetPositionX() const;

	// Returns the y coordinate of this monster's position.
	int GetPositionY() const;

	// Sets this monster's position by x and y coordinates.
	void SetPosition(int x, int y);

	// Draws this monster to the main rendering window.
	void Draw() const;*/

private:
	MonsterClass* m_baseClass;
	int m_positionX;
	int m_positionY;
};