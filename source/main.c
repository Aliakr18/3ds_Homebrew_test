#include "main.h"
#include "memory.h"

int paint_top_black()
{

int i;
char* a = "clear";

for(i=0;i<242*400;i++){

        paint_pixel2(i%400,i/400 , 0, 0, 0, TOP_LEFT_FRAME1);
        paint_pixel2(i%400,i/400 , 0, 0, 0, TOP_LEFT_FRAME2);
}

paint_word2(a,40,40,0,0,0, TOP_LEFT_FRAME1);
paint_word2(a,40,40,0,0,0, TOP_LEFT_FRAME2);

return 0;

}

int paint_sub_black()
{

int i;

for(i=0;i<300*500;i++){
        paint_pixel4(i%400,i/400 , 0, 0, 0, SUB_LEFT_FRAME1);
        paint_pixel4(i%400,i/400 , 0, 0, 0, SUB_LEFT_FRAME2);
}

}

int paint_top_text()
{

char* a = "hello world aliak was here";
  
paint_word(a,25,40,0,0,0, TOP_LEFT_FRAME1);
paint_word(a,25,40,0,0,0, TOP_LEFT_FRAME2);

}

int paint_sub_text()
{

char* b = "bottom screen access";

paint_word2(b,35,35,0,0,0, SUB_LEFT_FRAME1);
paint_word2(b,35,35,0,0,0, SUB_LEFT_FRAME2);

}


int main()
{

  paint_top_black();
  
  paint_sub_black();
  
  paint_top_text();
  
  paint_sub_text();
  
  int i;
  
  for(i=0;i<242*400;i++){

        paint_pixel4(i%400,i/400 , 0, 0, 0, TOP_LEFT_FRAME1);
        paint_pixel4(i%400,i/400 , 0, 0, 0, TOP_LEFT_FRAME2);
}
  
  
  return 0;
}

