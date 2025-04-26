#include "FF_HTTP_LHV_Request.h"

FString UHttpConnectionLhv::Callback_Type_Method(http_method Type)
{
	switch (Type)
	{
		case HTTP_DELETE:

			return "DELETE";

		case HTTP_GET:

			return "GET";

		case HTTP_HEAD:

			return "HEAD";

		case HTTP_POST:

			return "POST";

		case HTTP_PUT:

			return "PUT";

		case HTTP_CONNECT:

			return "CONNECT";

		case HTTP_OPTIONS:

			return "OPTIONS";

		case HTTP_TRACE:

			return "TRACE";

		case HTTP_COPY:

			return "COPY";

		case HTTP_LOCK:

			return "LOCK";

		case HTTP_MKCOL:

			return "MKCOL";

		case HTTP_MOVE:

			return "MOVE";

		case HTTP_PROPFIND:

			return "PROFIND";

		case HTTP_PROPPATCH:

			return "PROPPATCH";

		case HTTP_SEARCH:

			return "SEARCH";

		case HTTP_UNLOCK:

			return "UNLOCK";

		case HTTP_BIND:

			return "BIND";

		case HTTP_REBIND:

			return "REBIND";

		case HTTP_UNBIND:

			return "UNBIND";

		case HTTP_ACL:

			return "ACL";

		case HTTP_REPORT:

			return "REPORT";

		case HTTP_MKACTIVITY:

			return "MKACTIVITY";

		case HTTP_CHECKOUT:

			return "CHECKOUT";

		case HTTP_MERGE:

			return "MERGE";

		case HTTP_MSEARCH:

			return "MSEARCH";

		case HTTP_NOTIFY:

			return "NOTIFY";

		case HTTP_SUBSCRIBE:

			return "SUBSCRIBE";

		case HTTP_UNSUBSCRIBE:

			return "UNSUBSCRIBE";

		case HTTP_PATCH:

			return "PATCH";

		case HTTP_PURGE:

			return "PURGE";

		case HTTP_MKCALENDAR:

			return "MKCALENDAR";

		case HTTP_LINK:

			return "LINK";

		case HTTP_UNLINK:

			return "UNLINK";

		case HTTP_SOURCE:

			return "SOURCE";

		case HTTP_CUSTOM_METHOD:

			return "CUSTOM_METHOD";

		default:

			return "NONE";
	}
}

