#pragma once

#include "InputCommand.hpp"
#include "Tile.hpp"

class Player;
class TileMap;

class PlayerController
{
public:
	PlayerController();
	void AttachPlayer(Player& player);
	void DetachPlayer();
	void HandleAction(InputCommand action, const Tileset& tileSet, TileMap& terrain);
	void MovePlayer(InputCommand direction, const Tileset& tileSet, TileMap& terrain);
private:
	Player* m_player;
};