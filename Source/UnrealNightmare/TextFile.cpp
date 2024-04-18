// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFile.h"

bool URWTxtFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool URWTxtFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}


bool URWTxtFile::SaveContTxt(FString SaveTextC, FString FileNameC)
{
    return FFileHelper::SaveStringToFile(SaveTextC + "\n", *(FPaths::ProjectDir() + FileNameC), FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
}