void UHttpConnectionLhv::Callback_Content_Type(ELibHvContentTypes& Out_Content_Type, FString& Out_Type_String, http_content_type Type)
{
	switch (Type)
	{
		case CONTENT_TYPE_NONE:

			Out_Content_Type = ELibHvContentTypes::Content_Type_NONE;
			Out_Type_String = "";
			return;

		case CONTENT_TYPE_TEXT:

			Out_Content_Type = ELibHvContentTypes::Content_Type_Text;
			Out_Type_String = "";
			return;

		case TEXT_PLAIN:

			Out_Content_Type = ELibHvContentTypes::Text_Plain;
			Out_Type_String = "text/plain";
			return;

		case TEXT_HTML:

			Out_Content_Type = ELibHvContentTypes::Text_HTML;
			Out_Type_String = "text/html";
			return;

		case TEXT_CSS:

			Out_Content_Type = ELibHvContentTypes::Text_CSS;
			Out_Type_String = "text/css";
			return;

		case TEXT_CSV:

			Out_Content_Type = ELibHvContentTypes::Text_CSV;
			Out_Type_String = "text/csv";
			return;

		case TEXT_MARKDOWN:

			Out_Content_Type = ELibHvContentTypes::Text_Markdown;
			Out_Type_String = "text/markdown";
			return;

		case TEXT_EVENT_STREAM:

			Out_Content_Type = ELibHvContentTypes::Text_Event_Stream;
			Out_Type_String = "text/event-stream";
			return;

		case CONTENT_TYPE_APPLICATION:

			Out_Content_Type = ELibHvContentTypes::Content_Type_Application;
			Out_Type_String = "";
			return;

		case APPLICATION_JAVASCRIPT:

			Out_Content_Type = ELibHvContentTypes::Application_JS;
			Out_Type_String = "application/javascript";
			return;

		case APPLICATION_JSON:

			Out_Content_Type = ELibHvContentTypes::Application_Json;
			Out_Type_String = "application/json";
			return;

		case APPLICATION_XML:

			Out_Content_Type = ELibHvContentTypes::Application_XML;
			Out_Type_String = "application/xml";
			return;

		case APPLICATION_URLENCODED:

			Out_Content_Type = ELibHvContentTypes::Application_URLENCODED;
			Out_Type_String = "application/x-www-form-urlencoded";
			return;

		case APPLICATION_OCTET_STREAM:

			Out_Content_Type = ELibHvContentTypes::Application_Octet_Stream;
			Out_Type_String = "application/octet-stream";
			return;

		case APPLICATION_ZIP:

			Out_Content_Type = ELibHvContentTypes::Application_ZIP;
			Out_Type_String = "application/zip";
			return;

		case APPLICATION_GZIP:

			Out_Content_Type = ELibHvContentTypes::Application_gzip;
			Out_Type_String = "application/gzip";
			return;

		case APPLICATION_7Z:

			Out_Content_Type = ELibHvContentTypes::Application_7z;
			Out_Type_String = "application/x-7z-compressed";
			return;

		case APPLICATION_RAR:

			Out_Content_Type = ELibHvContentTypes::Application_RAR;
			Out_Type_String = "application/x-rar-compressed";
			return;

		case APPLICATION_PDF:

			Out_Content_Type = ELibHvContentTypes::Application_PDF;
			Out_Type_String = "application/pdf";
			return;

		case APPLICATION_RTF:

			Out_Content_Type = ELibHvContentTypes::Application_RTF;
			Out_Type_String = "application/rtf";
			return;

		case APPLICATION_GRPC:

			Out_Content_Type = ELibHvContentTypes::Application_gRPC;
			Out_Type_String = "application/grpc";
			return;

		case APPLICATION_WASM:

			Out_Content_Type = ELibHvContentTypes::Application_WASM;
			Out_Type_String = "application/wasm";
			return;

		case APPLICATION_JAR:

			Out_Content_Type = ELibHvContentTypes::Application_JAR;
			Out_Type_String = "application/java-archive";
			return;

		case APPLICATION_XHTML:

			Out_Content_Type = ELibHvContentTypes::Application_XHTML;
			Out_Type_String = "application/xhtml+xml";
			return;

		case APPLICATION_ATOM:

			Out_Content_Type = ELibHvContentTypes::Application_Atom;
			Out_Type_String = "application/atom+xml";
			return;

		case APPLICATION_RSS:

			Out_Content_Type = ELibHvContentTypes::Application_RSS;
			Out_Type_String = "application/rss+xml";
			return;

		case APPLICATION_WORD:

			Out_Content_Type = ELibHvContentTypes::Application_WORD;
			Out_Type_String = "application/msword";
			return;

		case APPLICATION_EXCEL:

			Out_Content_Type = ELibHvContentTypes::Application_Excel;
			Out_Type_String = "application/vnd.ms-excel";
			return;

		case APPLICATION_PPT:

			Out_Content_Type = ELibHvContentTypes::Application_PPT;
			Out_Type_String = "application/vnd.ms-powerpoint";
			return;

		case APPLICATION_EOT:

			Out_Content_Type = ELibHvContentTypes::Application_Eot;
			Out_Type_String = "application/vnd.ms-fontobject";
			return;

		case APPLICATION_M3U8:

			Out_Content_Type = ELibHvContentTypes::Application_M3U8;
			Out_Type_String = "application/vnd.apple.mpegurl";
			return;

		case APPLICATION_DOCX:

			Out_Content_Type = ELibHvContentTypes::Application_Docx;
			Out_Type_String = "application/vnd.openxmlformats-officedocument.wordprocessingml.document";
			return;

		case APPLICATION_XLSX:

			Out_Content_Type = ELibHvContentTypes::Application_XLSX;
			Out_Type_String = "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet";
			return;

		case APPLICATION_PPTX:

			Out_Content_Type = ELibHvContentTypes::Application_PPTX;
			Out_Type_String = "application/vnd.openxmlformats-officedocument.presentationml.presentation";
			return;

		case CONTENT_TYPE_MULTIPART:

			Out_Content_Type = ELibHvContentTypes::Content_Type_Multipart;
			Out_Type_String = "";
			return;

		case MULTIPART_FORM_DATA:

			Out_Content_Type = ELibHvContentTypes::Multiplart_Form_Data;
			Out_Type_String = "multipart/form-data";
			return;

		case CONTENT_TYPE_IMAGE:

			Out_Content_Type = ELibHvContentTypes::Content_Type_Image;
			Out_Type_String = "";
			return;

		case IMAGE_JPEG:

			Out_Content_Type = ELibHvContentTypes::Image_JPG;
			Out_Type_String = "image/jpeg";
			return;

		case IMAGE_PNG:

			Out_Content_Type = ELibHvContentTypes::Image_PNG;
			Out_Type_String = "image/png";
			return;

		case IMAGE_GIF:

			Out_Content_Type = ELibHvContentTypes::Image_GIF;
			Out_Type_String = "image/gif";
			return;

		case IMAGE_ICO:

			Out_Content_Type = ELibHvContentTypes::Image_ICO;
			Out_Type_String = "image/x-icon";
			return;

		case IMAGE_BMP:

			Out_Content_Type = ELibHvContentTypes::Image_BMP;
			Out_Type_String = "image/x-ms-bmp";
			return;

		case IMAGE_SVG:

			Out_Content_Type = ELibHvContentTypes::Image_SVG;
			Out_Type_String = "image/svg+xml";
			return;

		case IMAGE_TIFF:

			Out_Content_Type = ELibHvContentTypes::Image_TIFF;
			Out_Type_String = "image/tiff";
			return;

		case IMAGE_WEBP:

			Out_Content_Type = ELibHvContentTypes::Image_WEBP;
			Out_Type_String = "image/webp";
			return;

		case CONTENT_TYPE_VIDEO:

			Out_Content_Type = ELibHvContentTypes::Content_Type_Video;
			Out_Type_String = "";
			return;

		case VIDEO_MP4:

			Out_Content_Type = ELibHvContentTypes::Video_MP4;
			Out_Type_String = "video/mp4";
			return;

		case VIDEO_FLV:

			Out_Content_Type = ELibHvContentTypes::Video_FLV;
			Out_Type_String = "video/x-flv";
			return;

		case VIDEO_M4V:

			Out_Content_Type = ELibHvContentTypes::Video_M4V;
			Out_Type_String = "video/x-m4v";
			return;

		case VIDEO_MNG:

			Out_Content_Type = ELibHvContentTypes::Video_MNG;
			Out_Type_String = "video/x-mng";
			return;

		case VIDEO_TS:

			Out_Content_Type = ELibHvContentTypes::Video_TS;
			Out_Type_String = "video/mp2t";
			return;

		case VIDEO_MPEG:

			Out_Content_Type = ELibHvContentTypes::Video_MPEG;
			Out_Type_String = "video/mpeg";
			return;

		case VIDEO_WEBM:

			Out_Content_Type = ELibHvContentTypes::Video_WEBM;
			Out_Type_String = "video/webm";
			return;

		case VIDEO_MOV:

			Out_Content_Type = ELibHvContentTypes::Video_MOV;
			Out_Type_String = "video/quicktime";
			return;

		case VIDEO_3GPP:

			Out_Content_Type = ELibHvContentTypes::Video_3GPP;
			Out_Type_String = "video/3gpp";
			return;

		case VIDEO_AVI:

			Out_Content_Type = ELibHvContentTypes::Video_AVI;
			Out_Type_String = "video/x-msvideo";
			return;

		case VIDEO_WMV:

			Out_Content_Type = ELibHvContentTypes::Video_WMV;
			Out_Type_String = "video/x-ms-wmv";
			return;

		case VIDEO_ASF:

			Out_Content_Type = ELibHvContentTypes::Video_ASF;
			Out_Type_String = "video/x-ms-asf";
			return;

		case CONTENT_TYPE_AUDIO:

			Out_Content_Type = ELibHvContentTypes::Content_Type_Audio;
			Out_Type_String = "";
			return;

		case AUDIO_MP3:

			Out_Content_Type = ELibHvContentTypes::Audio_MP3;
			Out_Type_String = "audio/mpeg";
			return;

		case AUDIO_OGG:

			Out_Content_Type = ELibHvContentTypes::Audio_OGG;
			Out_Type_String = "audio/ogg";
			return;

		case AUDIO_M4A:

			Out_Content_Type = ELibHvContentTypes::Audio_M4A;
			Out_Type_String = "audio/x-m4a";
			return;

		case AUDIO_AAC:

			Out_Content_Type = ELibHvContentTypes::Audio_AAC;
			Out_Type_String = "audio/aac";
			return;

		case AUDIO_PCMA:

			Out_Content_Type = ELibHvContentTypes::Audio_PCMA;
			Out_Type_String = "audio/PCMA";
			return;

		case AUDIO_OPUS:

			Out_Content_Type = ELibHvContentTypes::Audio_OPUS;
			Out_Type_String = "audio/opus";
			return;

		case CONTENT_TYPE_FONT:

			Out_Content_Type = ELibHvContentTypes::Content_Type_Font;
			Out_Type_String = "";
			return;

		case FONT_TTF:

			Out_Content_Type = ELibHvContentTypes::Font_TTF;
			Out_Type_String = "font/ttf";
			return;

		case FONT_OTF:

			Out_Content_Type = ELibHvContentTypes::Font_OTF;
			Out_Type_String = "font/otf";
			return;

		case FONT_WOFF:

			Out_Content_Type = ELibHvContentTypes::Font_WOFF;
			Out_Type_String = "font/woff";
			return;

		case FONT_WOFF2:

			Out_Content_Type = ELibHvContentTypes::Font_WOFF2;
			Out_Type_String = "font/woff2";
			return;

		case CONTENT_TYPE_UNDEFINED:

			Out_Content_Type = ELibHvContentTypes::Content_Type_Undefined;
			Out_Type_String = "";
			return;

		default:

			Out_Content_Type = ELibHvContentTypes::Content_Type_NONE;
			return;
		}
}

