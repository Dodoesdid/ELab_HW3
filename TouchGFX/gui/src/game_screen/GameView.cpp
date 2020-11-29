#include <gui/game_screen/GameView.hpp>

GameView::GameView()
{

}

void GameView::setupScreen()
{
    GameViewBase::setupScreen();
}

void GameView::tearDownScreen()
{
    GameViewBase::tearDownScreen();
}

void GameView::handleTickEvent()
{
  tickCount++;

  if(tickCount == 60)
  {
    sec++;
    if(sec == 60)
    {
      min++;
      sec=0;
    }

    Unicode::snprintf(ClockBuffer1, CLOCKBUFFER1_SIZE, "%02d", min);
    Unicode::snprintf(ClockBuffer2, CLOCKBUFFER2_SIZE, "%02d", sec);

    Clock.invalidate();

    tickCount = 0;
  }
}
