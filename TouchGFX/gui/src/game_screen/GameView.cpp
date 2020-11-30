#include <gui/game_screen/GameView.hpp>
#include "BitmapDatabase.hpp"
#include <stdlib.h>
//#include "stm32f7xx_hal.h"

int i, j, x, y, count;

GameView::GameView()
{

}

void GameView::setupScreen()
{
    GameViewBase::setupScreen();

    bomb = presenter->getBomb();
    Unicode::snprintf(TotalBombBuffer, TOTALBOMB_SIZE, "%d", bomb);

    //touchgfx_printf("%d\n", HAL_GetTick());


    // Place bomb
    for(i=0; i<bomb; i++)
    {
      // Get location
      do
      {
        x=rand()%8;
        y=rand()%15;
      }while(map[x][y] == 'x');

      // Place
      map[x][y] = 'x';
    }

    // Calculate Number
    for(i=0; i<8; i++)
    {
      for(j=0; j<15; j++)
      {
        if(j == 0)
        {
          if(map[i][j] != 'x')
          {
            if(map[i+1][j] == 'x')
              count++;
            if(map[i-1][j] == 'x')
              count++;
            if(map[i+1][j+1] == 'x')
              count++;
            if(map[i-1][j+1] == 'x')
              count++;
            if(map[i][j+1] == 'x')
              count++;

            map[i][j] = '0' + count;
            count = 0;
          }
        }
        else
        {
          if(map[i][j] != 'x')
          {
            if(map[i+1][j] == 'x')
              count++;
            if(map[i-1][j] == 'x')
              count++;
            if(map[i+1][j+1] == 'x')
              count++;
            if(map[i+1][j-1] == 'x')
              count++;
            if(map[i-1][j+1] == 'x')
              count++;
            if(map[i-1][j-1] == 'x')
              count++;
            if(map[i][j+1] == 'x')
              count++;
            if(map[i][j-1] == 'x')
              count++;

            map[i][j] = '0' + count;
            count = 0;
          }
        }
      }
    }

    // Debug map
    for(i=0; i<8; i++)
    {
      for(j=0; j<15; j++)
      {
        touchgfx_printf("%c ", map[i][j]);
      }
      touchgfx_printf("\n");
    }

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

void GameView::b1_1pressed()
{
  button1_1.setBitmaps(touchgfx::Bitmap(BITMAP_BOMB_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));
}
