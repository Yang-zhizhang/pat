/*基础编程题库集 编程题7-2 然后是几点*/
/*注意：题目保证起始时间和终止时间在同一天*/


//自己写的，部分正确。
#include <stdio.h>
int main()
{
  int time,pass,hour,mins;
  
  scanf("%d %d",&time,&pass);
  hour=time/100;
  mins=time%100;
  
  if(pass>0)
  {
    mins=mins+pass;
    hour=mins/60+hour;
    mins=mins%60;
    if(hour>=24)
      hour=hour-24;
  }
  else
  {//pass<0;
    mins=mins+pass;
    if(mins<0)
    {
      hour=hour+mins/60;
      mins=60+mins;
      if (hour<0)
      	hour=24+hour;
    }
  }
  printf("%d\n",hour*100+mins);
  
  return 0;
}