http_content_type UHttpConnectionLhv::Callback_Content_Type_Convert(ELibHvContentTypes Type)
{
	switch (Type)
	{
		case ELibHvContentTypes::Application_7z:
			return http_content_type::APPLICATION_7Z;

		case ELibHvContentTypes::Application_Atom:
			return http_content_type::APPLICATION_ATOM;

		case ELibHvContentTypes::Application_Docx:
			return http_content_type::APPLICATION_DOCX;

		case ELibHvContentTypes::Application_Eot:
			return http_content_type::APPLICATION_EOT;

		case ELibHvContentTypes::Application_Excel:
			return http_content_type::APPLICATION_EXCEL;

		case ELibHvContentTypes::Application_gRPC:
			return http_content_type::APPLICATION_GRPC;

		case ELibHvContentTypes::Application_gzip:
			return http_content_type::APPLICATION_GZIP;

		case ELibHvContentTypes::Application_JAR:
			return http_content_type::APPLICATION_JAR;

		case ELibHvContentTypes::Application_JS:
			return http_content_type::APPLICATION_JAVASCRIPT;

		case ELibHvContentTypes::Application_Json:
			return http_content_type::APPLICATION_JSON;

		case ELibHvContentTypes::Application_M3U8:
			return http_content_type::APPLICATION_M3U8;

		case ELibHvContentTypes::Application_Octet_Stream:
			return http_content_type::APPLICATION_OCTET_STREAM;

		case ELibHvContentTypes::Application_PDF:
			return http_content_type::APPLICATION_PDF;

		case ELibHvContentTypes::Application_PPT:
			return http_content_type::APPLICATION_PPT;

		case ELibHvContentTypes::Application_PPTX:
			return http_content_type::APPLICATION_PPTX;

		case ELibHvContentTypes::Application_RAR:
			return http_content_type::APPLICATION_RAR;

		case ELibHvContentTypes::Application_RSS:
			return http_content_type::APPLICATION_RSS;

		case ELibHvContentTypes::Application_RTF:
			return http_content_type::APPLICATION_RTF;

		case ELibHvContentTypes::Application_URLENCODED:
			return http_content_type::APPLICATION_URLENCODED;

		case ELibHvContentTypes::Application_WASM:
			return http_content_type::APPLICATION_WASM;

		case ELibHvContentTypes::Application_WORD:
			return http_content_type::APPLICATION_WORD;

		case ELibHvContentTypes::Application_XHTML:
			return http_content_type::APPLICATION_XHTML;

		case ELibHvContentTypes::Application_XLSX:
			return http_content_type::APPLICATION_XLSX;

		case ELibHvContentTypes::Application_XML:
			return http_content_type::APPLICATION_XML;

		case ELibHvContentTypes::Application_ZIP:
			return http_content_type::APPLICATION_ZIP;

		case ELibHvContentTypes::Audio_AAC:
			return http_content_type::AUDIO_AAC;

		case ELibHvContentTypes::Audio_M4A:
			return http_content_type::AUDIO_M4A;

		case ELibHvContentTypes::Audio_MP3:
			return http_content_type::AUDIO_MP3;

		case ELibHvContentTypes::Audio_OGG:
			return http_content_type::AUDIO_OGG;

		case ELibHvContentTypes::Audio_OPUS:
			return http_content_type::AUDIO_OPUS;

		case ELibHvContentTypes::Audio_PCMA:
			return http_content_type::AUDIO_PCMA;

		case ELibHvContentTypes::Content_Type_Application:
			return http_content_type::CONTENT_TYPE_APPLICATION;

		case ELibHvContentTypes::Content_Type_Audio:
			return http_content_type::CONTENT_TYPE_AUDIO;

		case ELibHvContentTypes::Content_Type_Font:
			return http_content_type::CONTENT_TYPE_FONT;

		case ELibHvContentTypes::Content_Type_Image:
			return http_content_type::CONTENT_TYPE_IMAGE;

		case ELibHvContentTypes::Content_Type_Multipart:
			return http_content_type::CONTENT_TYPE_MULTIPART;

		case ELibHvContentTypes::Content_Type_NONE:
			return http_content_type::CONTENT_TYPE_NONE;

		case ELibHvContentTypes::Content_Type_Text:
			return http_content_type::CONTENT_TYPE_TEXT;

		case ELibHvContentTypes::Content_Type_Undefined:
			return http_content_type::CONTENT_TYPE_UNDEFINED;

		case ELibHvContentTypes::Content_Type_Video:
			return http_content_type::CONTENT_TYPE_VIDEO;

		case ELibHvContentTypes::Font_OTF:
			return http_content_type::FONT_OTF;

		case ELibHvContentTypes::Font_TTF:
			return http_content_type::FONT_TTF;

		case ELibHvContentTypes::Font_WOFF:
			return http_content_type::FONT_WOFF;

		case ELibHvContentTypes::Font_WOFF2:
			return http_content_type::FONT_WOFF2;

		case ELibHvContentTypes::Image_BMP:
			return http_content_type::IMAGE_BMP;

		case ELibHvContentTypes::Image_GIF:
			return http_content_type::IMAGE_GIF;

		case ELibHvContentTypes::Image_ICO:
			return http_content_type::IMAGE_ICO;

		case ELibHvContentTypes::Image_JPG:
			return http_content_type::IMAGE_JPEG;

		case ELibHvContentTypes::Image_PNG:
			return http_content_type::IMAGE_PNG;

		case ELibHvContentTypes::Image_SVG:
			return http_content_type::IMAGE_SVG;

		case ELibHvContentTypes::Image_TIFF:
			return http_content_type::IMAGE_TIFF;

		case ELibHvContentTypes::Image_WEBP:
			return http_content_type::IMAGE_WEBP;

		case ELibHvContentTypes::Multiplart_Form_Data:
			return http_content_type::MULTIPART_FORM_DATA;

		case ELibHvContentTypes::Text_CSS:
			return http_content_type::TEXT_CSS;

		case ELibHvContentTypes::Text_CSV:
			return http_content_type::TEXT_CSV;

		case ELibHvContentTypes::Text_Event_Stream:
			return http_content_type::TEXT_EVENT_STREAM;

		case ELibHvContentTypes::Text_HTML:
			return http_content_type::TEXT_HTML;

		case ELibHvContentTypes::Text_Markdown:
			return http_content_type::TEXT_MARKDOWN;

		case ELibHvContentTypes::Text_Plain:
			return http_content_type::TEXT_PLAIN;

		case ELibHvContentTypes::Video_3GPP:
			return http_content_type::VIDEO_3GPP;

		case ELibHvContentTypes::Video_ASF:
			return http_content_type::VIDEO_ASF;

		case ELibHvContentTypes::Video_AVI:
			return http_content_type::VIDEO_AVI;

		case ELibHvContentTypes::Video_FLV:
			return http_content_type::VIDEO_FLV;

		case ELibHvContentTypes::Video_M4V:
			return http_content_type::VIDEO_M4V;

		case ELibHvContentTypes::Video_MNG:
			return http_content_type::VIDEO_MNG;

		case ELibHvContentTypes::Video_MOV:
			return http_content_type::VIDEO_MOV;

		case ELibHvContentTypes::Video_MP4:
			return http_content_type::VIDEO_MP4;

		case ELibHvContentTypes::Video_MPEG:
			return http_content_type::VIDEO_MPEG;

		case ELibHvContentTypes::Video_TS:
			return http_content_type::VIDEO_TS;

		case ELibHvContentTypes::Video_WEBM:
			return http_content_type::VIDEO_WEBM;

		case ELibHvContentTypes::Video_WMV:
			return http_content_type::VIDEO_WMV;

		default:
			return http_content_type::TEXT_PLAIN;
	}
}

