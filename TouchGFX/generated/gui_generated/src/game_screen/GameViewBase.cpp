/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/game_screen/GameViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

GameViewBase::GameViewBase() :
    buttonCallback(this, &GameViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    Background.setXY(0, 0);
    Background.setBitmap(touchgfx::Bitmap(BITMAP_WHITE_ID));

    button2_1.setXY(46, 82);
    button2_1.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_1.setXY(46, 107);
    button3_1.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_1.setXY(46, 132);
    button4_1.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_1.setXY(46, 157);
    button5_1.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_1.setXY(46, 182);
    button6_1.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_1.setXY(46, 207);
    button7_1.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_1.setXY(46, 232);
    button8_1.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_2.setXY(71, 57);
    button1_2.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_2.setXY(71, 82);
    button2_2.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_2.setXY(71, 107);
    button3_2.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_2.setXY(71, 132);
    button4_2.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_2.setXY(71, 157);
    button5_2.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_2.setXY(71, 182);
    button6_2.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_2.setXY(71, 207);
    button7_2.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_2.setXY(71, 232);
    button8_2.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_3.setXY(96, 57);
    button1_3.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_3.setXY(96, 82);
    button2_3.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_3.setXY(96, 107);
    button3_3.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_3.setXY(96, 132);
    button4_3.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_3.setXY(96, 157);
    button5_3.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_3.setXY(96, 182);
    button6_3.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_3.setXY(96, 207);
    button7_3.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_3.setXY(96, 232);
    button8_3.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_4.setXY(121, 57);
    button1_4.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_4.setXY(121, 82);
    button2_4.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_4.setXY(121, 107);
    button3_4.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_4.setXY(121, 132);
    button4_4.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_4.setXY(121, 157);
    button5_4.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_4.setXY(121, 182);
    button6_4.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_4.setXY(121, 207);
    button7_4.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_4.setXY(121, 232);
    button8_4.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_5.setXY(146, 57);
    button1_5.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_5.setXY(146, 82);
    button2_5.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_5.setXY(146, 107);
    button3_5.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_5.setXY(146, 132);
    button4_5.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_5.setXY(146, 157);
    button5_5.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_5.setXY(146, 182);
    button6_5.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_5.setXY(146, 207);
    button7_5.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_1.setXY(46, 57);
    button1_1.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));
    button1_1.setAction(buttonCallback);

    button8_5.setXY(146, 232);
    button8_5.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_6.setXY(171, 82);
    button2_6.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_6.setXY(171, 107);
    button3_6.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_6.setXY(171, 132);
    button4_6.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_6.setXY(171, 157);
    button5_6.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_6.setXY(171, 182);
    button6_6.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_6.setXY(171, 207);
    button7_6.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_6.setXY(171, 232);
    button8_6.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_7.setXY(196, 57);
    button1_7.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_7.setXY(196, 82);
    button2_7.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_7.setXY(196, 107);
    button3_7.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_7.setXY(196, 132);
    button4_7.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_7.setXY(196, 157);
    button5_7.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_7.setXY(196, 182);
    button6_7.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_7.setXY(196, 207);
    button7_7.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_7.setXY(196, 232);
    button8_7.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_8.setXY(221, 57);
    button1_8.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_8.setXY(221, 82);
    button2_8.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_8.setXY(221, 107);
    button3_8.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_8.setXY(221, 132);
    button4_8.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_8.setXY(221, 157);
    button5_8.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_8.setXY(221, 182);
    button6_8.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_8.setXY(221, 207);
    button7_8.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_8.setXY(221, 232);
    button8_8.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_9.setXY(246, 57);
    button1_9.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_9.setXY(246, 82);
    button2_9.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_9.setXY(246, 107);
    button3_9.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_9.setXY(246, 132);
    button4_9.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_9.setXY(246, 157);
    button5_9.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_9.setXY(246, 182);
    button6_9.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_9.setXY(246, 207);
    button7_9.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_9.setXY(246, 232);
    button8_9.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_10.setXY(271, 57);
    button1_10.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_10.setXY(271, 82);
    button2_10.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_10.setXY(271, 107);
    button3_10.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_10.setXY(271, 132);
    button4_10.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_10.setXY(271, 157);
    button5_10.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_10.setXY(271, 182);
    button6_10.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_10.setXY(271, 207);
    button7_10.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_6.setXY(171, 57);
    button1_6.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_10.setXY(271, 232);
    button8_10.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_11.setXY(296, 82);
    button2_11.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_11.setXY(296, 107);
    button3_11.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_11.setXY(296, 132);
    button4_11.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_11.setXY(296, 157);
    button5_11.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_11.setXY(296, 182);
    button6_11.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_11.setXY(296, 207);
    button7_11.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_11.setXY(296, 232);
    button8_11.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_12.setXY(321, 57);
    button1_12.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_12.setXY(321, 82);
    button2_12.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_12.setXY(321, 107);
    button3_12.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_12.setXY(321, 132);
    button4_12.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_12.setXY(321, 157);
    button5_12.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_12.setXY(321, 182);
    button6_12.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_12.setXY(321, 207);
    button7_12.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_12.setXY(321, 232);
    button8_12.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_13.setXY(346, 57);
    button1_13.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_13.setXY(346, 82);
    button2_13.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_13.setXY(346, 107);
    button3_13.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_13.setXY(346, 132);
    button4_13.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_13.setXY(346, 157);
    button5_13.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_13.setXY(346, 182);
    button6_13.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_13.setXY(346, 207);
    button7_13.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_13.setXY(346, 232);
    button8_13.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_14.setXY(371, 57);
    button1_14.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_14.setXY(371, 82);
    button2_14.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_14.setXY(371, 107);
    button3_14.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_14.setXY(371, 132);
    button4_14.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_14.setXY(371, 157);
    button5_14.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_14.setXY(371, 182);
    button6_14.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_14.setXY(371, 207);
    button7_14.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_14.setXY(371, 232);
    button8_14.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_15.setXY(396, 57);
    button1_15.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button2_15.setXY(396, 82);
    button2_15.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button3_15.setXY(396, 107);
    button3_15.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button4_15.setXY(396, 132);
    button4_15.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button5_15.setXY(396, 157);
    button5_15.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button6_15.setXY(396, 182);
    button6_15.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button7_15.setXY(396, 207);
    button7_15.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button1_11.setXY(296, 57);
    button1_11.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    button8_15.setXY(396, 232);
    button8_15.setBitmaps(touchgfx::Bitmap(BITMAP_TEN_ID), touchgfx::Bitmap(BITMAP_ZERO_ID));

    TotalBomb.setPosition(29, 17, 62, 25);
    TotalBomb.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    TotalBomb.setLinespacing(0);
    Unicode::snprintf(TotalBombBuffer, TOTALBOMB_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID20).getText());
    TotalBomb.setWildcard(TotalBombBuffer);
    TotalBomb.setTypedText(touchgfx::TypedText(T_SINGLEUSEID17));

    Result.setPosition(189, 17, 69, 25);
    Result.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    Result.setLinespacing(0);
    Result.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));

    Clock.setPosition(358, 17, 92, 25);
    Clock.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    Clock.setLinespacing(0);
    touchgfx::Unicode::snprintf(ClockBuffer1, CLOCKBUFFER1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID22).getText());
    Clock.setWildcard1(ClockBuffer1);
    touchgfx::Unicode::snprintf(ClockBuffer2, CLOCKBUFFER2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID23).getText());
    Clock.setWildcard2(ClockBuffer2);
    Clock.setTypedText(touchgfx::TypedText(T_SINGLEUSEID21));

    add(__background);
    add(Background);
    add(button2_1);
    add(button3_1);
    add(button4_1);
    add(button5_1);
    add(button6_1);
    add(button7_1);
    add(button8_1);
    add(button1_2);
    add(button2_2);
    add(button3_2);
    add(button4_2);
    add(button5_2);
    add(button6_2);
    add(button7_2);
    add(button8_2);
    add(button1_3);
    add(button2_3);
    add(button3_3);
    add(button4_3);
    add(button5_3);
    add(button6_3);
    add(button7_3);
    add(button8_3);
    add(button1_4);
    add(button2_4);
    add(button3_4);
    add(button4_4);
    add(button5_4);
    add(button6_4);
    add(button7_4);
    add(button8_4);
    add(button1_5);
    add(button2_5);
    add(button3_5);
    add(button4_5);
    add(button5_5);
    add(button6_5);
    add(button7_5);
    add(button1_1);
    add(button8_5);
    add(button2_6);
    add(button3_6);
    add(button4_6);
    add(button5_6);
    add(button6_6);
    add(button7_6);
    add(button8_6);
    add(button1_7);
    add(button2_7);
    add(button3_7);
    add(button4_7);
    add(button5_7);
    add(button6_7);
    add(button7_7);
    add(button8_7);
    add(button1_8);
    add(button2_8);
    add(button3_8);
    add(button4_8);
    add(button5_8);
    add(button6_8);
    add(button7_8);
    add(button8_8);
    add(button1_9);
    add(button2_9);
    add(button3_9);
    add(button4_9);
    add(button5_9);
    add(button6_9);
    add(button7_9);
    add(button8_9);
    add(button1_10);
    add(button2_10);
    add(button3_10);
    add(button4_10);
    add(button5_10);
    add(button6_10);
    add(button7_10);
    add(button1_6);
    add(button8_10);
    add(button2_11);
    add(button3_11);
    add(button4_11);
    add(button5_11);
    add(button6_11);
    add(button7_11);
    add(button8_11);
    add(button1_12);
    add(button2_12);
    add(button3_12);
    add(button4_12);
    add(button5_12);
    add(button6_12);
    add(button7_12);
    add(button8_12);
    add(button1_13);
    add(button2_13);
    add(button3_13);
    add(button4_13);
    add(button5_13);
    add(button6_13);
    add(button7_13);
    add(button8_13);
    add(button1_14);
    add(button2_14);
    add(button3_14);
    add(button4_14);
    add(button5_14);
    add(button6_14);
    add(button7_14);
    add(button8_14);
    add(button1_15);
    add(button2_15);
    add(button3_15);
    add(button4_15);
    add(button5_15);
    add(button6_15);
    add(button7_15);
    add(button1_11);
    add(button8_15);
    add(TotalBomb);
    add(Result);
    add(Clock);
}

void GameViewBase::setupScreen()
{

}

void GameViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1_1)
    {
        //b1_1pressed
        //When button1_1 clicked call virtual function
        //Call b1_1pressed
        b1_1pressed();
    }
}
