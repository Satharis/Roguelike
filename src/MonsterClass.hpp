#pragma once

#include <libtcod.hpp>
#include <string>

class MonsterClass
{
public:
	// Get the name of this monster class.
	std::string GetName() const;

	// Set the name of this monster class.
	void SetName(const std::string& name);

	// Get the font glyph that represents this monster class.
	char GetGlyph() const;

	// Set the font glyph that represents this monster class
	void SetGlyph(char glyph);

	// Get the color of the glyph that represents this monster class.
	TCODColor GetColor() const;

	// Set the color of the glyph that represents this monster class.
	void SetColor(TCODColor color);

	// Get the max health of this monster class.
	int GetMaxHealth() const;

	// Set the max health of this monster class.
	void SetMaxHealth(int maxHealth);

	// Get the level of this monster class(level is cosmetic).
	int GetLevel() const;

	// Set the level of this monster class(level is cosmetic)
	void SetLevel(int level);

	// Get the attack power of this monster class.
	int GetAttackPower() const;

	// Set the attack power of this monster class.
	void SetAttackPower(int attackPower);

	// Get the defense power of this monster class.
	int GetDefensePower() const;

	// Set the defense power of this monster class.
	void SetDefensePower(int defensePower);

private:
	std::string m_name;
	char m_glyph;
	TCODColor m_color;

	int m_maxHealth;
	int m_level;
	int m_attackPower;
	int m_defensePower;
};
