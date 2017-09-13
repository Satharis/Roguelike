#include <cassert>
#include <libtcod.hpp>
#include "Player.hpp"

Player::Player() : m_level(0), m_health(0), m_maxHealth(0), m_attackPower(0), m_defensePower(0), m_positionX(0), m_positionY(0)
{

}

Player::~Player()
{

}

std::string Player::GetName() const
{
	return m_name;
}

void Player::SetName(const std::string& name)
{
	m_name = name;
}


int Player::GetLevel() const
{
	return m_level;
}

void Player::SetLevel(int level)
{
	m_level = level;
}

int Player::GetHealth() const
{
	return m_health;
}

void Player::SetHealth(int health)
{
	m_health = health;
}

int Player::GetMaxHealth() const
{
	return m_maxHealth;
}

void Player::SetMaxHealth(int maxHealth)
{
	m_maxHealth = maxHealth;
}

int Player::GetAttackPower() const
{
	return m_attackPower;
}

void Player::SetAttackPower(int attackPower)
{
	m_attackPower = attackPower;
}

int Player::GetDefensePower() const
{
	return m_defensePower;
}

void Player::SetDefensePower(int defensePower)
{
	m_defensePower = defensePower;
}

int Player::GetPositionX() const
{
	return m_positionX;
}

int Player::GetPositionY() const
{
	return m_positionY;
}

void Player::SetPosition(int x, int y)
{
	assert(x >= 0 && y >= 0);
	m_positionX = x;
	m_positionY = y;
}

void Player::Draw() const
{
	TCODConsole::root->putCharEx(m_positionX, m_positionY, '@', TCODColor::red, TCODColor::black);
}