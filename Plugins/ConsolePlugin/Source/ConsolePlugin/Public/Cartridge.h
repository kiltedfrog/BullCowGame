// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Cartridge.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CONSOLEPLUGIN_API UCartridge : public UActorComponent
{
	GENERATED_BODY()

public:
    virtual void OnInput(const FString& Input) PURE_VIRTUAL(UCartridge::OnInput,);


protected:
	void PrintLine(const FString& Line) const;
    template<typename ...Types>
    void PrintLine(const TCHAR* Fmt, Types... Args) const
    {
        PrintLine(FString::Printf(Fmt, Args...));
    }
	void ClearScreen() const;

};
