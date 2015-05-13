#include "pch.h"
//#include <stdio.h>
//#include <stdarg.h>
//#include <string>
#include "DebuggingConverter.h"

using namespace Platform;
using namespace Windows::Foundation;
using namespace NavigationMenuSample::Converters;

DebuggingConverter::DebuggingConverter()
{
}

Object^ DebuggingConverter::Convert(Object^ value, TypeName targetType, Object^ parameter, String^ language)
{
	//auto _value = ((Windows::Foundation::IPropertyValue^)value)->GetDouble();
	//auto str = std::string(_value->Data());
	//tracef(value->ToString());
	return value;
}

Object^ DebuggingConverter::ConvertBack(Object^ value, TypeName targetType, Object^ parameter, String^ language)
{
	//auto _value = ((Windows::Foundation::IPropertyValue^)value)->GetDouble();
	//tracef(L"%d", value);
	return value;
}

//static void tracef(LPCTSTR lpszFormat, ...)
//{
//#ifdef _DEBUG
//	static const int BUFFERSIZE = 0x800;
//	TCHAR    lpszBuffer[BUFFERSIZE];
//	va_list  fmtList;
//
//	va_start(fmtList, lpszFormat);
//	_vstprintf_s(lpszBuffer, lpszFormat, fmtList);
//	va_end(fmtList);
//
//	::OutputDebugString(lpszBuffer);
//#endif
//}
