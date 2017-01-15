#pragma once
#include <dpx/tableid.hpp>
#include <spr/rendering/renderpass.hpp>
#include <spr/data/tables.hpp>

spr::RenderPass createSpriteRenderPass(dpx::TableId viewId, spr::Tables& tables);