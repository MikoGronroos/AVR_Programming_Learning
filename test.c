#ifndef F_CPU
   #define F_CPU 8000000UL     
#endif

#include <avr/io.h>
#include <util/delay.h>

#define LED PORTB

#define BV(bit) (1 << (bit))
#define setBit(byte, bit) (byte |= BV(bit))
#define clearBit(byte, bit) (byte &= ~BV(bit))
#define toggleBit(byte, bit) (byte ^= BV(bit))define setBit(byte, bit)

int main(void){

  DDRB = 0xFF;
  LED = 0;

  DDRD &= ~(1<<2);
  PORTD = 0;
  while(true){
    if((PIND & (1 << 2)) > 0){
      LED = 7;
    }else{
      LED = 0;
    }
  }
}

/*
int main(void){
  
  DDRB = 0xff;
  PORTB = 7;
  clearBit(PORTB, 0);
  while(true){

    _delay_ms(1500);

    clearBit(PORTB, 1);

    _delay_ms(1500);

    PORTB |= (1 << 1);

  }
  
}
*/

/*
int main(void){

  DDRB = 0xff;
  while(true){
    
    PORTB = 3;

    _delay_ms(1000);

    PORTB |= (1 << 2);
    
    _delay_ms(1000);
  }

}

*/

/*
int main(void){
  DDRB= 0xff;
  
  LED = 0b00000001;

    _delay_ms(1000);

  while(true){
    LED = (LED << 1);
 _delay_ms(1000);

    LED = (LED << 1);
 _delay_ms(1000);

    LED = (LED >> 2);
 _delay_ms(1000);
  }

}
*/

/*
int main(void){

  DDRB = 0xff;
  int i = 0;
  while(true){
    while(i < 3){
      PORTB = (1 << 1);
      i++;
      _delay_ms(1000);
    }
    _delay_ms(1000);

    PORTB = 0xff;

    _delay_ms(1000);

    PORTB = 0;

    _delay_ms(1000);
    i = 0;
  }
  return 0;
}*/
