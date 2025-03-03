#include "GameManager.h"
#include "ManagerBase.h"
#include "Engine.h"
#include "UnrealString.h"

UGameManager::UGameManager()
{
}

void UGameManager::Initialize(FSubsystemCollectionBase& Collection)
{
	RemoveAll();
	InitManagerMap();
}

void UGameManager::Deinitialize()
{
	RemoveAll();
}

void UGameManager::InitManagerMap()
{
	for (TMap<TSubclassOf<AManagerBase>, AManagerBase*>::TIterator It(ManagerMap); It; ++It)
	{
		AManagerBase* const Manager = It.Value();
		if (Manager != nullptr)
		{
			Manager->InitManager();
		}
	}
}

void UGameManager::AddManager(AManagerBase* ManagerInstance)
{
	if (ManagerInstance == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "ManagerInstance cannot be nullptr");
		return;
	}

	UClass* ManagerClass = ManagerInstance->GetClass();
	if (!ManagerMap.Contains(ManagerClass))
	{
		ManagerInstance->InitManager();
		ManagerMap.Add(ManagerClass, ManagerInstance);

		if (GameManagerParentActor != nullptr)
		{
			ManagerInstance->AttachToActor(GameManagerParentActor, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		}

		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, ManagerInstance->GetName());
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, "this ManagerClass is already exist");
	}
}

AManagerBase* UGameManager::GetManager(TSubclassOf<AManagerBase> ManagerClass)
{
	if (ManagerMap.Contains(ManagerClass))
	{
		AManagerBase* Manager = *ManagerMap.Find(ManagerClass);
		//Manager->CheckActor();
		return Manager;
	}
	return nullptr;
}

void UGameManager::RemoveManager(TSubclassOf<AManagerBase> ManagerClass)
{
	if (ManagerMap.Contains(ManagerClass))
	{
		ManagerMap.Remove(ManagerClass);
	}
}

void UGameManager::RemoveAll()
{
	for (TMap<TSubclassOf<AManagerBase>, AManagerBase*>::TIterator It(ManagerMap); It; ++It)
	{
		AManagerBase* const Manager = It.Value();
		if (Manager != nullptr)
		{
			Manager->Destroy();
		}
	}
	ManagerMap.Empty();
}

void UGameManager::Tick(float DeltaTime)
{
	for (TMap<TSubclassOf<AManagerBase>, AManagerBase*>::TIterator It(ManagerMap); It; ++It)
	{
		AManagerBase* const Manager = It.Value();
		if (Manager != nullptr)
		{
			Manager->TickFunction(DeltaTime);
		}
	}
}

TStatId UGameManager::GetStatId() const
{
	return TStatId();
}