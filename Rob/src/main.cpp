
#include "vex.h"
#include <math.h>
using namespace vex;

vex::brain       Brain;
vex::competition Competition;
int i = 0;
int e = 0;
int x = 0;
bool y = 0;
int number = 0;
int number2 = 0;
int number1 = number;
void keyboard()
{

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




void calcClear()
{
  Brain.Screen.clearScreen();
  Brain.Screen.setFillColor(color::transparent);
  Brain.Screen.setPenColor(color::white);
  Brain.Screen.setPenWidth(3);
  Brain.Screen.setFont(mono40);
  Brain.Screen.drawRectangle(10, 5, 50, 50);
  Brain.Screen.drawRectangle(70, 5, 50, 50);
  Brain.Screen.drawRectangle(130, 5, 50, 50);
  Brain.Screen.drawRectangle(10, 65, 50, 50);
  Brain.Screen.drawRectangle(10, 125, 50, 50);
  Brain.Screen.drawRectangle(70, 65, 50, 50);
  Brain.Screen.drawRectangle(70, 125, 50, 50);
  Brain.Screen.drawRectangle(130, 125, 50, 50);
  Brain.Screen.drawRectangle(130, 65, 50, 50);
  Brain.Screen.drawRectangle(70, 185, 50, 50);
  Brain.Screen.drawRectangle(10, 185, 50, 50);
  Brain.Screen.printAt(25, 45, "7");
  Brain.Screen.printAt(85, 45, "8");
  Brain.Screen.printAt(145, 45, "9");
  Brain.Screen.printAt(25, 105, "4");
  Brain.Screen.printAt(85, 105, "5");
  Brain.Screen.printAt(145, 105, "6");
  Brain.Screen.printAt(25, 165, "1");
  Brain.Screen.printAt(85, 165, "2");
  Brain.Screen.printAt(145, 165, "3");
  Brain.Screen.printAt(85, 225, "0");
  Brain.Screen.printAt(25, 225, "C");
  Brain.Screen.drawRectangle(190, 5, 50, 50);
  Brain.Screen.drawRectangle(190, 65, 50, 50);
  Brain.Screen.drawRectangle(190, 125, 50, 50);
  Brain.Screen.printAt(205, 45, "+"); 
  Brain.Screen.printAt(205, 105, "-");
  Brain.Screen.printAt(205, 165, "=");
  Brain.Screen.drawRectangle(380, 180, 90, 50);
  Brain.Screen.setFont(mono30);
  Brain.Screen.printAt(395, 215, "Back");
  Brain.Screen.setFont(mono40);
  y = 0;
}





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





void equals()
{
  Brain.Screen.clearScreen();
  if(i == 1)
  {
    number = number1 + number2;
    y = 0;
    i = 0;
  }
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





void calculator()
{
  Brain.Screen.setFillColor(color::transparent);
  Brain.Screen.setPenColor(color::white);
  Brain.Screen.setPenWidth(3);
  Brain.Screen.setFont(mono40);
  //7
  Brain.Screen.drawRectangle(10, 5, 50, 50);
  //8
  Brain.Screen.drawRectangle(70, 5, 50, 50);
  //9
  Brain.Screen.drawRectangle(130, 5, 50, 50);
  //4
  Brain.Screen.drawRectangle(10, 65, 50, 50);
  //1
  Brain.Screen.drawRectangle(10, 125, 50, 50);
  //5
  Brain.Screen.drawRectangle(70, 65, 50, 50);
  //2
  Brain.Screen.drawRectangle(70, 125, 50, 50);
  //3
  Brain.Screen.drawRectangle(130, 125, 50, 50);
  //6
  Brain.Screen.drawRectangle(130, 65, 50, 50);
  //0
  Brain.Screen.drawRectangle(70, 185, 50, 50);
  //Clear
  Brain.Screen.drawRectangle(10, 185, 50, 50);
  Brain.Screen.printAt(25, 45, "7");
  Brain.Screen.printAt(85, 45, "8");
  Brain.Screen.printAt(145, 45, "9");
  Brain.Screen.printAt(25, 105, "4");
  Brain.Screen.printAt(85, 105, "5");
  Brain.Screen.printAt(145, 105, "6");
  Brain.Screen.printAt(25, 165, "1");
  Brain.Screen.printAt(85, 165, "2");
  Brain.Screen.printAt(145, 165, "3");
  Brain.Screen.printAt(85, 225, "0");
  Brain.Screen.printAt(25, 225, "C");
  Brain.Screen.drawRectangle(190, 5, 50, 50);
  Brain.Screen.drawRectangle(190, 65, 50, 50);
  Brain.Screen.drawRectangle(190, 125, 50, 50);
  Brain.Screen.printAt(205, 45, "+"); 
  Brain.Screen.printAt(205, 105, "-");
  Brain.Screen.printAt(205, 165, "=");
    if(y == 0)
    {
      Brain.Screen.printAt(265, 45, "%d%%", number);
    
    while(Brain.Screen.pressing())
    {
      //clear
      if((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 60) && (Brain.Screen.yPosition() > 185 && Brain.Screen.yPosition() < 235))
      {
        number = 0;
        number2 = 0;
        Brain.Screen.clearScreen();
        Brain.Screen.setFillColor(color::transparent);
        Brain.Screen.setPenColor(color::white);
        Brain.Screen.setPenWidth(3);
        Brain.Screen.setFont(mono40);
        Brain.Screen.drawRectangle(10, 5, 50, 50);
        Brain.Screen.drawRectangle(70, 5, 50, 50);
        Brain.Screen.drawRectangle(130, 5, 50, 50);
        Brain.Screen.drawRectangle(10, 65, 50, 50);
        Brain.Screen.drawRectangle(10, 125, 50, 50);
        Brain.Screen.drawRectangle(70, 65, 50, 50);
        Brain.Screen.drawRectangle(70, 125, 50, 50);
        Brain.Screen.drawRectangle(130, 125, 50, 50);
        Brain.Screen.drawRectangle(130, 65, 50, 50);
        Brain.Screen.drawRectangle(70, 185, 50, 50);
        Brain.Screen.drawRectangle(10, 185, 50, 50);
        Brain.Screen.printAt(25, 45, "7");
        Brain.Screen.printAt(85, 45, "8");
        Brain.Screen.printAt(145, 45, "9");
        Brain.Screen.printAt(25, 105, "4");
        Brain.Screen.printAt(85, 105, "5");
        Brain.Screen.printAt(145, 105, "6");
        Brain.Screen.printAt(25, 165, "1");
        Brain.Screen.printAt(85, 165, "2");
        Brain.Screen.printAt(145, 165, "3");
        Brain.Screen.printAt(85, 225, "0");
        Brain.Screen.printAt(25, 225, "C");
        Brain.Screen.drawRectangle(190, 5, 50, 50);
        Brain.Screen.drawRectangle(190, 65, 50, 50);
        Brain.Screen.drawRectangle(190, 125, 50, 50);
        Brain.Screen.printAt(205, 45, "+"); 
        Brain.Screen.printAt(205, 105, "-");
        Brain.Screen.printAt(205, 165, "=");
        Brain.Screen.drawRectangle(380, 180, 90, 50);
        Brain.Screen.setFont(mono30);
        Brain.Screen.printAt(395, 215, "Back");
        Brain.Screen.setFont(mono40);
        while(Brain.Screen.pressing())
        {
          
        }
      }
      //0
      if((Brain.Screen.xPosition() > 70 && Brain.Screen.xPosition() < 120) && (Brain.Screen.yPosition() > 185 && Brain.Screen.yPosition() < 235))
      {
        if(number < 10000000)
        {
          number = number * 10;
          while(Brain.Screen.pressing())
          {

          }
        }
      }

      //1
      if((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 60) && (Brain.Screen.yPosition() > 125 && Brain.Screen.yPosition() < 185))
      {
        if(number < 10000000)
        {
          if(number == 0)
          {
            number = 1;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number = (number*10) + 1;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }


      //2
      if((Brain.Screen.xPosition() > 70 && Brain.Screen.xPosition() < 120) && (Brain.Screen.yPosition() > 125 && Brain.Screen.yPosition() < 185))
      {
        if(number < 10000000)
        {
          if(number == 0)
          {
            number = 2;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number = (number*10) + 2;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //3
      if((Brain.Screen.xPosition() > 130 && Brain.Screen.xPosition() < 180) && (Brain.Screen.yPosition() > 125 && Brain.Screen.yPosition() < 185))
      {
        if(number < 10000000)
        {
          if(number == 0)
          {
            number = 3;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number = (number*10) + 3;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }


      //4
      if((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 60) && (Brain.Screen.yPosition() > 65 && Brain.Screen.yPosition() < 115))
      {
        if(number < 10000000)
        {
          if(number == 0)
          {
            number = 4;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number = (number*10) + 4;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //5
      if((Brain.Screen.xPosition() > 70 && Brain.Screen.xPosition() < 120) && (Brain.Screen.yPosition() > 65 && Brain.Screen.yPosition() < 115))
      {
        if(number < 10000000)
        {
          if(number == 0)
          {
            number = 5;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number = (number*10) + 5;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //6
      if((Brain.Screen.xPosition() > 130 && Brain.Screen.xPosition() < 180) && (Brain.Screen.yPosition() > 65 && Brain.Screen.yPosition() < 115))
      {
        if(number < 10000000)
        {
          if(number == 0)
          {
            number = 6;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number = (number*10) + 6;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //7
      if((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 60) && (Brain.Screen.yPosition() > 5 && Brain.Screen.yPosition() < 55))
      {
        if(number < 10000000)
        {
          if(number == 0)
          {
            number = 7;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number = (number*10) + 7;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //8
      if((Brain.Screen.xPosition() > 70 && Brain.Screen.xPosition() < 120) && (Brain.Screen.yPosition() > 5 && Brain.Screen.yPosition() < 55))
      {
        if(number < 10000000)
        {
          if(number == 0)
          {
            number = 8;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number = (number*10) + 8;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //9
      if((Brain.Screen.xPosition() > 130 && Brain.Screen.xPosition() < 180) && (Brain.Screen.yPosition() > 5 && Brain.Screen.yPosition() < 55))
      {
        if(number < 10000000)
        {
          if(number == 0)
          {
            number = 9;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number = (number*10) + 9;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }
      if((Brain.Screen.xPosition() > 380 && Brain.Screen.xPosition() < 470) && (Brain.Screen.yPosition() > 180 && Brain.Screen.yPosition() < 230))
      {
        x = 0;
      }
      //+
      if((Brain.Screen.xPosition() > 190 && Brain.Screen.xPosition() < 240) && (Brain.Screen.yPosition() > 5 && Brain.Screen.yPosition() < 55))
      {
        while(Brain.Screen.pressing())
        {

        }
        i = 1;
        y = 1;
        Brain.Screen.clearScreen();
        Brain.Screen.drawRectangle(380, 180, 90, 50);
        Brain.Screen.setFont(mono30);
        Brain.Screen.printAt(395, 215, "Back");
        Brain.Screen.setFont(mono40);
      }
      //-
      else if((Brain.Screen.xPosition() > 190 && Brain.Screen.xPosition() < 240) && (Brain.Screen.yPosition() > 65 && Brain.Screen.yPosition() < 115))
      {
        while(Brain.Screen.pressing())
        {

        }
        i = 2;
        y = 1;
        Brain.Screen.clearScreen();
        Brain.Screen.drawRectangle(380, 180, 90, 50);
        Brain.Screen.setFont(mono30);
        Brain.Screen.printAt(395, 215, "Back");
        Brain.Screen.setFont(mono40);
      }
      //*
      else if((Brain.Screen.xPosition() > 190 && Brain.Screen.xPosition() < 240) && (Brain.Screen.yPosition() > 125 && Brain.Screen.yPosition() < 175))
      {
        while(Brain.Screen.pressing())
        {

        }
        i = 3;
        y = 1;
        Brain.Screen.clearScreen();
        Brain.Screen.drawRectangle(380, 180, 90, 50);
        Brain.Screen.setFont(mono30);
        Brain.Screen.printAt(395, 215, "Back");
        Brain.Screen.setFont(mono40);
      }
      //back
    }
  }


  Brain.Screen.setFillColor(color::transparent);
  Brain.Screen.setPenColor(color::white);
  Brain.Screen.setPenWidth(3);
  Brain.Screen.setFont(mono40);
  //7
  Brain.Screen.drawRectangle(10, 5, 50, 50);
  //8
  Brain.Screen.drawRectangle(70, 5, 50, 50);
  //9
  Brain.Screen.drawRectangle(130, 5, 50, 50);
  //4
  Brain.Screen.drawRectangle(10, 65, 50, 50);
  //1
  Brain.Screen.drawRectangle(10, 125, 50, 50);
  //5
  Brain.Screen.drawRectangle(70, 65, 50, 50);
  //2
  Brain.Screen.drawRectangle(70, 125, 50, 50);
  //3
  Brain.Screen.drawRectangle(130, 125, 50, 50);
  //6
  Brain.Screen.drawRectangle(130, 65, 50, 50);
  //0
  Brain.Screen.drawRectangle(70, 185, 50, 50);
  //Clear
  Brain.Screen.drawRectangle(10, 185, 50, 50);
  Brain.Screen.printAt(25, 45, "7");
  Brain.Screen.printAt(85, 45, "8");
  Brain.Screen.printAt(145, 45, "9");
  Brain.Screen.printAt(25, 105, "4");
  Brain.Screen.printAt(85, 105, "5");
  Brain.Screen.printAt(145, 105, "6");
  Brain.Screen.printAt(25, 165, "1");
  Brain.Screen.printAt(85, 165, "2");
  Brain.Screen.printAt(145, 165, "3");
  Brain.Screen.printAt(85, 225, "0");
  Brain.Screen.printAt(25, 225, "C");
  Brain.Screen.drawRectangle(190, 5, 50, 50);
  Brain.Screen.drawRectangle(190, 65, 50, 50);
  Brain.Screen.drawRectangle(190, 125, 50, 50);
  Brain.Screen.printAt(205, 45, "+"); 
  Brain.Screen.printAt(205, 105, "-");
  Brain.Screen.printAt(205, 165, "=");





  if(y == 1)
    {
      if((Brain.Screen.xPosition() > 380 && Brain.Screen.xPosition() < 470) && (Brain.Screen.yPosition() > 180 && Brain.Screen.yPosition() < 230))
      {
        x = 0;
      }

    Brain.Screen.printAt(265, 45, "%d%%", number2);
    if(Brain.Screen.pressing())
    {
      //clear
      if((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 60) && (Brain.Screen.yPosition() > 185 && Brain.Screen.yPosition() < 235))
      {
        number = 0;
        number2 = 0;
        Brain.Screen.clearScreen();
        Brain.Screen.setFillColor(color::transparent);
        Brain.Screen.setPenColor(color::white);
        Brain.Screen.setPenWidth(3);
        Brain.Screen.setFont(mono40);
        Brain.Screen.drawRectangle(10, 5, 50, 50);
        Brain.Screen.drawRectangle(70, 5, 50, 50);
        Brain.Screen.drawRectangle(130, 5, 50, 50);
        Brain.Screen.drawRectangle(10, 65, 50, 50);
        Brain.Screen.drawRectangle(10, 125, 50, 50);
        Brain.Screen.drawRectangle(70, 65, 50, 50);
        Brain.Screen.drawRectangle(70, 125, 50, 50);
        Brain.Screen.drawRectangle(130, 125, 50, 50);
        Brain.Screen.drawRectangle(130, 65, 50, 50);
        Brain.Screen.drawRectangle(70, 185, 50, 50);
        Brain.Screen.drawRectangle(10, 185, 50, 50);
        Brain.Screen.printAt(25, 45, "7");
        Brain.Screen.printAt(85, 45, "8");
        Brain.Screen.printAt(145, 45, "9");
        Brain.Screen.printAt(25, 105, "4");
        Brain.Screen.printAt(85, 105, "5");
        Brain.Screen.printAt(145, 105, "6");
        Brain.Screen.printAt(25, 165, "1");
        Brain.Screen.printAt(85, 165, "2");
        Brain.Screen.printAt(145, 165, "3");
        Brain.Screen.printAt(85, 225, "0");
        Brain.Screen.printAt(25, 225, "C");
        Brain.Screen.drawRectangle(190, 5, 50, 50);
        Brain.Screen.drawRectangle(190, 65, 50, 50);
        Brain.Screen.drawRectangle(190, 125, 50, 50);
        Brain.Screen.printAt(205, 45, "+"); 
        Brain.Screen.printAt(205, 105, "-");
        Brain.Screen.printAt(205, 165, "=");
        Brain.Screen.drawRectangle(380, 180, 90, 50);
        Brain.Screen.setFont(mono30);
        Brain.Screen.printAt(395, 215, "Back");
        Brain.Screen.setFont(mono40);
        y = 0;
        while(Brain.Screen.pressing())
        {
          
        }
      }
      //0
      if((Brain.Screen.xPosition() > 70 && Brain.Screen.xPosition() < 120) && (Brain.Screen.yPosition() > 185 && Brain.Screen.yPosition() < 235))
      {
        if(number2 < 10000000)
        {
          number2 = number2 * 10;
          while(Brain.Screen.pressing())
          {

          }
        }
      }

      //1
      if((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 60) && (Brain.Screen.yPosition() > 125 && Brain.Screen.yPosition() < 185))
      {
        if(number2 < 10000000)
        {
          if(number2 == 0)
          {
            number2 = 1;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number2 = (number2*10) + 1;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }


      //2
      if((Brain.Screen.xPosition() > 70 && Brain.Screen.xPosition() < 120) && (Brain.Screen.yPosition() > 125 && Brain.Screen.yPosition() < 185))
      {
        if(number2 < 10000000)
        {
          if(number2 == 0)
          {
            number2 = 2;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number2 = (number2*10) + 2;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //3
      if((Brain.Screen.xPosition() > 130 && Brain.Screen.xPosition() < 180) && (Brain.Screen.yPosition() > 125 && Brain.Screen.yPosition() < 185))
      {
        if(number2 < 10000000)
        {
          if(number2 == 0)
          {
            number2 = 3;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number2 = (number2*10) + 3;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }


      //4
      if((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 60) && (Brain.Screen.yPosition() > 65 && Brain.Screen.yPosition() < 115))
      {
        if(number2 < 10000000)
        {
          if(number2 == 0)
          {
            number2 = 4;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number2 = (number2*10) + 4;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //5
      if((Brain.Screen.xPosition() > 70 && Brain.Screen.xPosition() < 120) && (Brain.Screen.yPosition() > 65 && Brain.Screen.yPosition() < 115))
      {
        if(number2 < 10000000)
        {
          if(number2 == 0)
          {
            number2 = 5;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number2 = (number2*10) + 5;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //6
      if((Brain.Screen.xPosition() > 130 && Brain.Screen.xPosition() < 180) && (Brain.Screen.yPosition() > 65 && Brain.Screen.yPosition() < 115))
      {
        if(number2 < 10000000)
        {
          if(number2 == 0)
          {
            number2 = 6;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number2 = (number2*10) + 6;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //7
      if((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 60) && (Brain.Screen.yPosition() > 5 && Brain.Screen.yPosition() < 55))
      {
        if(number2 < 10000000)
        {
          if(number2 == 0)
          {
            number2 = 7;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number2 = (number2*10) + 7;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //8
      if((Brain.Screen.xPosition() > 70 && Brain.Screen.xPosition() < 120) && (Brain.Screen.yPosition() > 5 && Brain.Screen.yPosition() < 55))
      {
        if(number2 < 10000000)
        {
          if(number2 == 0)
          {
            number2 = 8;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number2 = (number2*10) + 8;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }

      //9
      if((Brain.Screen.xPosition() > 130 && Brain.Screen.xPosition() < 180) && (Brain.Screen.yPosition() > 5 && Brain.Screen.yPosition() < 55))
      {
        if(number2 < 10000000)
        {
          if(number2 == 0)
          {
            number2 = 9;
            while(Brain.Screen.pressing())
            {
            
            }
          }
          else
          {
            number2 = (number2*10) + 9;
            while(Brain.Screen.pressing())
            {

            }
          }
        }
      }
      //=
      if((Brain.Screen.xPosition() > 190 && Brain.Screen.xPosition() < 240) && (Brain.Screen.yPosition() > 125 && Brain.Screen.yPosition() < 185))
      {
        e = 1;
      }
    }
  }


      if(e == 1)
      {
        if(i == 1)
        {
          number = number + number2;
          y = 0;
          i = 0;
          e = 0;
          number2 = 0;
        }
        else if(i == 2)
        {
          number = number - number2;
          y = 0;
          i = 0;
          e = 0;
          number2 = 0;
        }
        else if(i == 3)
        {
          number = number * number2;
          y = 0;
          i = 0;
          e = 0;
          number2 = 0;
        }
      }

    if((Brain.Screen.xPosition() > 380 && Brain.Screen.xPosition() < 470) && (Brain.Screen.yPosition() > 180 && Brain.Screen.yPosition() < 230))
    {
      x = 0;
    }
}





void calculatorScreen()
{
  while(x == 2)
  {
    calculator();

    if((Brain.Screen.xPosition() > 380 && Brain.Screen.xPosition() < 470) && (Brain.Screen.yPosition() > 180 && Brain.Screen.yPosition() < 230))
      {
        x = 0;
      }
  }
}












void rob(int r, int g, int b)
{
    Brain.Screen.setFillColor(color(black));
    Brain.Screen.setPenColor(color(b,g,r));
    Brain.Screen.setPenWidth(1);
    Brain.Screen.printAt(200,125,"in rob we trust");
    Brain.Screen.setPenColor(color(g,r,b));
    Brain.Screen.printAt(231,50,"ohio_op");
    Brain.Screen.setPenColor(color(g,b,r));
    Brain.Screen.printAt(360,200,"4112A");
    
    Brain.Screen.setPenWidth(0);
    Brain.Screen.setFillColor(color(r,g,b));
    Brain.Screen.drawRectangle(10,120,1,8);
    Brain.Screen.drawRectangle(11,116,1,6);
    Brain.Screen.drawRectangle(12,113,1,3);
    Brain.Screen.drawRectangle(13,111,1,3);
    Brain.Screen.drawRectangle(14,109,1,3);
    Brain.Screen.drawRectangle(15,107,1,2);
    Brain.Screen.drawRectangle(16,105,1,2);
    Brain.Screen.drawRectangle(17,102,1,3);
    Brain.Screen.drawRectangle(18,100,1,2);
    Brain.Screen.drawRectangle(19,98,1,2);
    Brain.Screen.drawRectangle(20,95,1,3);
    Brain.Screen.drawRectangle(21,93,1,3);
    Brain.Screen.drawRectangle(22,92,1,2);
    Brain.Screen.drawRectangle(23,87,1,6);
    Brain.Screen.drawRectangle(24,80,1,7);
    Brain.Screen.drawRectangle(25,76,1,5);
    Brain.Screen.drawRectangle(26,74,1,2);
    Brain.Screen.drawRectangle(27,65,1,9);
    Brain.Screen.drawRectangle(28,61,1,4);
    Brain.Screen.drawRectangle(29,58,1,3);
    Brain.Screen.drawRectangle(30,55,1,3);
    Brain.Screen.drawRectangle(31,53,1,3);
    Brain.Screen.drawRectangle(32,50,1,4);
    Brain.Screen.drawRectangle(33,46,1,5);
    Brain.Screen.drawRectangle(34,44,1,2);
    Brain.Screen.drawRectangle(35,43,1,2);
    Brain.Screen.drawRectangle(36,42,1,2);
    Brain.Screen.drawRectangle(37,40,1,2);
    Brain.Screen.drawRectangle(38,37,1,3);
    Brain.Screen.drawRectangle(39,36,1,2);
    Brain.Screen.drawRectangle(40,34,1,2);
    Brain.Screen.drawRectangle(41,34,1,1);
    Brain.Screen.drawRectangle(42,33,1,1);
    Brain.Screen.drawRectangle(43,32,1,1);
    Brain.Screen.drawRectangle(44,31,1,2);
    Brain.Screen.drawRectangle(45,31,1,1);
    Brain.Screen.drawRectangle(46,30,1,1);
    Brain.Screen.drawRectangle(47,29,1,2);
    Brain.Screen.drawRectangle(48,28,1,1);
    Brain.Screen.drawRectangle(49,27,1,1);
    Brain.Screen.drawRectangle(50,25,1,2);
    Brain.Screen.drawRectangle(51,25,1,1);
    Brain.Screen.drawRectangle(52,23,1,2);
    Brain.Screen.drawRectangle(53,23,1,1);
    Brain.Screen.drawRectangle(54,22,1,1);
    Brain.Screen.drawRectangle(55,21,1,2);
    Brain.Screen.drawRectangle(56,20,2,1);
    Brain.Screen.drawRectangle(58,19,2,1);
    Brain.Screen.drawRectangle(59,18,3,1);
    Brain.Screen.drawRectangle(61,17,2,1);
    Brain.Screen.drawRectangle(63,16,2,1);
    Brain.Screen.drawRectangle(65,15,2,1);
    Brain.Screen.drawRectangle(67,14,2,1);
    Brain.Screen.drawRectangle(69,13,5,1);
    Brain.Screen.drawRectangle(73,12,3,1);
    Brain.Screen.drawRectangle(76,13,6,1);
    Brain.Screen.drawRectangle(81,12,12,1);
    Brain.Screen.drawRectangle(92,11,4,1);
    Brain.Screen.drawRectangle(95,12,14,1);
    Brain.Screen.drawRectangle(108,13,7,1);
    Brain.Screen.drawRectangle(114,12,3,1);
    Brain.Screen.drawRectangle(117,13,13,1);
    Brain.Screen.drawRectangle(129,14,3,1);
    Brain.Screen.drawRectangle(132,15,4,1);
    Brain.Screen.drawRectangle(136,16,3,1);
    Brain.Screen.drawRectangle(139,17,3,1);
    Brain.Screen.drawRectangle(141,18,2,1);
    Brain.Screen.drawRectangle(143,19,3,1);
    Brain.Screen.drawRectangle(145,20,2,1);
    Brain.Screen.drawRectangle(147,21,2,1);
    Brain.Screen.drawRectangle(149,22,2,1);
    Brain.Screen.drawRectangle(151,23,2,1);
    Brain.Screen.drawRectangle(153,24,1,3);
    Brain.Screen.drawRectangle(154,26,1,2);
    Brain.Screen.drawRectangle(155,27,1,2);
    Brain.Screen.drawRectangle(156,28,1,1);
    Brain.Screen.drawRectangle(157,29,1,1);
    Brain.Screen.drawRectangle(158,29,1,2);
    Brain.Screen.drawRectangle(159,30,1,2);
    Brain.Screen.drawRectangle(160,31,1,1);
    Brain.Screen.drawRectangle(161,32,2,1);
    Brain.Screen.drawRectangle(162,33,2,1);
    Brain.Screen.drawRectangle(163,34,2,1);
    Brain.Screen.drawRectangle(164,35,2,1);
    Brain.Screen.drawRectangle(165,36,1,1);
    Brain.Screen.drawRectangle(166,37,1,1);
    Brain.Screen.drawRectangle(166,38,2,1);
    Brain.Screen.drawRectangle(167,39,2,1);
    Brain.Screen.drawRectangle(168,40,2,1);
    Brain.Screen.drawRectangle(170,41,2,1);
    Brain.Screen.drawRectangle(171,42,2,1);
    Brain.Screen.drawRectangle(173,43,2,1);
    Brain.Screen.drawRectangle(174,44,2,1);
    Brain.Screen.drawRectangle(172,45,2,1);
    Brain.Screen.drawRectangle(176,45,2,1);
    Brain.Screen.drawRectangle(174,46,4,1);
    Brain.Screen.drawRectangle(176,47,3,1);
    Brain.Screen.drawRectangle(177,48,2,1);
    Brain.Screen.drawRectangle(178,49,2,1);
    Brain.Screen.drawRectangle(179,50,2,1);
    Brain.Screen.drawRectangle(180,51,2,1);
    Brain.Screen.drawRectangle(181,52,2,1);
    Brain.Screen.drawRectangle(182,53,2,1);
    Brain.Screen.drawRectangle(183,54,2,1);
    Brain.Screen.drawRectangle(185,55,1,1);
    Brain.Screen.drawRectangle(186,56,2,1);
    Brain.Screen.drawRectangle(187,57,2,1);
    Brain.Screen.drawRectangle(188,58,2,1);
    Brain.Screen.drawRectangle(189,59,2,1);
    Brain.Screen.drawRectangle(191,60,1,1);
    Brain.Screen.drawRectangle(191,61,2,1);
    Brain.Screen.drawRectangle(193,62,1,1);
    Brain.Screen.drawRectangle(194,63,1,4);
    Brain.Screen.drawRectangle(190,65,3,1);
    Brain.Screen.drawRectangle(194,67,2,1);
    Brain.Screen.drawRectangle(196,68,2,1);
    Brain.Screen.drawRectangle(197,69,2,1);
    Brain.Screen.drawRectangle(198,70,2,1);
    Brain.Screen.drawRectangle(199,71,1,1);
    Brain.Screen.drawRectangle(200,72,1,4);
    Brain.Screen.drawRectangle(198,75,3,1);
    Brain.Screen.drawRectangle(194,74,5,1);
    Brain.Screen.drawRectangle(190,73,6,1);
    Brain.Screen.drawRectangle(195,71,1,4);
    Brain.Screen.drawRectangle(194,71,1,1);
    Brain.Screen.drawRectangle(193,70,1,1);
    Brain.Screen.drawRectangle(189,72,2,1);
    Brain.Screen.drawRectangle(191,73,1,3);
    Brain.Screen.drawRectangle(190,76,1,2);
    Brain.Screen.drawRectangle(189,77,1,2);
    Brain.Screen.drawRectangle(188,78,1,2);
    Brain.Screen.drawRectangle(185,79,4,1);
    Brain.Screen.drawRectangle(182,78,2,1);
    Brain.Screen.drawRectangle(180,77,2,1);
    Brain.Screen.drawRectangle(179,76,2,1);
    Brain.Screen.drawRectangle(176,75,3,1);
    Brain.Screen.drawRectangle(175,74,2,1);
    Brain.Screen.drawRectangle(174,73,2,1);
    Brain.Screen.drawRectangle(171,72,3,1);
    Brain.Screen.drawRectangle(171,71,1,7);
    Brain.Screen.drawRectangle(170,69,1,2);
    Brain.Screen.drawRectangle(169,67,1,3);
    Brain.Screen.drawRectangle(168,67,3,1);
    Brain.Screen.drawRectangle(166,66,3,1);
    Brain.Screen.drawRectangle(153,65,14,1);
    Brain.Screen.drawRectangle(151,64,3,1);
    Brain.Screen.drawRectangle(143,63,8,1);
    Brain.Screen.drawRectangle(136,62,8,1);
    Brain.Screen.drawRectangle(135,61,2,1);
    Brain.Screen.drawRectangle(120,60,15,1);
    Brain.Screen.drawRectangle(118,61,2,1);
    Brain.Screen.drawRectangle(115,62,4,1);
    Brain.Screen.drawRectangle(115,63,1,1);
    Brain.Screen.drawRectangle(116,65,1,3);
    Brain.Screen.drawRectangle(117,68,1,9);
    Brain.Screen.drawRectangle(116,76,1,2);
    Brain.Screen.drawRectangle(115,77,1,2);
    Brain.Screen.drawRectangle(113,78,2,1);
    Brain.Screen.drawRectangle(111,79,2,1);
    Brain.Screen.drawRectangle(110,80,1,2);
    Brain.Screen.drawRectangle(109,81,1,2);
    Brain.Screen.drawRectangle(108,82,1,2);
    Brain.Screen.drawRectangle(107,83,1,2);
    Brain.Screen.drawRectangle(106,84,1,2);
    Brain.Screen.drawRectangle(105,86,1,2);
    Brain.Screen.drawRectangle(104,87,1,2);
    Brain.Screen.drawRectangle(102,89,2,1);
    Brain.Screen.drawRectangle(102,90,1,1);
    Brain.Screen.drawRectangle(101,91,1,9);
    Brain.Screen.drawRectangle(102,94,1,6);
    Brain.Screen.drawRectangle(103,94,1,7);
    Brain.Screen.drawRectangle(104,94,1,7);
    Brain.Screen.drawRectangle(105,95,1,7);
    Brain.Screen.drawRectangle(106,95,1,7);
    Brain.Screen.drawRectangle(107,95,1,7);
    Brain.Screen.drawRectangle(108,96,1,7);
    Brain.Screen.drawRectangle(109,96,1,7);
    Brain.Screen.drawRectangle(110,96,1,7);
    Brain.Screen.drawRectangle(111,97,1,7);
    Brain.Screen.drawRectangle(112,97,1,7);
    Brain.Screen.drawRectangle(113,97,1,8);
    Brain.Screen.drawRectangle(114,97,1,8);
    Brain.Screen.drawRectangle(115,98,1,7);
    Brain.Screen.drawRectangle(116,98,1,7);
    Brain.Screen.drawRectangle(117,98,1,7);
    Brain.Screen.drawRectangle(118,98,1,8);
    Brain.Screen.drawRectangle(119,99,1,7);
    Brain.Screen.drawRectangle(120,99,1,7);
    Brain.Screen.drawRectangle(121,99,1,8);
    Brain.Screen.drawRectangle(122,99,1,8);
    Brain.Screen.drawRectangle(123,100,1,7);
    Brain.Screen.drawRectangle(124,100,1,7);
    Brain.Screen.drawRectangle(125,100,1,8);
    Brain.Screen.drawRectangle(126,100,1,8);
    Brain.Screen.drawRectangle(127,101,1,7);
    Brain.Screen.drawRectangle(128,101,1,7);
    Brain.Screen.drawRectangle(129,101,1,8);
    Brain.Screen.drawRectangle(130,102,1,7);
    Brain.Screen.drawRectangle(131,102,1,8);
    Brain.Screen.drawRectangle(132,103,1,7);
    Brain.Screen.drawRectangle(133,103,1,7);
    Brain.Screen.drawRectangle(134,103,1,7);
    Brain.Screen.drawRectangle(135,103,1,8);
    Brain.Screen.drawRectangle(136,104,1,7);
    Brain.Screen.drawRectangle(137,104,1,8);
    Brain.Screen.drawRectangle(138,105,1,7);
    Brain.Screen.drawRectangle(139,105,1,7);
    Brain.Screen.drawRectangle(140,105,1,8);
    Brain.Screen.drawRectangle(141,105,1,8);
    Brain.Screen.drawRectangle(142,106,1,7);
    Brain.Screen.drawRectangle(143,106,1,7);
    Brain.Screen.drawRectangle(144,106,1,7);
    Brain.Screen.drawRectangle(145,107,1,7);
    Brain.Screen.drawRectangle(146,107,1,7);
    Brain.Screen.drawRectangle(147,107,1,7);
    Brain.Screen.drawRectangle(148,108,1,8);
    Brain.Screen.drawRectangle(149,108,1,6);
    Brain.Screen.drawRectangle(150,108,1,5);
    Brain.Screen.drawRectangle(151,108,1,3);
    Brain.Screen.drawRectangle(152,108,1,2);
    Brain.Screen.drawRectangle(147,115,1,3);
    Brain.Screen.drawRectangle(146,117,1,3);
    Brain.Screen.drawRectangle(145,119,1,6);
    Brain.Screen.drawRectangle(144,123,1,1);
    Brain.Screen.drawRectangle(146,125,1,2);
    Brain.Screen.drawRectangle(147,126,1,1);
    Brain.Screen.drawRectangle(148,127,2,1);
    Brain.Screen.drawRectangle(149,128,2,1);
    Brain.Screen.drawRectangle(150,129,3,1);
    Brain.Screen.drawRectangle(152,130,4,1);
    Brain.Screen.drawRectangle(154,131,4,1);
    Brain.Screen.drawRectangle(157,130,2,1);
    Brain.Screen.drawRectangle(159,129,1,1);
    Brain.Screen.drawRectangle(160,127,1,2);
    Brain.Screen.drawRectangle(161,126,1,2);
    Brain.Screen.drawRectangle(162,124,1,2);
    Brain.Screen.drawRectangle(163,121,1,4);
    Brain.Screen.drawRectangle(164,120,1,2);
    Brain.Screen.drawRectangle(165,118,1,2);
    Brain.Screen.drawRectangle(166,112,1,7);
    Brain.Screen.drawRectangle(153,107,1,1);
    Brain.Screen.drawRectangle(154,106,3,1);
    Brain.Screen.drawRectangle(157,107,3,1);
    Brain.Screen.drawRectangle(160,108,3,1);
    Brain.Screen.drawRectangle(162,109,3,1);
    Brain.Screen.drawRectangle(164,109,1,2);
    Brain.Screen.drawRectangle(165,110,1,2);
    Brain.Screen.drawRectangle(165,106,1,2);
    Brain.Screen.drawRectangle(166,104,1,5);
    Brain.Screen.drawRectangle(167,105,1,2);
    Brain.Screen.drawRectangle(169,105,1,1);
    Brain.Screen.drawRectangle(166,101,1,2);
    Brain.Screen.drawRectangle(165,102,1,3);
    Brain.Screen.drawRectangle(164,103,1,3);
    Brain.Screen.drawRectangle(163,103,1,1);
    Brain.Screen.drawRectangle(162,101,1,3);
    Brain.Screen.drawRectangle(145,100,17,1);
    Brain.Screen.drawRectangle(157,101,4,1);
    Brain.Screen.drawRectangle(158,102,4,1);
    Brain.Screen.drawRectangle(161,104,1,3);
    Brain.Screen.drawRectangle(160,103,1,1);
    Brain.Screen.drawRectangle(162,105,1,2);
    Brain.Screen.drawRectangle(163,106,1,1);
    Brain.Screen.drawRectangle(158,105,3,1);
    Brain.Screen.drawRectangle(155,104,5,1);
    Brain.Screen.drawRectangle(156,103,3,1);
    Brain.Screen.drawRectangle(155,102,2,1);
    Brain.Screen.drawRectangle(154,101,2,1);
    Brain.Screen.drawRectangle(147,101,6,1);
    Brain.Screen.drawRectangle(149,102,5,1);
    Brain.Screen.drawRectangle(151,103,4,1);
    Brain.Screen.drawRectangle(152,104,1,1);
    Brain.Screen.drawRectangle(155,99,1,1);
    Brain.Screen.drawRectangle(155,99,1,1);
    Brain.Screen.drawRectangle(147,99,6,1);
    Brain.Screen.drawRectangle(149,98,2,1);
    Brain.Screen.drawRectangle(142,98,6,1);
    Brain.Screen.drawRectangle(138,99,8,1);
    Brain.Screen.drawRectangle(137,100,2,2);
    Brain.Screen.drawRectangle(140,100,3,1);
    Brain.Screen.drawRectangle(143,101,1,1);
    Brain.Screen.drawRectangle(145,101,1,1);
    Brain.Screen.drawRectangle(167,114,1,5);
    Brain.Screen.drawRectangle(168,112,1,2);
    Brain.Screen.drawRectangle(169,111,1,1);
    Brain.Screen.drawRectangle(170,110,2,1);
    Brain.Screen.drawRectangle(171,109,1,1);
    Brain.Screen.drawRectangle(172,107,1,2);
    Brain.Screen.drawRectangle(173,109,2,1);
    Brain.Screen.drawRectangle(173,106,1,2);
    Brain.Screen.drawRectangle(174,105,2,4);
    Brain.Screen.drawRectangle(174,96,1,9);
    Brain.Screen.drawRectangle(173,86,1,10);
    Brain.Screen.drawRectangle(172,78,1,8);
    Brain.Screen.drawRectangle(168,118,1,3);
    Brain.Screen.drawRectangle(169,120,1,3);
    Brain.Screen.drawRectangle(170,123,1,4);
    Brain.Screen.drawRectangle(171,125,1,3);
    Brain.Screen.drawRectangle(172,127,1,4);
    Brain.Screen.drawRectangle(173,129,1,4);
    Brain.Screen.drawRectangle(172,129,5,1);
    Brain.Screen.drawRectangle(176,128,1,2);
    Brain.Screen.drawRectangle(177,127,1,2);
    Brain.Screen.drawRectangle(178,125,1,2);
    Brain.Screen.drawRectangle(179,122,1,3);
    Brain.Screen.drawRectangle(180,118,1,4);
    Brain.Screen.drawRectangle(179,117,1,1);
    Brain.Screen.drawRectangle(177,116,3,1);
    Brain.Screen.drawRectangle(170,115,8,1);
    Brain.Screen.drawRectangle(169,116,2,1);
    Brain.Screen.drawRectangle(168,117,1,1);
    Brain.Screen.drawRectangle(174,133,1,3);
    Brain.Screen.drawRectangle(175,135,1,4);
    Brain.Screen.drawRectangle(176,138,1,3);
    Brain.Screen.drawRectangle(177,141,1,3);
    Brain.Screen.drawRectangle(178,143,1,5);
    Brain.Screen.drawRectangle(177,148,1,3);
    Brain.Screen.drawRectangle(176,150,1,3);
    Brain.Screen.drawRectangle(175,152,1,2);
    Brain.Screen.drawRectangle(174,153,1,2);
    Brain.Screen.drawRectangle(167,154,8,1);
    Brain.Screen.drawRectangle(165,153,2,1);
    Brain.Screen.drawRectangle(162,152,4,1);
    Brain.Screen.drawRectangle(162,151,1,3);
    Brain.Screen.drawRectangle(163,151,1,6);
    Brain.Screen.drawRectangle(166,151,3,1);
    Brain.Screen.drawRectangle(165,150,4,1);
    Brain.Screen.drawRectangle(167,149,2,1);
    Brain.Screen.drawRectangle(163,149,2,1);
    Brain.Screen.drawRectangle(162,148,2,1);
    Brain.Screen.drawRectangle(166,148,2,1);
    Brain.Screen.drawRectangle(162,147,4,1);
    Brain.Screen.drawRectangle(150,146,12,1);
    Brain.Screen.drawRectangle(149,145,2,1);
    Brain.Screen.drawRectangle(148,144,2,1);
    Brain.Screen.drawRectangle(148,139,1,6);
    Brain.Screen.drawRectangle(149,137,1,2);
    Brain.Screen.drawRectangle(150,135,1,2);
    Brain.Screen.drawRectangle(151,134,1,1);
    Brain.Screen.drawRectangle(152,133,2,1);
    Brain.Screen.drawRectangle(153,132,2,1);
    Brain.Screen.drawRectangle(162,157,1,4);
    Brain.Screen.drawRectangle(161,155,1,1);
    Brain.Screen.drawRectangle(160,156,1,1);
    Brain.Screen.drawRectangle(159,157,1,1);
    Brain.Screen.drawRectangle(161,160,1,3);
    Brain.Screen.drawRectangle(160,160,1,5);
    Brain.Screen.drawRectangle(157,160,6,1);
    Brain.Screen.drawRectangle(148,159,10,1);
    Brain.Screen.drawRectangle(145,160,4,1);
    Brain.Screen.drawRectangle(148,155,1,2);
    Brain.Screen.drawRectangle(144,155,1,1);
    Brain.Screen.drawRectangle(145,156,1,1);
    Brain.Screen.drawRectangle(146,157,1,1);
    Brain.Screen.drawRectangle(142,159,1,1);
    Brain.Screen.drawRectangle(149,156,1,1);
    Brain.Screen.drawRectangle(150,155,1,1);
    Brain.Screen.drawRectangle(151,156,1,2);
    Brain.Screen.drawRectangle(152,154,1,2);
    Brain.Screen.drawRectangle(153,156,1,1);
    Brain.Screen.drawRectangle(155,157,1,1);
    Brain.Screen.drawRectangle(156,152,1,5);
    Brain.Screen.drawRectangle(154,152,3,1);
    Brain.Screen.drawRectangle(158,152,2,1);
    Brain.Screen.drawRectangle(144,161,2,1);
    Brain.Screen.drawRectangle(143,162,2,1);
    Brain.Screen.drawRectangle(142,163,1,2);
    Brain.Screen.drawRectangle(141,164,1,3);
    Brain.Screen.drawRectangle(140,165,1,4);
    Brain.Screen.drawRectangle(139,166,1,2);
    Brain.Screen.drawRectangle(139,166,15,1);
    Brain.Screen.drawRectangle(145,165,10,1);
    Brain.Screen.drawRectangle(148,164,7,1);
    Brain.Screen.drawRectangle(148,167,6,1);
    Brain.Screen.drawRectangle(153,168,4,1);
    Brain.Screen.drawRectangle(156,167,2,1);
    Brain.Screen.drawRectangle(158,166,1,1);
    Brain.Screen.drawRectangle(159,164,1,2);
    Brain.Screen.drawRectangle(154,169,2,1);
    Brain.Screen.drawRectangle(155,170,2,1);
    Brain.Screen.drawRectangle(156,170,1,3);
    Brain.Screen.drawRectangle(157,172,1,4);
    Brain.Screen.drawRectangle(154,175,4,1);
    Brain.Screen.drawRectangle(155,176,2,1);
    Brain.Screen.drawRectangle(151,174,3,1);
    Brain.Screen.drawRectangle(149,173,3,1);
    Brain.Screen.drawRectangle(146,172,3,1);
    Brain.Screen.drawRectangle(144,171,3,1);
    Brain.Screen.drawRectangle(143,170,2,1);
    Brain.Screen.drawRectangle(141,169,2,1);
    Brain.Screen.drawRectangle(140,168,1,1);
    Brain.Screen.drawRectangle(154,177,1,2);
    Brain.Screen.drawRectangle(153,178,1,2);
    Brain.Screen.drawRectangle(152,179,1,15);
    Brain.Screen.drawRectangle(152,177,1,1);
    Brain.Screen.drawRectangle(150,178,1,1);
    Brain.Screen.drawRectangle(151,181,1,1);
    Brain.Screen.drawRectangle(153,188,1,1);
    Brain.Screen.drawRectangle(148,181,1,2);
    Brain.Screen.drawRectangle(148,185,1,1);
    Brain.Screen.drawRectangle(149,187,1,1);
    Brain.Screen.drawRectangle(145,181,1,2);
    Brain.Screen.drawRectangle(144,182,1,1);
    Brain.Screen.drawRectangle(145,184,1,1);
    Brain.Screen.drawRectangle(142,185,1,2);
    Brain.Screen.drawRectangle(144,187,1,3);
    Brain.Screen.drawRectangle(143,189,1,3);
    Brain.Screen.drawRectangle(145,188,1,2);
    Brain.Screen.drawRectangle(147,188,1,2);
    Brain.Screen.drawRectangle(148,190,1,2);
    Brain.Screen.drawRectangle(150,190,1,2);
    Brain.Screen.drawRectangle(151,192,1,7);
    Brain.Screen.drawRectangle(142,188,1,1);
    Brain.Screen.drawRectangle(140,185,1,1);
    Brain.Screen.drawRectangle(139,186,1,4);
    Brain.Screen.drawRectangle(138,188,1,2);
    Brain.Screen.drawRectangle(140,189,1,1);
    Brain.Screen.drawRectangle(140,191,3,1);
    Brain.Screen.drawRectangle(141,192,2,1);
    Brain.Screen.drawRectangle(142,193,2,1);
    Brain.Screen.drawRectangle(143,194,2,1);
    Brain.Screen.drawRectangle(144,195,1,1);
    Brain.Screen.drawRectangle(145,196,1,1);
    Brain.Screen.drawRectangle(146,192,1,2);
    Brain.Screen.drawRectangle(147,193,1,1);
    Brain.Screen.drawRectangle(149,194,1,3);
    Brain.Screen.drawRectangle(147,196,1,4);
    Brain.Screen.drawRectangle(147,197,2,1);
    Brain.Screen.drawRectangle(136,183,1,5);
    Brain.Screen.drawRectangle(135,181,1,2);
    Brain.Screen.drawRectangle(134,181,1,1);
    Brain.Screen.drawRectangle(134,183,1,2);
    Brain.Screen.drawRectangle(133,184,1,2);
    Brain.Screen.drawRectangle(135,185,1,2);
    Brain.Screen.drawRectangle(134,187,1,1);
    Brain.Screen.drawRectangle(132,186,1,1);
    Brain.Screen.drawRectangle(132,188,1,2);
    Brain.Screen.drawRectangle(132,189,2,1);
    Brain.Screen.drawRectangle(135,190,1,4);
    Brain.Screen.drawRectangle(137,190,1,2);
    Brain.Screen.drawRectangle(136,192,1,1);
    Brain.Screen.drawRectangle(137,193,1,1);
    Brain.Screen.drawRectangle(138,191,1,7);
    Brain.Screen.drawRectangle(137,196,1,1);
    Brain.Screen.drawRectangle(135,195,2,1);
    Brain.Screen.drawRectangle(134,194,1,1);
    Brain.Screen.drawRectangle(133,196,2,1);
    Brain.Screen.drawRectangle(135,197,2,1);
    Brain.Screen.drawRectangle(136,198,1,1);
    Brain.Screen.drawRectangle(134,198,1,1);
    Brain.Screen.drawRectangle(132,198,1,2);
    Brain.Screen.drawRectangle(140,193,1,4);
    Brain.Screen.drawRectangle(141,194,1,1);
    Brain.Screen.drawRectangle(142,196,1,1);
    Brain.Screen.drawRectangle(143,197,2,2);
    Brain.Screen.drawRectangle(144,199,2,2);
    Brain.Screen.drawRectangle(140,198,2,1);
    Brain.Screen.drawRectangle(139,199,4,1);
    Brain.Screen.drawRectangle(141,200,2,1);
    Brain.Screen.drawRectangle(141,201,1,1);
    Brain.Screen.drawRectangle(143,201,1,1);
    Brain.Screen.drawRectangle(135,200,3,1);
    Brain.Screen.drawRectangle(137,201,3,1);
    Brain.Screen.drawRectangle(132,177,1,1);
    Brain.Screen.drawRectangle(136,168,1,1);
    Brain.Screen.drawRectangle(150,198,1,2);
    Brain.Screen.drawRectangle(149,199,1,2);
    Brain.Screen.drawRectangle(148,200,1,2);
    Brain.Screen.drawRectangle(145,201,4,1);
    Brain.Screen.drawRectangle(144,202,3,1);
    Brain.Screen.drawRectangle(135,203,10,1);
    Brain.Screen.drawRectangle(140,202,1,1);
    Brain.Screen.drawRectangle(142,202,1,1);
    Brain.Screen.drawRectangle(132,202,3,1);
    Brain.Screen.drawRectangle(130,201,3,1);
    Brain.Screen.drawRectangle(127,200,5,1);
    Brain.Screen.drawRectangle(124,195,1,1);
    Brain.Screen.drawRectangle(125,196,2,1);
    Brain.Screen.drawRectangle(126,197,2,1);
    Brain.Screen.drawRectangle(127,198,2,1);
    Brain.Screen.drawRectangle(128,196,1,4);
    Brain.Screen.drawRectangle(130,199,1,1);
    Brain.Screen.drawRectangle(107,201,21,1);
    Brain.Screen.drawRectangle(104,202,4,1);
    Brain.Screen.drawRectangle(101,203,4,1);
    Brain.Screen.drawRectangle(99,204,2,1);
    Brain.Screen.drawRectangle(98,205,1,1);
    Brain.Screen.drawRectangle(95,206,3,1);
    Brain.Screen.drawRectangle(93,207,3,1);
    Brain.Screen.drawRectangle(90,208,4,1);
    Brain.Screen.drawRectangle(85,209,6,1);
    Brain.Screen.drawRectangle(11,128,1,3);
    Brain.Screen.drawRectangle(12,128,1,1);
    Brain.Screen.drawRectangle(12,131,1,2);
    Brain.Screen.drawRectangle(13,133,2,1);
    Brain.Screen.drawRectangle(14,134,3,1);
    Brain.Screen.drawRectangle(16,135,6,1);
    Brain.Screen.drawRectangle(19,134,1,1);
    Brain.Screen.drawRectangle(20,132,1,7);
    Brain.Screen.drawRectangle(19,138,1,3);
    Brain.Screen.drawRectangle(18,140,1,4);
    Brain.Screen.drawRectangle(17,143,1,2);
    Brain.Screen.drawRectangle(16,144,1,3);
    Brain.Screen.drawRectangle(15,146,1,3);
    Brain.Screen.drawRectangle(14,148,1,4);
    Brain.Screen.drawRectangle(21,130,1,7);
    Brain.Screen.drawRectangle(20,132,4,1);
    Brain.Screen.drawRectangle(23,133,2,1);
    Brain.Screen.drawRectangle(24,134,1,1);
    Brain.Screen.drawRectangle(25,135,1,1);
    Brain.Screen.drawRectangle(26,136,2,1);
    Brain.Screen.drawRectangle(27,137,5,1);
    Brain.Screen.drawRectangle(31,136,5,1);
    Brain.Screen.drawRectangle(35,135,5,1);
    Brain.Screen.drawRectangle(39,132,1,1);
    Brain.Screen.drawRectangle(40,132,1,3);
    Brain.Screen.drawRectangle(41,130,1,2);
    Brain.Screen.drawRectangle(42,130,1,1);
    Brain.Screen.drawRectangle(43,129,3,1);
    Brain.Screen.drawRectangle(45,128,1,1);
    Brain.Screen.drawRectangle(45,125,1,2);
    Brain.Screen.drawRectangle(46,126,1,2);
    Brain.Screen.drawRectangle(47,125,2,1);
    Brain.Screen.drawRectangle(46,122,2,2);
    Brain.Screen.drawRectangle(46,122,3,1);
    Brain.Screen.drawRectangle(48,121,3,1);
    Brain.Screen.drawRectangle(48,119,3,1);
    Brain.Screen.drawRectangle(50,118,1,4);
    Brain.Screen.drawRectangle(49,117,1,1);
    Brain.Screen.drawRectangle(50,116,4,1);
    Brain.Screen.drawRectangle(53,117,2,1);
    Brain.Screen.drawRectangle(53,117,2,1);
    Brain.Screen.drawRectangle(54,117,1,3);
    Brain.Screen.drawRectangle(55,120,1,2);
    Brain.Screen.drawRectangle(56,122,1,2);
    Brain.Screen.drawRectangle(57,123,1,2);
    Brain.Screen.drawRectangle(58,124,1,2);
    Brain.Screen.drawRectangle(59,126,1,2);
    Brain.Screen.drawRectangle(60,127,1,1);
    Brain.Screen.drawRectangle(61,128,2,1);
    Brain.Screen.drawRectangle(62,129,3,1);
    Brain.Screen.drawRectangle(65,130,2,1);
    Brain.Screen.drawRectangle(67,131,3,1);
    Brain.Screen.drawRectangle(70,132,4,1);
    Brain.Screen.drawRectangle(73,131,4,1);
    Brain.Screen.drawRectangle(76,130,2,1);
    Brain.Screen.drawRectangle(77,129,2,1);
    Brain.Screen.drawRectangle(78,122,1,8);
    Brain.Screen.drawRectangle(79,121,1,2);
    Brain.Screen.drawRectangle(80,120,1,2);
    Brain.Screen.drawRectangle(81,119,1,2);
    Brain.Screen.drawRectangle(81,110,1,8);
    Brain.Screen.drawRectangle(81,108,2,1);
    Brain.Screen.drawRectangle(81,103,1,6);
    Brain.Screen.drawRectangle(80,95,1,4);
    Brain.Screen.drawRectangle(79,91,1,4);
    Brain.Screen.drawRectangle(78,91,1,1);
    Brain.Screen.drawRectangle(77,90,18,1);
    Brain.Screen.drawRectangle(76,89,16,1);
    Brain.Screen.drawRectangle(75,88,13,1);
    Brain.Screen.drawRectangle(73,87,11,1);
    Brain.Screen.drawRectangle(71,86,3,1);
    Brain.Screen.drawRectangle(67,85,4,1);
    Brain.Screen.drawRectangle(62,84,6,1);
    Brain.Screen.drawRectangle(60,85,3,1);
    Brain.Screen.drawRectangle(59,86,1,1);
    Brain.Screen.drawRectangle(58,86,1,2);
    Brain.Screen.drawRectangle(57,87,1,2);
    Brain.Screen.drawRectangle(56,88,1,2);
    Brain.Screen.drawRectangle(55,89,1,2);
    Brain.Screen.drawRectangle(54,90,1,3);
    Brain.Screen.drawRectangle(53,92,1,3);
    Brain.Screen.drawRectangle(52,94,1,4);
    Brain.Screen.drawRectangle(51,97,1,1);
    Brain.Screen.drawRectangle(51,99,2,1);
    Brain.Screen.drawRectangle(50,105,2,1);
    Brain.Screen.drawRectangle(51,99,1,17);
    Brain.Screen.drawRectangle(52,115,1,1);
    Brain.Screen.drawRectangle(61,89,1,1);
    Brain.Screen.drawRectangle(59,90,2,1);
    Brain.Screen.drawRectangle(58,91,2,1);
    Brain.Screen.drawRectangle(58,91,1,3);
    Brain.Screen.drawRectangle(57,94,1,3);
    Brain.Screen.drawRectangle(56,96,1,3);
    Brain.Screen.drawRectangle(55,98,1,5);
    Brain.Screen.drawRectangle(55,98,1,5);
    Brain.Screen.drawRectangle(54,102,1,11);
    Brain.Screen.drawRectangle(55,112,1,5);
    Brain.Screen.drawRectangle(56,116,1,2);
    Brain.Screen.drawRectangle(57,118,1,1);
    Brain.Screen.drawRectangle(58,119,1,1);
    Brain.Screen.drawRectangle(59,119,1,2);
    Brain.Screen.drawRectangle(60,120,1,2);
    Brain.Screen.drawRectangle(61,121,1,2);
    Brain.Screen.drawRectangle(56,105,1,8);
    Brain.Screen.drawRectangle(57,104,1,1);
    Brain.Screen.drawRectangle(58,102,1,2);
    Brain.Screen.drawRectangle(59,100,1,3);
    Brain.Screen.drawRectangle(60,97,1,3);
    Brain.Screen.drawRectangle(60,97,2,1);
    Brain.Screen.drawRectangle(62,96,2,1);
    Brain.Screen.drawRectangle(63,95,2,1);
    Brain.Screen.drawRectangle(64,94,2,1);
    Brain.Screen.drawRectangle(69,89,2,1);
    Brain.Screen.drawRectangle(70,90,2,1);
    Brain.Screen.drawRectangle(71,91,1,1);
    Brain.Screen.drawRectangle(72,92,2,1);
    Brain.Screen.drawRectangle(73,92,1,4);
    Brain.Screen.drawRectangle(74,95,1,6);
    Brain.Screen.drawRectangle(73,100,1,4);
    Brain.Screen.drawRectangle(69,95,3,1);
    Brain.Screen.drawRectangle(68,96,2,1);
    Brain.Screen.drawRectangle(67,97,2,1);
    Brain.Screen.drawRectangle(66,98,1,1);
    Brain.Screen.drawRectangle(65,99,1,1);
    Brain.Screen.drawRectangle(64,100,1,2);
    Brain.Screen.drawRectangle(63,101,1,2);
    Brain.Screen.drawRectangle(62,102,1,2);
    Brain.Screen.drawRectangle(61,104,1,2);
    Brain.Screen.drawRectangle(60,105,1,2);
    Brain.Screen.drawRectangle(59,107,1,5);
    Brain.Screen.drawRectangle(60,111,2,1);
    Brain.Screen.drawRectangle(61,112,2,1);
    Brain.Screen.drawRectangle(62,113,1,1);
    Brain.Screen.drawRectangle(63,114,4,1);
    Brain.Screen.drawRectangle(66,115,4,1);
    Brain.Screen.drawRectangle(69,116,2,1);
    Brain.Screen.drawRectangle(71,117,3,1);
    Brain.Screen.drawRectangle(73,118,2,1);
    Brain.Screen.drawRectangle(74,119,3,1);
    Brain.Screen.drawRectangle(76,116,1,4);
    Brain.Screen.drawRectangle(74,113,2,1);
    Brain.Screen.drawRectangle(75,109,1,8);
    Brain.Screen.drawRectangle(73,109,4,1);
    Brain.Screen.drawRectangle(76,108,1,1);
    Brain.Screen.drawRectangle(71,110,2,1);
    Brain.Screen.drawRectangle(69,111,2,1);
    Brain.Screen.drawRectangle(69,109,1,3);
    Brain.Screen.drawRectangle(70,107,1,2);
    Brain.Screen.drawRectangle(71,106,1,2);
    Brain.Screen.drawRectangle(72,102,1,4);
    Brain.Screen.drawRectangle(71,102,1,2);
    Brain.Screen.drawRectangle(69,103,2,1);
    Brain.Screen.drawRectangle(67,104,2,1);
    Brain.Screen.drawRectangle(65,105,3,1);
    Brain.Screen.drawRectangle(65,106,1,1);
    Brain.Screen.drawRectangle(64,106,1,2);
    Brain.Screen.drawRectangle(63,107,1,2);
    Brain.Screen.drawRectangle(62,10,1,2);
    Brain.Screen.drawRectangle(82,91,17,1);
    Brain.Screen.drawRectangle(85,92,17,1);
    Brain.Screen.drawRectangle(86,93,16,1);
    Brain.Screen.drawRectangle(92,94,13,1);
    Brain.Screen.drawRectangle(94,95,10,1);
    Brain.Screen.drawRectangle(96,96,13,1);
    Brain.Screen.drawRectangle(98,97,13,1);
    Brain.Screen.drawRectangle(100,98,13,1);
    Brain.Screen.drawRectangle(82,90,2,1);
    Brain.Screen.drawRectangle(83,92,1,2);
    Brain.Screen.drawRectangle(84,93,1,2);
    Brain.Screen.drawRectangle(85,94,1,3);
    Brain.Screen.drawRectangle(86,97,1,3);
    Brain.Screen.drawRectangle(87,99,1,2);
    Brain.Screen.drawRectangle(88,100,1,2);
    Brain.Screen.drawRectangle(89,101,3,1);
    Brain.Screen.drawRectangle(91,100,3,1);
    Brain.Screen.drawRectangle(93,99,1,2);
    Brain.Screen.drawRectangle(94,98,1,2);
    Brain.Screen.drawRectangle(95,97,1,2);
    Brain.Screen.drawRectangle(96,96,1,2);   
}


void colorFadeBlueAndRed()
{
    float g1 = 0;
    float b1 = 0;
    float r1 = 250;
    while(true)
    {
        if(r1 > 0)
        {
            while(r1 > 0)
            {
                rob(r1,g1,b1);
                task::sleep(5);
                r1 -= 1;
                b1 += 1;
            }
        }        
        else
        {
            while(b1 > 0)
            {
                rob(r1,g1,b1);
                task::sleep(5);
                b1 -= 1;
                r1 += 1;
            }            
        }
    }
}

void rainbowFade()
{
    float g1 = 0;
    float b1 = 0;
    float r1 = 250;
    while(x == 1 && !Brain.Screen.pressing())
    {
        if(r1 > 0)
        {
            while(r1 > 0 && !Brain.Screen.pressing())
            {
                rob(r1,g1,b1);
                task::sleep(5);
                r1 -= 1;
                b1 += 1;
            }
        }        
        else if(b1 > 0)
        {
            while(b1 > 0 && !Brain.Screen.pressing())
            {
                rob(r1,g1,b1);
                task::sleep(5);
                b1 -= 1;
                g1 += 1;
            }            
        }
        else
        {
            while(g1 > 0 && !Brain.Screen.pressing())
            {
                rob(r1,g1,b1);
                task::sleep(5);
                g1 -= 1;
                r1 += 1;
            }            
        }
    }
    if((Brain.Screen.xPosition() > 380 && Brain.Screen.xPosition() < 470) && (Brain.Screen.yPosition() > 10 && Brain.Screen.yPosition() < 60))
        {
          x = 0;
        }
}

void startScreen()
{
  while(true)
  {
    if(x == 0)
    {
      Brain.Screen.clearScreen();
      Brain.Screen.setFillColor(color::transparent);
      Brain.Screen.setPenColor(color::blue);
      Brain.Screen.setPenWidth(3);
      Brain.Screen.drawRectangle(10, 10, 75, 50);
      Brain.Screen.setFont(mono30);
      Brain.Screen.printAt(25, 45, "Rob");
      Brain.Screen.drawRectangle(95, 10, 200, 50);
      Brain.Screen.printAt(120, 45, "Calculator");
      while(!(((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 85) && (Brain.Screen.yPosition() > 10 && Brain.Screen.yPosition() < 60)) || ((Brain.Screen.xPosition() > 94 && Brain.Screen.xPosition() < 296) && (Brain.Screen.yPosition() > 10 && Brain.Screen.yPosition() < 60))))
      {

      }
      if((Brain.Screen.xPosition() > 10 && Brain.Screen.xPosition() < 85) && (Brain.Screen.yPosition() > 10 && Brain.Screen.yPosition() < 60))
      {
        x = 1;
      }
      else if((Brain.Screen.xPosition() > 94 && Brain.Screen.xPosition() < 296) && (Brain.Screen.yPosition() > 10 && Brain.Screen.yPosition() < 60))
      {
        x = 2;
      }
    }
    if(x == 1)
    {
      Brain.Screen.clearScreen();
      Brain.Screen.setFillColor(color::transparent);
      Brain.Screen.setPenWidth(3);
      Brain.Screen.setPenColor(color::white);
      Brain.Screen.drawRectangle(380, 10, 90, 50);
      Brain.Screen.setFont(mono30);
      Brain.Screen.printAt(395, 45, "Back");
      while(x == 1)
      {
          rainbowFade();
      }
    }
    else if(x == 2)
    {
      Brain.Screen.clearScreen();
      Brain.Screen.setFillColor(color::transparent);
      Brain.Screen.setPenWidth(3);
      Brain.Screen.setPenColor(color::white);
      Brain.Screen.drawRectangle(380, 180, 90, 50);
      Brain.Screen.setFont(mono30);
      Brain.Screen.printAt(395, 215, "Back");
      while(x == 2)
      {
        calculator();
      }
    }
  }
}







void pre_auton( void ) {

}


void autonomous( void ) {

}


void usercontrol( void ) {
  while (1) {
  }
}


int main() {
    Competition.autonomous( autonomous );
    Competition.drivercontrol( usercontrol );
    
    pre_auton();
    Brain.Screen.clearScreen();
    while(1) {
      vex::task::sleep(100);
          startScreen();
    }    
       
}