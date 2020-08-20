﻿#include "pch.h"
#include <winrt/Windows.UI.Xaml.Media.h>
#include "ColorSchemes.h"
#if __has_include("ColorSchemes.g.cpp")
#include "ColorSchemes.g.cpp"
#endif
#include <ObjectModel\ColorScheme.h>

using namespace winrt;
using namespace Windows::UI;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;

namespace winrt::SettingsControl::implementation
{
    ColorSchemes::ColorSchemes()
    {
        m_colorSchemeModel = winrt::make<ObjectModel::implementation::ColorSchemeModel>();
        InitializeComponent();
    }

    ObjectModel::ColorSchemeModel ColorSchemes::ColorSchemeModel()
    {
        return m_colorSchemeModel;
    }

    void ColorSchemes::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
    }

    void ColorSchemes::Background_ColorChanged(ColorPicker const& , ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().Background(event.NewColor());
    }
    void ColorSchemes::Foreground_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().Foreground(event.NewColor());
    }
    void ColorSchemes::Black_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().Black(event.NewColor());
    }
    void ColorSchemes::BrightBlack_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().BrightBlack(event.NewColor());
    }
    void ColorSchemes::Blue_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().Blue(event.NewColor());
    }
    void ColorSchemes::BrightBlue_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().BrightBlue(event.NewColor());
    }
    void ColorSchemes::Cyan_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().Cyan(event.NewColor());
    }
    void ColorSchemes::BrightCyan_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().BrightCyan(event.NewColor());
    }
    void ColorSchemes::Green_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().Green(event.NewColor());
    }
    void ColorSchemes::BrightGreen_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().BrightGreen(event.NewColor());
    }
    void ColorSchemes::Purple_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().Purple(event.NewColor());
    }
    void ColorSchemes::BrightPurple_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().BrightPurple(event.NewColor());
    }
    void ColorSchemes::Red_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().Red(event.NewColor());
    }
    void ColorSchemes::BrightRed_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().BrightRed(event.NewColor());
    }
    void ColorSchemes::White_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().White(event.NewColor());
    }
    void ColorSchemes::BrightWhite_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().BrightWhite(event.NewColor());
    }
    void ColorSchemes::Yellow_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().Yellow(event.NewColor());
    }
    void ColorSchemes::BrightYellow_ColorChanged(ColorPicker const&, ColorChangedEventArgs const& event)
    {
        m_colorSchemeModel.ColorScheme().BrightYellow(event.NewColor());
    }
}