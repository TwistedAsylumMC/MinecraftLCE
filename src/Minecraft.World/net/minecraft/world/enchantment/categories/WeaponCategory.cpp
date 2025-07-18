#include "net/minecraft/world/enchantment/categories/WeaponCategory.h"
#include "net/minecraft/world/item/SwordItem.h"

const WeaponCategory* WeaponCategory::sWeaponCategory = new WeaponCategory();

bool WeaponCategory::canEnchant(Item* item) const {
    return dynamic_cast<SwordItem*>(item);
}
