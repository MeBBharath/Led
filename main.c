#include <stdint.h>


int main(void)
{
	uint32_t *pclk=(uint32_t *)0x40023800+0x30;
	uint32_t *pmode=(uint32_t *)0x40020000+0x00;
	uint32_t *poutput=(uint32_t *)0x40020C00+0x14;
	/*clock enable*/

	*pclk|=(1<<0);

	/*Mode output*/

	*pmode|=(1<<0);


	/*Enable output*/

	*poutput|=(1<<0);

	while(1);
}
