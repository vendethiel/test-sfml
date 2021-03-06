#include "Item.h"

Item::Item(const char* textureFile, uint x, uint y)
	: super(textureFile, x, y)
{
	m_Behavior = BehaviorManager::getInstance().getBehavior(std::string(textureFile, 1));
}

void Item::trigger(Player& player) {
	m_Behavior(player);
}

Item::~Item() {
}
