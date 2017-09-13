#include "PlayerController.hpp"

#include <cassert>

#include "Player.hpp"
#include "Tile.hpp"
#include "TileMap.hpp"

PlayerController::PlayerController() : m_player(nullptr)
{

}

void PlayerController::AttachPlayer(Player& player)
{
	m_player = &player;
}

void PlayerController::DetachPlayer()
{
	m_player = nullptr;
}

void PlayerController::HandleAction(InputCommand action, const Tileset& tileSet, TileMap& terrain)
{
	if (!m_player)
		return;

	switch (action)
	{
	case InputCommand::MoveNorth:
	case InputCommand::MoveNE:
	case InputCommand::MoveEast:
	case InputCommand::MoveSE:
	case InputCommand::MoveSouth:
	case InputCommand::MoveSW:
	case InputCommand::MoveWest:
	case InputCommand::MoveNW:
		MovePlayer(action, tileSet, terrain);
		break;
	}
}

void PlayerController::MovePlayer(InputCommand direction, const Tileset& tileSet, TileMap& terrain)
{
	int targetX = m_player->GetPositionX();
	int targetY = m_player->GetPositionY();

	switch (direction)
	{
	case InputCommand::MoveNorth:
		targetY -= 1;
		break;
	case InputCommand::MoveNE:
		targetX += 1;
		targetY -= 1;
		break;
	case InputCommand::MoveEast:
		targetX += 1;
		break;
	case InputCommand::MoveSE:
		targetX += 1;
		targetY += 1;
		break;
	case InputCommand::MoveSouth:
		targetY += 1;
		break;
	case InputCommand::MoveSW:
		targetX -= 1;
		targetY += 1;
		break;
	case InputCommand::MoveWest:
		targetX -= 1;
		break;
	case InputCommand::MoveNW:
		targetX -= 1;
		targetY -= 1;
		break;
	}

	// Ensure we don't move outside the boundary of the map.
	if (targetX < 0 || targetX >= terrain.GetWidth() || targetY < 0 || targetY >= terrain.GetHeight())
	{
		return;
	}

	int tileId = terrain.GetTile(targetX, targetY);
	if (tileSet[tileId].passable)
	{
		m_player->SetPosition(targetX, targetY);
	}
}