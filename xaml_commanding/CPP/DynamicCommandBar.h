//
// DynamicCommandBar.h
// Declaration of the DynamicCommandBar class.
//

#pragma once

#include <list>
#include <queue>
#include <stack>
#include <tuple>

using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;

namespace Commanding
{
	public ref class DynamicCommandBar sealed : public CommandBar
	{
	protected:
		virtual void OnApplyTemplate() override;
		virtual Size MeasureOverride(Size desiredSize) override;

	public:
		static property DependencyProperty^ ContentMinWidthProperty
		{
			Windows::UI::Xaml::DependencyProperty^ get();
		}

		property double ContentMinWidth
		{
			double get()
			{
				return safe_cast<double>(GetValue(ContentMinWidthProperty));
			}

			void set(double value)
			{
				SetValue(ContentMinWidthProperty, (Object^)value);
			}
		}

	private:
		static DependencyProperty^ _contentMinWidthProperty;
		Button^ _moreButton;

		// Store the item, the width before moving, if it is a separator, and if it appears in the overflow
		std::stack<std::tuple<ICommandBarElement^, double>> overflow = { };
		std::queue<std::tuple<ICommandBarElement^, double>> separatorQueue = { };
		double separatorQueueWidth = 0.0;
	};
}
