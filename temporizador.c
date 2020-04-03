#include <18F452.h>
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES HS                       //High speed Osc (> 4mhz)
#FUSES PUT                      //Power Up Timer
#FUSES NOPROTECT                //Code not protected from reading
#FUSES NODEBUG                  //No Debug mode for ICD
#FUSES BROWNOUT                 //Reset when brownout detected
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOCPD                    //No EE protection
#FUSES NOWRT                    //Program memory not write protected
#use delay(clock=20000000)
#include <lcd.c>

void main(){
lcd_init();
while (true){
int s,ms=60,i;
   if (input(Pin_A1)==1){
      s++;
       lcd_gotoxy(4,1);
     printf(lcd_putc,"%u",s);
      delay_ms(1000);
      }
   if (input(PIN_A2)==1){ 
      for(i=0;i<60;i++){
      s--;   
    for (int j=0;j<60;j++){
    ms--;
   lcd_gotoxy(4,1);
   printf(lcd_putc,"%u%3.2w",s,ms);
   delay_ms(10);
   
   if (ms==0) {
   ms=60;
   break;
   }
    }
  if (s==0) break;
   }
   
     }
   }
   }




