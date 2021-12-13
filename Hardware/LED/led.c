#include "led.h"

//��ʼ����LED�����ӵ�PA2��PA3����Ϊ�������ʹ�����������ŵ�ʱ��
void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);    //ʹ��PA����
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_7;     //PA2��PA3��������
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;         //�������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;        //I/O�˿�����Ϊ50MHz
	GPIO_Init(GPIOD, &GPIO_InitStructure);                   //��ʼ��GPIOA
	GPIO_SetBits(GPIOD, GPIO_Pin_2);                         //PA2��������ߵ�ƽ
	GPIO_SetBits(GPIOD, GPIO_Pin_3);                         //PA3��������ߵ�ƽ
	GPIO_SetBits(GPIOD, GPIO_Pin_4);                         //PA3��������ߵ�ƽ
	GPIO_SetBits(GPIOD, GPIO_Pin_7);                         //PA3��������ߵ�ƽ
	
}
