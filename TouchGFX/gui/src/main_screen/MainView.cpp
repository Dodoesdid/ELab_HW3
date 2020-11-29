#include <gui/main_screen/MainView.hpp>

MainView::MainView()
{

}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::ButtonPressed1()
{
  counter = counter*10 + 1;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  // Invalidate text area, which will result in it being redrawn in next tick.
  BombCount.invalidate();
}

void MainView::ButtonPressed2()
{
  counter = counter*10 + 2;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressed3()
{
  counter = counter*10 + 3;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressed4()
{
  counter = counter*10 + 4;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressed5()
{
  counter = counter*10 + 5;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressed6()
{
  counter = counter*10 + 6;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressed7()
{
  counter = counter*10 + 7;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressed8()
{
  counter = counter*10 + 8;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressed9()
{
  counter = counter*10 + 9;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressed0()
{
  counter = counter*10;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressedC()
{
  counter = 0;

  Unicode::snprintf(BombCountBuffer, BOMBCOUNT_SIZE, "%d", counter);
  BombCount.invalidate();
}

void MainView::ButtonPressedE()
{
  presenter->saveBomb(counter);
}
