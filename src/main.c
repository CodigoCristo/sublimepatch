// CRACK PARA SUBLIME TEXT 4
// Create for Codigo Cristo

#include <stdio.h>
#include <stdlib.h>

void msg_welcome ();
void pause();
void clean();
void msg_menu ();
void msg_end ();
void patch_sublime ();
void patch_sublimeDEV ();
void patch_merge ();


int main ()
{
	clean();
	msg_welcome ();
    pause();
	clean();
	msg_menu ();
	
	int option = 0 ;
	int optionsublime = 0 ;
	int optionmerge = 0 ;

	printf("\t1. Sublime Text Linux Build 4152 (Stable)\n");
	printf("\t2. Sublime Text Linux Build 4156 (Dev Channel)\n");
	printf("\t3. Sublime Merge Stable 2091\n");
	printf("\nEnter the number (1 - 2 - 3) : ");
	scanf ("%i", &option);

	switch( option )
    {
        case 1:
            patch_sublime ();
            break;

        case 2:
	        patch_sublimeDEV ();
            break;
            
        case 3:
	        patch_merge ();
            break;

        default:
        	clean();
            printf("\nError! operator is not correct %c", 174);
    }

    return 0;
}






void pause()
{
    system("echo 'Press enter to continue...' &&  read line");
    return;
}

void clean()
{
    system("clear");
    return;
}




void patch_sublime () 
{

    system("echo 00415013: 48 C7 C0 00 00 00 00 C3 | xxd -r - /opt/sublime_text/sublime_text");
    system("echo 00409037: 90 90 90 90 90          | xxd -r - /opt/sublime_text/sublime_text");
    system("echo 0040904F: 90 90 90 90 90          | xxd -r - /opt/sublime_text/sublime_text");
    system("echo 00416CA4: C3                      | xxd -r - /opt/sublime_text/sublime_text");
    system("echo 00414C82: C3                      | xxd -r - /opt/sublime_text/sublime_text");
    
    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tSublime Text for Linux x64 platform, loading...\n");
    system("echo '\nPress enter to continue...' &&  read line");

    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tPaying $99 USD For A License Is Stupid.\n");
    system("echo '\nPress enter to continue...' &&  read line");

    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tEnter any key to program, program made by Codigo Cristo\n"); 
    msg_end () ;
    system("echo '\nPress enter to continue...' &&  read line");
    system("clear; exit");

}


void patch_sublimeDEV () 
{

    system("echo 00444894: 48 C7 C0 00 00 00 00 C3 | xxd -r - /opt/sublime_text/sublime_text");
    system("echo 0042BA70: 90 90 90 90 90          | xxd -r - /opt/sublime_text/sublime_text");
    system("echo 0042BA88: 90 90 90 90 90          | xxd -r - /opt/sublime_text/sublime_text");
    system("echo 004467B6: C3                      | xxd -r - /opt/sublime_text/sublime_text");
    system("echo 004444F8: C3                      | xxd -r - /opt/sublime_text/sublime_text");
    
    
    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tSublime Text for Linux x64 platform, loading...\n");
    system("echo '\nPress enter to continue...' &&  read line");

    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tPaying $99 USD For A License Is Stupid.\n");
    system("echo '\nPress enter to continue...' &&  read line");

    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tEnter any key to program, program made by Codigo Cristo\n"); 
    msg_end () ;
    system("echo '\nPress enter to continue...' &&  read line");
    system("clear; exit");

}


void patch_merge () 
{

    system("echo 004E1752: 48 C7 C0 01 00 00 00 C3 | xxd -r - /opt/sublime_merge/sublime_merge");
    system("echo 004E48DD: 90 90 90 90 90          | xxd -r - /opt/sublime_merge/sublime_merge");
    system("echo 004E48F5: 90 90 90 90 90          | xxd -r - /opt/sublime_merge/sublime_merge");
    system("echo 004E2FD6: C3                      | xxd -r - /opt/sublime_merge/sublime_merge");
    system("echo 004E145C: C3                      | xxd -r - /opt/sublime_merge/sublime_merge");


    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tSublime Merge for Linux x64 platform, loading...\n");
    system("echo '\nPress enter to continue...' &&  read line");

    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tPaying $99 USD For A License Is Stupid.\n");
    system("echo '\nPress enter to continue...' &&  read line");

    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tEnter any key to program, program made by Codigo Cristo\n"); 
    msg_end () ;
    system("echo 'Press enter to continue...' &&  read line");
    system("exit");

}


////////////////////////////////////////////////////



void msg_menu () 
{
printf(" \n \
  ____        _     _ _                                      _     \n \
 / ___| _   _| |__ | (_)_ __ ___   ___    ___ _ __ __ _  ___| | __ \n \
 \\___ \\| | | | '_ \\| | | '_ ` _ \\ / _ \\  / __| '__/ _` |/ __| |/ / \n \
  ___) | |_| | |_) | | | | | | | |  __/ | (__| | | (_| | (__|   <  \n \
 |____/ \\__,_|_.__/|_|_|_| |_| |_|\\___|  \\___|_|  \\__,_|\\___|_|\\_\\ \n \
                                                                  \n");
}


void msg_welcome ()
{

printf(" \n \
 _______           ______   _       _________ _______  _______  \n \
(  ____ \\|\\     /|(  ___ \\ ( \\      \\__   __/(       )(  ____ \\ \n \
| (    \\/| )   ( || (   ) )| (         ) (   | () () || (    \\/ \n \
| (_____ | |   | || (__/ / | |         | |   | || || || (__     \n \
(_____  )| |   | ||  __ (  | |         | |   | |(_)| ||  __)    \n \
      ) || |   | || (  \\ \\ | |         | |   | |   | || (       \n \
/\\____) || (___) || )___) )| (____/\\___) (___| )   ( || (____/\\ \n \
\\_______)(_______)|/ \\___/ (_______/\\_______/|/     \\|(_______/ \n \
                                                               \n");

printf("\n\tFor Sublime Text and Sublime merge \n");
printf("\nThanks to the community for providing cracking methods,\nWritten in C by Código Cristo\n");

printf("\n \
 _____ ______ _____ ___________  ___  ______  _____  _   _  \n \
/  __ \\| ___ \\_   _/  ___| ___ \\/ _ \\ | ___ \\/  __ \\| | | | \n \
| /  \\/| |_/ / | | \\ `--.| |_/ / /_\\ \\| |_/ /| /  \\/| |_| | \n \
| |    |    /  | |  `--. \\  __/|  _  ||    / | |    |  _  | \n \
| \\__/\\| |\\ \\ _| |_/\\__/ / |   | | | || |\\ \\ | \\__/\\| | | | \n \
 \\____/\\_| \\_|\\___/\\____/\\_|   \\_| |_/\\_| \\_| \\____/\\_| |_/ \n \
                                                           \n");

}



void msg_end ()
{
printf(" \n \
 _____ ______ _____ ___________  ___  ______  _____  _   _  \n \
/  __ \\| ___ \\_   _/  ___| ___ \\/ _ \\ | ___ \\/  __ \\| | | | \n \
| /  \\/| |_/ / | | \\ `--.| |_/ / /_\\ \\| |_/ /| /  \\/| |_| | \n \
| |    |    /  | |  `--. \\  __/|  _  ||    / | |    |  _  | \n \
| \\__/\\| |\\ \\ _| |_/\\__/ / |   | | | || |\\ \\ | \\__/\\| | | | \n \
 \\____/\\_| \\_|\\___/\\____/\\_|   \\_| |_/\\_| \\_| \\____/\\_| |_/ \n \
                                                           \n");
}
