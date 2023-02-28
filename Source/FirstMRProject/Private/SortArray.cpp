// Fill out your copyright notice in the Description page of Project Settings.


#include "SortArray.h"

#include <sstream>

#include "Components/Button.h"
using namespace std;

TArray<AActor*> USortArray::SortCustomArray(TArray<AActor*> buttons)
{
	TArray<AActor*> sortedButtons;
	sortedButtons = buttons;
	
	for (AActor* button : buttons)
	{
		UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *button->GetParentComponent()->GetName());
		// check if button is integer, else, delete it
		if (!button->GetParentComponent()->GetName().IsNumeric())
		{
			sortedButtons.Remove(button);
			UE_LOG(LogTemp, Error, TEXT("Deleted Name: %s"), *button->GetParentComponent()->GetName());
		}
		
	}

	// sort sortedButtons by name as integers
	sortedButtons.Sort([](const AActor& A, const AActor& B) {
		return FCString::Atoi(*A.GetParentComponent()->GetName()) < FCString::Atoi(*B.GetParentComponent()->GetName());
		});

	return sortedButtons;
}
int USortArray::GetDayOfWeek(FDateTime date)
{
	//return the day of week as integer
	EDayOfWeek day = date.GetDayOfWeek();
	switch (day)
	{
	case EDayOfWeek::Monday:
		return 0;
		break;
	case EDayOfWeek::Tuesday:
		return 1;
		break;
	case EDayOfWeek::Wednesday:
		return 2;
		break;
	case EDayOfWeek::Thursday:
		return 3;
		break;
	case EDayOfWeek::Friday:
		return 4;
		break;
	case EDayOfWeek::Saturday:
		return 5;
		break;
	case EDayOfWeek::Sunday:
		return 6;
		break;
	default:
		return -1;
	}
	
}