int32 UHttpConnectionLhv::Callback_Status_To_Code(ELibHvStatusCodes Status)
{
	const FString Status_String = UEnum::GetValueAsName(Status).ToString();
	TArray<FString> Array_Sections = UKismetStringLibrary::ParseIntoArray(Status_String, "_");
	const FString Code_String = Array_Sections.Last();
	return FCString::Atoi(*Code_String);
}

http_status UHttpConnectionLhv::Callback_Code_To_Status(int Status)
{
	return static_cast<http_status>(Status);
}

bool UHttpConnectionLhv::CancelRequest()
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	try
	{
		this->RequestPtr.get()->Cancel();
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	return true;
}

bool UHttpConnectionLhv::GetClientAddress(FString& Out_Ip, int32& Out_Port)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	try
	{
		Out_Ip = this->RequestPtr->client_addr.ip.c_str();
		Out_Port = this->RequestPtr->client_addr.port;
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	return true;
}

bool UHttpConnectionLhv::GetQueries(TMap<FString, FString>& Out_Query, FString& Out_String)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	TMap<FString, FString> Temp_Query;
	FString Query_String;

	try
	{
		const hv::QueryParams Queries = this->RequestPtr.get()->query_params;
		const size_t Count_Querries = Queries.size();
		int Index_Header = 0;

		for (const std::pair<const std::string, std::string>& Each_Query : Queries)
		{
			FString Key = Each_Query.first.c_str();
			FString Value = Each_Query.second.c_str();

			Temp_Query.Add(Key, Value);

			if (Index_Header == (Count_Querries - 1))
			{
				Query_String += Key + ":" + Value;
			}

			else
			{
				Query_String += Key + ":" + Value + "&";
				Index_Header++;
			}
		}
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	Out_Query = Temp_Query;
	Out_String = Query_String;

	return true;
}

