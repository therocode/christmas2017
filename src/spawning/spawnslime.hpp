#pragma once
#include <cstdint>
#include "../direction.hpp"
#include <glm.hpp>

struct GameData;

int32_t spawnSlime(glm::vec2 position, GameData& data);