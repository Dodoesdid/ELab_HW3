#ifndef GAMEVIEW_HPP
#define GAMEVIEW_HPP

#include <gui_generated/game_screen/GameViewBase.hpp>
#include <gui/game_screen/GamePresenter.hpp>

class GameView : public GameViewBase
{
public:
    GameView();
    virtual ~GameView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
	int min;
	int sec;
	int tickCount;
};

#endif // GAMEVIEW_HPP
