#include "constants.hpp"
#include <constants/allconstants.hpp>

namespace constants
{
Constants::~Constants()
{
}

std::unique_ptr<Constants> makeConstants()
{
    Constants result;

    result.world = std::make_unique<constants::World>();

    //world
    result.world->voidColor = spr::Color(0x43556b);
    result.world->spatialStorageSize =  {1024.0f};

    return std::make_unique<Constants>(std::move(result));
}
}
