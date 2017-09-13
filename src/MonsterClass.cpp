#include <cassert>
#include "MonsterClass.hpp"

std::string MonsterClass::GetName() const
{
	return m_name;
}

void MonsterClass::SetName(const std::string& name)
{
	m_name = name;
}

char MonsterClass::GetGlyph() const
{
	return m_glyph;
}

void MonsterClass::SetGlyph(char glyph)
{
	m_glyph = glyph;
}

TCODColor MonsterClass::GetColor() const
{
	return m_color;
}

void MonsterClass::SetColor(TCODColor color)
{
	m_color = color;
}

int MonsterClass::GetMaxHealth() const
{
	return m_maxHealth;
}

void MonsterClass::SetMaxHealth(int maxHealth)
{
	assert(maxHealth > 0);
	m_maxHealth = maxHealth;
}

int MonsterClass::GetLevel() const
{
	return m_level;
}

void MonsterClass::SetLevel(int level)
{
	assert(level > 0);
	m_level = level;
}

int MonsterClass::GetAttackPower() const
{
	return m_attackPower;
}

void MonsterClass::SetAttackPower(int attackPower)
{
	m_attackPower = attackPower;
}

int MonsterClass::GetDefensePower() const
{
	return m_defensePower;
}

void MonsterClass::SetDefensePower(int defensePower)
{
	m_defensePower = defensePower;
}

