// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSHUD : public AHUD
{
	GENERATED_BODY()
	

		
protected:
	UPROPERTY(EditAnywhere)
		// 이 변수는 조준선 텍스쳐를 담는데에 사용
		UTexture2D* CrosshairTexture;

public:
	virtual void DrawHUD() override;
};