bool UHttpConnectionLhv::FindQuery(FString& Value, FString Key)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	FString TempValue;

	try
	{
		const std::string RawString = this->RequestPtr->GetParam(TCHAR_TO_UTF8(*Key), std::string());

		if (RawString.empty())
		{
			return false;
		}

		TempValue = UTF8_TO_TCHAR(RawString.c_str());
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	Value = TempValue;
	return true;
}

bool UHttpConnectionLhv::GetBody(FString& Out_Body, int64& Out_BodySize)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	FString TempBody;
	size_t TempLenght = 0;

	try
	{
		const std::string RawString = this->RequestPtr->body;

		if (RawString.empty())
		{
			return false;
		}

		TempBody = UTF8_TO_TCHAR(RawString.c_str());
		TempLenght = RawString.size();
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	Out_Body = TempBody;
	Out_BodySize = (int64)TempLenght;

	return true;
}

bool UHttpConnectionLhv::GetPaths(FString& Out_Method, FString& Out_Scheme, FString& Out_Host, int32& Out_Port, FString& Out_Path, FString& Out_Url)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	try
	{
		Out_Port = this->RequestPtr->port;

		if (!this->RequestPtr->scheme.empty())
		{
			Out_Scheme = UTF8_TO_TCHAR(this->RequestPtr->scheme.c_str());
		}

		if (!this->RequestPtr->host.empty())
		{
			Out_Host = UTF8_TO_TCHAR(this->RequestPtr->host.c_str());
		}

		if (!this->RequestPtr->path.empty())
		{
			Out_Path = UTF8_TO_TCHAR(this->RequestPtr->path.c_str());
		}

		if (!this->RequestPtr->url.empty())
		{
			Out_Url = UTF8_TO_TCHAR(this->RequestPtr->url.c_str());
		}
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	Out_Method = this->Callback_Type_Method(this->RequestPtr->method);
	return true;
}

