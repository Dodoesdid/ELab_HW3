#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>

class MainView : public MainViewBase
{
public:
	int counter;
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void ButtonPressed1();
    virtual void ButtonPressed2();
    virtual void ButtonPressed3();
    virtual void ButtonPressed4();
    virtual void ButtonPressed5();
    virtual void ButtonPressed6();
    virtual void ButtonPressed7();
    virtual void ButtonPressed8();
    virtual void ButtonPressed9();
    virtual void ButtonPressed0();
    virtual void ButtonPressedC();
    virtual void ButtonPressedE();
protected:
};

#endif // MAINVIEW_HPP
