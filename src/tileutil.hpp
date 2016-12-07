#pragma once
#include <fea/rendering/tilemap.hpp>
#include <data.hpp>

enum GfxBackgroundTile { Grass0, Grass1, Grass2, Grass3, 
                         Path0, Path1, Path2, Path3 };
enum GfxCenterTile { Trees0, Trees1, Trees2, Trees3 };

enum TileLayer { Background, Center };

fea::TileMap createTileMap(TileLayer layer, glm::ivec2 chunkCoordinate, GameData& data);
void setTile(glm::ivec2 coordinate, Tile tile, LayeredTiles& tiles);
