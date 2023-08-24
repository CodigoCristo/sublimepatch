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
	printf("\t2. Sublime Text Linux Build 4154 (Dev Channel)\n");
	printf("\t3. Sublime Merge Stable 2090\n");
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

    system("cp /opt/sublime_text/sublime_text '.' ");

    FILE *crack = fopen( "sublime_text", "r+b" );
    fseek( crack, 0x00415013, SEEK_SET ); 
    fputs("\x48\x31\xC0\xC3", crack);

    fseek( crack, 0x00409037, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x0040904F, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x00416CA4, SEEK_SET ); 
    fputs("\x48\x31\xC0\x48\xFF\xC0\xC3", crack);

    fseek( crack, 0x00416CA4, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x00414C82, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x003FA310, SEEK_SET ); 
    fputs("\xC3", crack);
    fclose( crack );
    
    system("mv sublime_text /opt/sublime_text/sublime_text ");
    
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

    system("cp /opt/sublime_text/sublime_text '.' ");

    FILE *crack = fopen( "sublime_text", "r+b" );
    fseek( crack, 0x443F94, SEEK_SET ); 
    fputs("\x48\x31\xC0\xC3", crack);
    
    fseek( crack, 0x42B210, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x42B228, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x445EB6, SEEK_SET ); 
    fputs("\x48\x31\xC0\x48\xFF\xC0\xC3", crack);

    fseek( crack, 0x432C88, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x3F9280, SEEK_SET ); 
    fputs("\xC3", crack);
    fclose( crack );
    
    system("mv sublime_text /opt/sublime_text/sublime_text ");
    
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


/*
void patch_merge () 
{

    system("cp /opt/sublime_merge/sublime_merge '.' ");

    FILE *crack = fopen( "sublime_merge", "r+b" );
    fseek( crack, 0x0045A360, SEEK_SET ); 
    fputs("\x48\xC7\xC0\x19\x01\x00\x00\xC3", crack);
    
    fseek( crack, 0x0045D21D, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x0045D23A, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x0045B990, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x0045A05A, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x00459ABA, SEEK_SET ); 
    fputs("\xC3", crack);
    fclose( crack );
    
    system("mv sublime_merge /opt/sublime_merge/sublime_merge ");
    
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
*/


void patch_merge () 
{

    system("cp /opt/sublime_merge/sublime_merge '.' ");

    char b1[] = "\x48\xC7\xC0\x19\x01\x00\x00\xC3";
    char b2[] = "\x90\x90\x90\x90\x90";
    char b3[] = "\x90\x90\x90\x90\x90";
    char b4[] = "\x48\x31\xC0\x48\xFF\xC0\xC3";
    char b5[] = "\xC3";

    FILE *crack = fopen( "sublime_merge", "r+b" );
    fseek( crack, 0x00682CF3, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fwrite(b1, sizeof(b1[0]), 4, crack);

    fseek( crack, 0x004E48C7, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x004E48DF, SEEK_SET ); 
    fwrite(b2, sizeof(b3[0]), 5, crack);

    fseek( crack, 0x004E2FBC, SEEK_SET ); 
    fwrite(b3, sizeof(b4[0]), 7, crack);

    fseek( crack, 0x004E141E, SEEK_SET ); 
    fwrite(b4, sizeof(b5[0]), 1, crack);
    fclose( crack );
    
    system("mv sublime_merge /opt/sublime_merge/sublime_merge ");
    
    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tSublime Merge for Linux x64 platform, loading...\n");
    system("sleep 5");

    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tPaying $99 USD For A License Is Stupid.\n");
    system("sleep 5");

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
