#ifndef __LED_H
#define __LED_H
#include "sys.h"

//LED�˿ڶ���
#define LED0 PDout(2)    //����LED0ΪPA2���λ��λ������
#define LED1 PDout(3)    //����LED1ΪPA3���λ��λ������
#define LED2 PDout(4)    //����LED1ΪPA3���λ��λ������
#define LED3 PDout(7)    //����LED1ΪPA3���λ��λ������
void LED_Init(void);      //LED�˿ڳ�ʼ��

#endif
