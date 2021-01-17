// Fill out your copyright notice in the Description page of Project Settings.


#include "Helpers.h"

TMap<FString, int32>  UHelpers::SortTopScores(TMap<FString, int32> scores, int32 amount)
{
    scores.ValueSort([](const int lhs, const int rhs) { return lhs > rhs; });

    // remove overflow items
    int32 overflow = scores.Num() - amount;
    UE_LOG(LogTemp, Log, TEXT("scores size: %d with overflow %d"), scores.Num(), overflow);
    if (overflow > 0)
    {
        TArray<FString> keys;
        scores.GenerateKeyArray(keys);
        for (int i = 0; i < overflow; i++)
        {
            UE_LOG(LogTemp, Log, TEXT("would remove from score: %s"), *keys.Last(i));
            scores.Remove(keys.Last(i));
        }
    }
    return scores;
}