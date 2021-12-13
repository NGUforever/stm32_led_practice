#include "sys.h"
/****************************
**函数名：WFI_SET
**功能描述：实现执行汇编指令WFI
**输入参数：无
**输出参数：无
****************************/
void WFI_SET(void){
    __ASM volatile("wfi");
}
/****************************
**函数名：INTX_DISABLE
**功能描述：关门所有中断
**输入参数：无
**输出参数：无
****************************/
void INTX_DISABLE(void){
    __ASM volatile("cpsid i");
}
/****************************
**函数名：INTX_ENABLE
**功能描述：开启所有中断
**输入参数：无
**输出参数：无
****************************/
void INTX_ENABLE(void){
    __ASM volatile("cpsie i");
}
/****************************
**函数名：MSR_MSP
**功能描述：设置栈顶地址
**输入参数：栈顶地址
**输出参数：无
****************************/
__asm void MSR_MSP(u32 addr){
    MSR MSP, r0     //设置主堆栈值
    BX r14
}
