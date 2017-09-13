#pragma once

#include <string>

class Player
{
public:
	Player();
	~Player();

	// Returns the name of this player.
	std::string GetName() const;

	// Sets the name of this player.
	void SetName(const std::string& name);

	// Returns the current level of this player.
	int GetLevel() const;

	// Sets the current level of this player.
	void SetLevel(int level);

	// Returns the current unmodified health of this player.
	int GetHealth() const;

	// Sets the current unmodified health of this player.
	void SetHealth(int health);

	// Returns the unmodified maximum health of this player.
	int GetMaxHealth() const;

	// Sets the unmodified maximum health of this player.
	void SetMaxHealth(int maxHealth);

	// Returns the unmodified attack power of this player.
	int GetAttackPower() const;

	// Sets the unmodified attack power of this player.
	void SetAttackPower(int attackPower);

	// Returns the unmodified defense power of this player.
	int GetDefensePower() const;

	// Sets the unmodified defense power of this player.
	void SetDefensePower(int defensePower);

	// Returns the x coordinate of the current position of this player.
	int GetPositionX() const;

	// Returns the y coordinate of the current position of this player.
	int GetPositionY() const;

	// Sets the current position of this player.
	void SetPosition(int x, int y);

	// Draws this player to the main screen.
	void Draw() const;

private:
	std::string m_name;
	int m_level;
	int m_health;
	int m_maxHealth;
	int m_attackPower;
	int m_defensePower;

	int m_positionX;
	int m_positionY;
};