// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"
#include "Engine.h"
#include "ManagerBase.h"
#include "GameInstanceSubsystem.h"
#include "GameManager.generated.h"

UCLASS(config = Game)
class UGameManager : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:

	UGameManager();

	UPROPERTY(BlueprintReadWrite, Category = "GameManager")
		AActor* GameManagerParentActor;

	UPROPERTY(BlueprintReadOnly, Category = "GameManager")
		TMap<TSubclassOf<AManagerBase>, AManagerBase*> ManagerMap;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;
public:

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void InitManagerMap();

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void AddManager(AManagerBase* ManagerInstance);

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		AManagerBase* GetManager(TSubclassOf<AManagerBase> ManagerClass);

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void RemoveManager(TSubclassOf<AManagerBase> ManagerClass);

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void RemoveAll();

	/** STATIC */
public:

	/** Get the global GameManager*/
	UFUNCTION(BlueprintPure, Category = "GameManager", meta = (WorldContext = "ContextObject", DeprecatedFunction, DeprecationMessage = "Use 'Get GameManager' instead"))
		static UGameManager* GetGameManager(const UObject* ContextObject)
	{
		UWorld* World = GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::LogAndReturnNull);

		const UGameInstance* GI = World ? World->GetGameInstance() : nullptr;
		return UGameInstance::GetSubsystem<UGameManager>(GI);
	}

	// ͨ�� FTickableGameObject �̳�
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
};