#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>



#define RCC						0x40021000

#define	PortA					0x40010800
#define	PortB					0x40010C00
#define	PortC					0x40011000
#define	PortD					0x40011400
#define	PortE					0x40011800
#define	PortF					0x40011C00
#define PortG					0x40012000

struct My_RRC_Type
{
	uint32_t My_RC;
	uint32_t My_CFGR;
	uint32_t My_CIR;
	uint32_t My_APB2RSTR;
	uint32_t My_APB1RSTR;
	uint32_t My_AHBENR;
	uint32_t My_APB2ENR;
	uint32_t My_APB1ENR;
	uint32_t My_BDCR;
	uint32_t My_CSR;
	uint32_t My_AHBRSTR;
	uint32_t My_CFGR2;
};

struct My_GPIO_Type
{
    uint32_t My_GPIO_CRL;
    uint32_t My_GPIO_CRH;
    uint32_t My_GPIO_IDR;
    uint32_t My_GPIO_ODR;
    uint32_t My_GPIO_BSRR;
    uint32_t My_GPIO_BRR;
    uint32_t My_GPIO_LCKR;
};

struct My_RRC_Type  * My_RRC = (struct My_RRC_Type  *)RCC;

struct My_GPIO_Type * PortA = (struct My_GPIO_Type  *)PortA;

int main()
{
    printf("%d",&RRC);
}