bool UHttpConnectionLhv::GetHeaders(TMap<FString, FString>& Out_Headers, FString& Out_String)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	FString Header_String;
	TMap<FString, FString> Temp_Headers;

	try
	{
		const http_headers Headers = this->RequestPtr->headers;
		const size_t Count_Headers = Headers.size();

		int Index_Header = 0;

		for (const std::pair<const std::string, std::string>& Each_Header : Headers)
		{
			const FString Key = UTF8_TO_TCHAR(Each_Header.first.c_str());
			const FString Value = UTF8_TO_TCHAR(Each_Header.second.c_str());

			Temp_Headers.Add(Key, Value);

			if (Index_Header == (Count_Headers - 1))
			{
				Header_String += Key + ":" + Value;
			}

			else
			{
				Header_String += Key + ":" + Value + LINE_TERMINATOR_ANSI;
				Index_Header++;
			}
		}
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	Out_Headers = Temp_Headers;
	Out_String = Header_String;

	return true;
}

bool UHttpConnectionLhv::FindHeader(FString Key, FString& Out_Value)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	if (Key.IsEmpty())
	{
		return false;
	}

	std::string Value;

	try
	{
		const http_headers Headers = this->RequestPtr->headers;

		if (Headers.size() == 0)
		{
			return false;
		}

		if (!Headers.contains(TCHAR_TO_UTF8(*Key)))
		{
			return false;
		}

		Value = Headers.at(TCHAR_TO_UTF8(*Key));

		if (Value.empty())
		{
			return false;
		}
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	Out_Value = UTF8_TO_TCHAR(Value.c_str());

	return true;
}

