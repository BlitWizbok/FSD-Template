#include "EnemyComponent.h"

UEnemyID* UEnemyComponent::GetID() {
    return NULL;
}

FText UEnemyComponent::GetFamilyName() const {
    return FText::GetEmpty();
}

UTexture2D* UEnemyComponent::GetFamilyIcon() const {
    return NULL;
}

UEnemyComponent::UEnemyComponent() {
    this->Family = NULL;
    this->KillShout = NULL;
    this->EnemyID = NULL;
}

