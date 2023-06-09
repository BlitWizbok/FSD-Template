#include "SaveGameStateComponent.h"
#include "Net/UnrealNetwork.h"

void USaveGameStateComponent::SetCampaign() {
}

void USaveGameStateComponent::Server_SetVictoryPose_Implementation(UVictoryPose* pose) {
}

void USaveGameStateComponent::Server_SetPlayerProgress_Implementation(const FPlayerProgress& Progress) {
}

void USaveGameStateComponent::Server_SetLoadout_Implementation(const FItemLoadout& Loadout, const TArray<FItemUpgradeSelection>& weaponLoadouts) {
}

void USaveGameStateComponent::Server_SetEquippedPerks_Implementation(const TArray<FSaveGameStatePerkItem>& perks) {
}

void USaveGameStateComponent::Server_SetCredits_Implementation(const int32 Amount) {
}

void USaveGameStateComponent::Server_SetCharacterStats_Implementation(const TArray<FCharacterProgress>& Stats) {
}

void USaveGameStateComponent::Server_SetActiveCampaignMission_Implementation(FActiveCampaingMission Data) {
}

void USaveGameStateComponent::RefreshLoadoutFromSave(UPlayerCharacterID* characterID) {
}

void USaveGameStateComponent::OnRep_PlayerProgress() {
}

void USaveGameStateComponent::OnRep_ItemUpgradeSelections() {
}

void USaveGameStateComponent::OnRep_Credits() {
}

void USaveGameStateComponent::OnRep_CharacterStats() {
}

void USaveGameStateComponent::OnRep_ActiveCampaignMission() {
}

FCharacterProgress USaveGameStateComponent::GetCharacterStat(UPlayerCharacterID* characterID) {
    return FCharacterProgress{};
}

UGeneratedMission* USaveGameStateComponent::GetActiveCampaignMission() const {
    return NULL;
}

void USaveGameStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USaveGameStateComponent, Credits);
    DOREPLIFETIME(USaveGameStateComponent, VictoryPose);
    DOREPLIFETIME(USaveGameStateComponent, ActiveCampaignMission);
    DOREPLIFETIME(USaveGameStateComponent, ItemUpgradeSelections);
    DOREPLIFETIME(USaveGameStateComponent, PlayerProgress);
    DOREPLIFETIME(USaveGameStateComponent, CharacterStats);
}

USaveGameStateComponent::USaveGameStateComponent() {
    this->Credits = 0;
    this->VictoryPose = NULL;
}

