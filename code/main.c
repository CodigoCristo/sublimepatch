// CRACK PARA SUBLIME TEXT 4
// Create for Codigo Cristo

#include <stdio.h>
#include <stdlib.h>
#include "msg.h"
#include "for_win.h"
#include "for_linux.h"


int main ()
{
	clean();
	msg_welcome ();
	pause();
	clean();
	msg_menu ();

	int option = 0 ;
	printf("\t1. Sublime Text 4126\n");
	printf("\t2. Sublime Merge 2068\n");
	printf("\nEnter the number (1 or 2) : ");
	scanf ("%i", &option);

	switch( option )
    {
        case 1:
            patch_sublime ();
            break;

        case 2:
            patch_merge ();
            break;

        default:
        	clean();
            printf("\nError! operator is not correct %c", 174);
    }

    return 0;
}


// https://iq.opengenus.org/detect-operating-system-in-c/