bool UHttpConnectionLhv::GetContentType(FString& Out_Type_String, ELibHvContentTypes& Out_Content_Type)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	this->Callback_Content_Type(Out_Content_Type, Out_Type_String, this->RequestPtr->content_type);
	return true;
}

bool UHttpConnectionLhv::GetContentLenght(int64& Out_Lenght)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	size_t ContentLeght = 0;

	try
	{
		ContentLeght = this->RequestPtr->content_length;
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	Out_Lenght = ContentLeght;
	return true;
}

bool UHttpConnectionLhv::SendString(const FString In_Response, TMap<FString, FString> In_Header, ELibHvStatusCodes StatusCode)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	int ReturnValue = 0;

	try
	{
		HttpResponse TempResponse;
		TempResponse.String(TCHAR_TO_UTF8(*In_Response));

		for (TPair<FString, FString>& EachHeader : In_Header)
		{
			TempResponse.SetHeader(TCHAR_TO_UTF8(*EachHeader.Key), TCHAR_TO_UTF8(*EachHeader.Value));
		}

		ReturnValue = ResponsePtr.get()->Begin();
		ReturnValue = ResponsePtr.get()->WriteResponse(&TempResponse);
		ReturnValue = ResponsePtr.get()->End();
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	return (ReturnValue == 0) ? true : false;
}

