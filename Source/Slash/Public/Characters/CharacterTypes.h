#pragma once

UENUM(BlueprintType)
enum class EChararacterState : uint8
{
	ECS_Uneqipped UMETA(DisplayName = "Unequipped"),
	ECS_EqippedOneHandedWeapon UMETA(DisplayName = "Equipped One Handed Weapon"),
	ECS_EqippedTwoHandedWeapon UMETA(DisplayName = "Equipped Two Handed Weapon")
};

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EAS_EquippingWeapon UMETA(DisplayName = "Equipping Weapon"),
	EAS_Attacking UMETA(DisplayName = "Attacking")
};

