// CRACK PARA SUBLIME TEXT 4
// Create for Codigo Cristo

#include <stdio.h>
#include <stdlib.h>

void msg_welcome ();
void pause();
void clean();
void msg_menu ();
void msg_end ();
void patch_sublime4143 ();
void patch_sublimeDEV ();
void patch_merge2079 ();


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

	printf("\t1. Sublime Text Stable 4143\n");
	printf("\t2. Sublime Text DEV 4147\n");
	printf("\t3. Sublime Merge Stable 2079\n");
	printf("\nEnter the number (1 - 2 - 3) : ");
	scanf ("%i", &option);

	switch( option )
    {
        case 1:
            patch_sublime4143 ();
            break;

        case 2:
	    patch_sublimeDEV ();
            break;
            
        case 3:
	    patch_merge2079 ();
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




void patch_sublime4143 () 
{
    system("cp /opt/sublime_text/sublime_text '.' ");

    FILE *crack = fopen( "sublime_text", "r+b" );
    fseek( crack, 0x003A31F2, SEEK_SET ); 
    fputs("\x48\x31\xC0\xC3", crack);

    fseek( crack, 0x00399387, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x0039939D, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x003A4E30, SEEK_SET ); 
    fputs("\x48\x31\xC0\x48\xFF\xC0\xC3", crack);

    fseek( crack, 0x003A2E82, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x0038C9F0, SEEK_SET ); 
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
    fseek( crack, 0x413CCF, SEEK_SET ); 
    fputs("\x48\x31\xC0\xC3", crack);
    
    fseek( crack, 0x407CD9, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x407CF1, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x41594C, SEEK_SET ); 
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


void patch_merge2079 () 
{
    system("cp /opt/sublime_merge/sublime_merge '.' ");

    char b1[] = "\x48\x31\xC0\xC3";
    char b2[] = "\x90\x90\x90\x90\x90";
    char b3[] = "\x90\x90\x90\x90\x90";
    char b4[] = "\x48\x31\xC0\x48\xFF\xC0\xC3";
    char b5[] = "\xC3";
    char b6[] = "\xC3";

    FILE *crack = fopen( "sublime_merge", "r+b" );
    fseek( crack, 0x003CC9BA, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fwrite(b1, sizeof(b1[0]), 4, crack);

    fseek( crack, 0x003CF9DD, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x003CF9F3, SEEK_SET ); 
    fwrite(b2, sizeof(b3[0]), 5, crack);

    fseek( crack, 0x003CDFA2, SEEK_SET ); 
    fwrite(b3, sizeof(b4[0]), 7, crack);

    fseek( crack, 0x003CC6D2, SEEK_SET ); 
    fwrite(b4, sizeof(b5[0]), 1, crack);

    fseek( crack, 0x003CC130, SEEK_SET ); 
    fwrite(b4, sizeof(b6[0]), 1, crack);
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
