#include "ArmorStatUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UArmorStatUpgrade::GetUpgradedStatValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, UPawnStat* NewStat) {
    return FUpgradeValues{};
}

UArmorStatUpgrade::UArmorStatUpgrade() {
    this->Stat = NULL;
}

