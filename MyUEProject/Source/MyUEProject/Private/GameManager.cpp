#include "GameManager.h"
#include "ManagerBase.h"
#include "Engine.h"
#include "UnrealString.h"

UGameManager::UGameManager()
{
}

void UGameManager::Test()
{
	UKismetSystemLibrary::PrintString(GetWorld(), FString::FromInt(Index).Append("*********************************"));
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

//void UGameManager::InitManagerMap()
//{
//	FStringAssetReference asset = "Blueprint'/Game/BluePrints/Manager/InputManager.InputManager'";
//	UObject* itemObj = asset.ResolveObject();
//	UManagerBase* gen = Cast<UManagerBase>(itemObj);
//	if (gen != NULL)
//	{
//		//GetWorld()->construct
//		//NewObject<UManagerBase*>(gen);
//		//AActor* spawnActor = GetWorld()->SpawnActor<AActor>(gen->GeneratedClass);
//	}
//}

void UGameManager::AddManager(FName Name, UManagerBase* Manager)
{
	if (Name.IsNone())
	{
		UKismetSystemLibrary::PrintString(GetWorld(), "Name cannot be None");
		return;
	}

	if (!ManagerMap.Contains(Name))
	{
		ManagerMap.Add(Name, Manager);
	}
}

UManagerBase* UGameManager::GetManager(FName Name)
{
	if (ManagerMap.Contains(Name))
	{
		return *ManagerMap.Find(Name);
	}
	return nullptr;
}

void UGameManager::RemoveManager(FName Name)
{
	if (ManagerMap.Contains(Name))
	{
		ManagerMap.Remove(Name);
	}
}

void UGameManager::RemoveAll()
{
	ManagerMap.Empty();
}

void UGameManager::Tick(float DeltaTime)
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, "GameManager");
	//UKismetSystemLibrary::PrintString(GetWorld(), "GameManager -----------");
}

TStatId UGameManager::GetStatId() const
{
	return TStatId();
}