#pragma once

#include "net/minecraft/world/item/enchantment/Enchantment.h"

class OxygenEnchantment : public Enchantment {
public:
    OxygenEnchantment(const Rarity*, arrayWithLength<const EquipmentSlot*>);

    int getMaxLevel() override;
    int getMinCost(int) override;
    int getMaxCost(int) override;
};
