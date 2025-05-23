#pragma once

#include "CoreMinimal.h"

// Custom Includes.
#include "FF_HTTP_LHV_Enums.h"
#include "FF_HTTP_LHV_Includes.h"

#include "FF_HTTP_LHV_Request.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegate_LibHv_Request, UHttpConnectionLhv*, Connection);

UCLASS(BlueprintType)
class FF_HTTP_LHV_API UHttpConnectionLhv : public UObject
{
	GENERATED_BODY()

private:

	virtual FString Callback_Type_Method(http_method Type);
	virtual void Callback_Content_Type(ELibHvContentTypes& Out_Content_Type, FString& Out_Type_String, http_content_type Type);
	virtual http_content_type Callback_Content_Type_Convert(ELibHvContentTypes Type);
	virtual int32 Callback_Status_To_Code(ELibHvStatusCodes Status);
	virtual http_status Callback_Code_To_Status(int Status);

public:

	HttpRequestPtr RequestPtr = nullptr;
	HttpResponseWriterPtr ResponsePtr = nullptr;

	UPROPERTY(BlueprintReadOnly)
	FDateTime RequestTime;

	UFUNCTION(BlueprintCallable, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool CancelRequest();

	UFUNCTION(BlueprintPure, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool GetClientAddress(FString& Out_Ip, int32& Out_Port);

	UFUNCTION(BlueprintPure, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool GetQueries(TMap<FString, FString>& Out_Querry, FString& Out_String);

	UFUNCTION(BlueprintPure, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool FindQuery(FString& Value, FString Key);

	UFUNCTION(BlueprintPure, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool GetBody(FString& Out_Body, int64& Out_BodySize);

	UFUNCTION(BlueprintPure, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool GetPaths(FString& Out_Method, FString& Out_Scheme, FString& Out_Host, int32& Out_Port, FString& Out_Path, FString& Out_Url);

	UFUNCTION(BlueprintPure, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool GetHeaders(TMap<FString, FString>& Out_Headers, FString& Out_String);

	UFUNCTION(BlueprintPure, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool FindHeader(FString Key, FString& Out_Value);

	UFUNCTION(BlueprintPure, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool GetContentType(FString& Out_Type_String, ELibHvContentTypes& Out_Content_Type);

	UFUNCTION(BlueprintPure, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool GetContentLenght(int64& Out_Lenght);

	UFUNCTION(BlueprintCallable, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool SendString(const FString In_Response, TMap<FString, FString> In_Header, ELibHvStatusCodes StatusCode = ELibHvStatusCodes::OK_200);

	UFUNCTION(BlueprintCallable, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool SendData(TArray<uint8> In_Bytes, TMap<FString, FString> In_Header, ELibHvStatusCodes StatusCode = ELibHvStatusCodes::OK_200, bool bNoCopy = false);

	UFUNCTION(BlueprintCallable, Category = "Frozen Forest|HTTP|Server|LibHv")
	virtual bool SendResponse(const FString In_Response, TMap<FString, FString> In_Header, ELibHvStatusCodes StatusCode = ELibHvStatusCodes::OK_200, ELibHvContentTypes ContentTypes = ELibHvContentTypes::Text_Plain);

};