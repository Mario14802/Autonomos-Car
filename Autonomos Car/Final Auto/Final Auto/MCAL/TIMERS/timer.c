  

#include "timer.h"



void timer0_init(void)
{
	    	/* Disable Timer 0 */
	    	TCCR0 = 0x00;
	    	/* Setting pre scaler */
	    	TCCR0 = (PRE_1);
	    	/* Initializing the timer with zero */
	    	TCNT0 = 0x00;
			/* Timer overflow interrupt enable*/
			TIMSK |=(1<<TOIE0);

	return;
}
