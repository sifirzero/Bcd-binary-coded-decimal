#include<16f628a.h>
#fuses INTRC_IO,nomclr
#use delay(clock=4m)

int i=1;

void main()
{
set_tris_a(0x01);
set_tris_b(0x00);

output_b(0x00);

while(true)
{
if(input(pin_a0))
{
delay_ms(15);
output_b(i);
i=i+1;
while(input(pin_a0));

if(i==10)
i=0;

}

}


}
