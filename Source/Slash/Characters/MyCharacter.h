// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Item.h"
#include "Characters/CharacterTypes.h"
#include "MyCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UGroomComponent;
class AItem;
class UAnimMontage;
class AWeapon;

UCLASS()
class SLASH_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	AMyCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
		void SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled);

protected:
	virtual void BeginPlay() override;

	//Callbaks for input

	void MoveForvard(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);
	void EKeyPressed();
	void Attack();

	// Play montage functions

	void PlayAttackMontage();

	UFUNCTION(BlueprintCallable)
	void AttackEnd();
	bool CanAttack();

	void PlayEquipMontage(const FName& SectionName);
	bool CanDisarm();
	bool CanArm();

	UFUNCTION(BlueprintCallable)
	void Disarm();

	UFUNCTION(BlueprintCallable)
	void Arm();

	UFUNCTION(BlueprintCallable)
	void FinishEquipping();

private:

	EChararacterState CharacterState = EChararacterState::ECS_Uneqipped;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EActionState ActionState = EActionState::EAS_Unoccupied;

	UPROPERTY(VisibleAnywhere)
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere)
		UCameraComponent* VievCamera;

	UPROPERTY(VisibleAnywhere, Category = Hair)
		UGroomComponent* Hair;

	UPROPERTY(VisibleAnywhere, Category = Hair)
		UGroomComponent* Eyebrows;

	UPROPERTY(VisibleInstanceOnly)
		AItem* OverlappingItem;

	UPROPERTY(VisibleAnywhere, Category = Weapon)
		AWeapon* EquippedWeapon;

	// Animation Montages
	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* AttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* EquipMontage;

public:
	FORCEINLINE void SetOverlappingItem(AItem* Item) { OverlappingItem = Item; }
	FORCEINLINE EChararacterState GetCHararacterState() const { return CharacterState; }

};
