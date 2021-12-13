#include "led.h"
#include "sys.h"

void Delay(uint32_t count)
{
	u32 i = 0;
	for(;i<count;i++);
}

int main(void)
{
	LED_Init();
//	GPIO_ResetBits(GPIOD, GPIO_Pin_7);                         //PA2��������ߵ�ƽ
	while(1)
	{
		LED0 = 0;
		LED1 = 1;
		Delay(500000);
		LED0 = 1;
		LED1 = 0;
		Delay(500000);
	}
		
}
