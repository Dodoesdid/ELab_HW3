/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINVIEWBASE_HPP
#define MAINVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class MainViewBase : public touchgfx::View<MainPresenter>
{
public:
    MainViewBase();
    virtual ~MainViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void ButtonPressed1()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressed2()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressed3()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressed4()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressed5()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressed6()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressed7()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressed8()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressed9()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressed0()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressedC()
    {
        // Override and implement this function in Main
    }

    virtual void ButtonPressedE()
    {
        // Override and implement this function in Main
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image Background;
    touchgfx::TextAreaWithOneWildcard BombCount;
    touchgfx::ButtonWithLabel Button1;
    touchgfx::ButtonWithLabel Button2;
    touchgfx::ButtonWithLabel Button3;
    touchgfx::ButtonWithLabel Button0;
    touchgfx::ButtonWithLabel Button4;
    touchgfx::ButtonWithLabel Button5;
    touchgfx::ButtonWithLabel Button6;
    touchgfx::ButtonWithLabel ButtonC;
    touchgfx::ButtonWithLabel Button7;
    touchgfx::ButtonWithLabel Button8;
    touchgfx::ButtonWithLabel Button9;
    touchgfx::ButtonWithLabel ButtonE;

    /*
     * Wildcard Buffers
     */
    static const uint16_t BOMBCOUNT_SIZE = 10;
    touchgfx::Unicode::UnicodeChar BombCountBuffer[BOMBCOUNT_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // MAINVIEWBASE_HPP
