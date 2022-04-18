#pragma once
#ifndef GAME_MAP_H
#define GAME_MAP_H

#include "CommonFunction.h"
#include "BaseObject.h"

#define MAX_TILE 20
class TileMat : public BaseObject
{
public :
	TileMat() { ; }
	~TileMat() { ; }

};

class GameMap
{
public:
	GameMap() { ; }
	~GameMap() { ; }

	void LoadMap(const char* name);
	void LoadTile(SDL_Renderer* screen);
	void DrawMap(SDL_Renderer* screen);
	Map getMap() const { return game_map_; }
	void SetMap(Map& map_data) { game_map_ = map_data; }

private:
	Map game_map_;
	TileMat tile_mat[MAX_TILE];

	 
};

#endif // !GAME_MAP_H
