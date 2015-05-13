#pragma once

#include "pch.h"

using namespace Platform;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Interop;

namespace NavigationMenuSample
{
	namespace Converters
	{
		[Windows::Foundation::Metadata::WebHostHidden]
		public ref class DebuggingConverter sealed :
			public IValueConverter
		{
		public:
			DebuggingConverter();
			virtual Object^ Convert(Object^ value, TypeName targetType, Object^ parameter, String^ language);
			virtual Object^ ConvertBack(Object^ value, TypeName targetType, Object^ parameter, String^ language);
		};
	}
}
