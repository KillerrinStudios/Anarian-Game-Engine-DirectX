﻿

#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class SwapChainPanel;
                ref class MediaElement;
                ref class Grid;
                ref class StackPanel;
                ref class ListView;
                ref class AppBarButton;
                ref class TextBlock;
                ref class ProgressRing;
                ref class CommandBar;
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            ref class VisualStateGroup;
            ref class VisualState;
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                namespace Primitives {
                    ref class Popup;
                }
            }
        }
    }
}

namespace RTS
{
    partial ref class DirectXPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::SwapChainPanel^ DXSwapChainPanel;
        private: ::Windows::UI::Xaml::VisualStateGroup^ GameInfoOverlayStates;
        private: ::Windows::UI::Xaml::VisualState^ NormalState;
        private: ::Windows::UI::Xaml::VisualState^ GameInfoOverlayState;
        private: ::Windows::UI::Xaml::VisualState^ TooSmallState;
        private: ::Windows::UI::Xaml::VisualState^ NotTooSmallState;
        private: ::Windows::UI::Xaml::Controls::MediaElement^ GameMediaPlayer;
        private: ::Windows::UI::Xaml::Controls::Grid^ TooSmallView;
        private: ::Windows::UI::Xaml::Controls::Grid^ GameInfoOverlay;
        private: ::Windows::UI::Xaml::Controls::Primitives::Popup^ StoreFlyout;
        private: ::Windows::UI::Xaml::Controls::Grid^ StoreGrid;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ StoreUnavailable;
        private: ::Windows::UI::Xaml::Controls::ListView^ ProductListView;
        private: ::Windows::UI::Xaml::Controls::AppBarButton^ Return;
        private: ::Windows::UI::Xaml::Controls::Grid^ Loading;
        private: ::Windows::UI::Xaml::Controls::Grid^ Stats;
        private: ::Windows::UI::Xaml::Controls::Grid^ LevelStart;
        private: ::Windows::UI::Xaml::Controls::Grid^ PauseData;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ TapToContinue;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ PleaseWait;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ PlayAgain;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ PauseTimeRemaining;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ PauseShots;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ PauseHits;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ PauseLevel;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ BonusTimeTitle;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ BonusTimeData;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ BonusTime;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ TimeLimit;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ Objective;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ HighScoreTitle;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ HighScoreData;
        private: ::Windows::UI::Xaml::Controls::Grid^ PurchaseUpgrade;
        private: ::Windows::UI::Xaml::Controls::AppBarButton^ BuyFull;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ PurchaseMessage;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ HighScore;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ TotalShots;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ TotalPoints;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ LevelsCompleted;
        private: ::Windows::UI::Xaml::Controls::ProgressRing^ LoadingProgress;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ GameInfoOverlayTitle;
        private: ::Windows::UI::Xaml::Controls::CommandBar^ GameAppBar;
        private: ::Windows::UI::Xaml::Controls::AppBarButton^ Reset;
        private: ::Windows::UI::Xaml::Controls::AppBarButton^ ResetLicense;
        private: ::Windows::UI::Xaml::Controls::AppBarButton^ Store;
        private: ::Windows::UI::Xaml::Controls::AppBarButton^ ChangeBackground;
        private: ::Windows::UI::Xaml::Controls::AppBarButton^ Play;
    };
}