bool UHttpConnectionLhv::SendData(TArray<uint8> In_Bytes, TMap<FString, FString> In_Header, ELibHvStatusCodes StatusCode, bool bNoCopy)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	int ReturnValue = 0;

	try
	{
		HttpResponse TempResponse;
		TempResponse.Data(In_Bytes.GetData(), In_Bytes.Num(), bNoCopy);

		for (TPair<FString, FString>& EachHeader : In_Header)
		{
			TempResponse.SetHeader(TCHAR_TO_UTF8(*EachHeader.Key), TCHAR_TO_UTF8(*EachHeader.Value));
		}

		ReturnValue = ResponsePtr.get()->Begin();
		ReturnValue = ResponsePtr.get()->WriteResponse(&TempResponse);
		ReturnValue = ResponsePtr.get()->End();
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	return (ReturnValue == 0) ? true : false;
}

bool UHttpConnectionLhv::SendResponse(const FString In_Response, TMap<FString, FString> In_Header, ELibHvStatusCodes StatusCode, ELibHvContentTypes ContentTypes)
{
	if (this->RequestPtr == nullptr)
	{
		return false;
	}

	int ReturnValue = 0;

	try
	{
		HttpResponse TempResponse;
		TempResponse.SetContentType(this->Callback_Content_Type_Convert(ContentTypes));
		TempResponse.SetBody(TCHAR_TO_UTF8(*In_Response));

		for (TPair<FString, FString>& EachHeader : In_Header)
		{
			TempResponse.SetHeader(TCHAR_TO_UTF8(*EachHeader.Key), TCHAR_TO_UTF8(*EachHeader.Value));
		}

		ReturnValue = ResponsePtr.get()->Begin();
		ReturnValue = ResponsePtr.get()->WriteResponse(&TempResponse);
		ReturnValue = ResponsePtr.get()->End();
	}

	catch (const std::exception& Exception)
	{
		const FString ExceptionString = Exception.what();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ExceptionString);
		return false;
	}

	return (ReturnValue == 0) ? true : false;
}