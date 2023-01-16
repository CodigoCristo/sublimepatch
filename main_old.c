// CRACK PARA SUBLIME TEXT 4
// Create for Codigo Cristo

#include <stdio.h>
#include <stdlib.h>

void msg_welcome ();
void pause();
void clean();
void msg_menu ();
void msg_end ();
void patch_sublime4126 ();
void patch_sublime4134 ();
void patch_merge2074 ();
void patch_merge2073 ();
void patch_merge2068 ();


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

	printf("\t1. Sublime Text\n");
	printf("\t2. Sublime Merge\n");
	printf("\nEnter the number (1 or 2) : ");
	scanf ("%i", &option);

	switch( option )
    {
        case 1:
            printf("\n\n");
            printf("\t1) Sublime Text 4134\n");
            printf("\t2) Sublime Text 4126\n");
            printf("\nEnter the number (1 or 2) : ");
            scanf ("%i", &optionsublime);
            if ( optionsublime == 1) {
                printf("\n");
                patch_sublime4134 ();
            }
            else {
                printf("\n");
                patch_sublime4126 ();
            }
            
            break;

        case 2:
            printf("\n\n");
            printf("\t1) Sublime Merge 2074\n");
            printf("\t2) Sublime Merge 2073\n");
            printf("\t3) Sublime Merge 2068\n");
            printf("\nEnter the number (1 or 2) : ");
            scanf ("%i", &optionmerge);
            if ( optionmerge == 1) {
                printf("\n");
                patch_merge2074 ();
            }
            else if (optionmerge == 2)
            {
                printf("\n");
                patch_merge2073 ();
            }
            else {
                printf("\n");
                patch_merge2068 ();
            }

            break;

        default:
        	clean();
            printf("\nError! operator is not correct %c", 174);
    }

    return 0;
}











#ifdef _WIN64
void pause()
{
	system("PAUSE");
	return;
}

void clean()
{
	system("cls");
	return;
}


void patch_sublime4134 () 
{

    system("COPY \"C:\\Program Files\\Sublime Text\\sublime_text.exe\" ");

    FILE *crack = fopen( "sublime_text.exe", "r+b" );
    fseek( crack, 0x000A8484, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fputs("\x48\x31\xC0\xC3", crack);

    fseek( crack, 0x0000715E, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x00007177, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x000AA26A, SEEK_SET ); 
    fputs("\x48\x31\xC0\x48\xFF\xC0\xC3", crack);

    fseek( crack, 0x000A807F, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x00000400, SEEK_SET ); 
    fputs("\xC3", crack);
    fclose( crack );
    
    system("MOVE sublime_text.exe \"C:\\Program Files\\Sublime Text\" ");
    
    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tSublime Text for Windows platform, loading...\n");
    system("timeout /t 5 /nobreak");

    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tPaying $99 USD For A License Is Stupid.\n");
    system("timeout /t 5");

    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tEnter any key to program, program made by Codigo Cristo\n"); 
    msg_end () ;
    system("PAUSE");

}


void patch_sublime4126 () 
{

	system("COPY \"C:\\Program Files\\Sublime Text\\sublime_text.exe\" ");

	FILE *crack = fopen( "sublime_text.exe", "r+b" );
	fseek( crack, 0x000A7214, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fputs("\x48\x31\xC0\xC3", crack);

    fseek( crack, 0x0000711A, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x00007133, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x000A8D53, SEEK_SET ); 
    fputs("\x48\x31\xC0\x48\xFF\xC0\xC3", crack);

    fseek( crack, 0x000A6F0F, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x00000400, SEEK_SET ); 
    fputs("\xC3", crack);
    fclose( crack );
    
    system("MOVE sublime_text.exe \"C:\\Program Files\\Sublime Text\" ");
    
    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tSublime Text for Windows platform, loading...\n");
    system("timeout /t 5 /nobreak");

	system("cls");
	msg_menu ();
	printf("\n");
	printf("\tPaying $99 USD For A License Is Stupid.\n");
    system("timeout /t 5");

    system("cls");
    msg_menu ();
    printf("\n");
	printf("\tEnter any key to program, program made by Codigo Cristo\n"); 
	msg_end () ;
	system("PAUSE");

}


void patch_merge2074 () 
{

    system("COPY \"C:\\Program Files\\Sublime Merge\\sublime_merge.exe\" ");

    char b1[] = "\x48\xC7\xC0\x19\x01\x00\x00\xC3";
    char b2[] = "\x90\x90\x90\x90\x90";
    char b3[] = "\x48\x31\xC0\x48\xFF\xC0\xC3";
    char b4[] = "\xC3";

    FILE *crack = fopen( "sublime_merge.exe", "r+b" );
    fseek( crack, 0x000241B4, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fwrite(b1, sizeof(b1[0]), 8, crack);

    fseek( crack, 0x00027667, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x00027680, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x000259D1, SEEK_SET ); 
    fwrite(b3, sizeof(b3[0]), 7, crack);

    fseek( crack, 0x00023E07, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);

    fseek( crack, 0x0002317C, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);
    fclose( crack );
    
    system("MOVE sublime_merge.exe \"C:\\Program Files\\Sublime Merge\" ");
    
    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tSublime Merge for Windows platform, loading...\n");
    system("timeout /t 5 /nobreak");

    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tPaying $99 USD For A License Is Stupid.\n");
    system("timeout /t 5");

    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tEnter any key to program, program made by Codigo Cristo\n"); 
    msg_end () ;
    system("PAUSE");

}


void patch_merge2073 () 
{

    system("COPY \"C:\\Program Files\\Sublime Merge\\sublime_merge.exe\" ");

    char b1[] = "\x48\xC7\xC0\x19\x01\x00\x00\xC3";
    char b2[] = "\x90\x90\x90\x90\x90";
    char b3[] = "\x48\x31\xC0\x48\xFF\xC0\xC3";
    char b4[] = "\xC3";

    FILE *crack = fopen( "sublime_merge.exe", "r+b" );
    fseek( crack, 0x000241B8, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fwrite(b1, sizeof(b1[0]), 8, crack);

    fseek( crack, 0x00027629, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x00027642, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x0002599F, SEEK_SET ); 
    fwrite(b3, sizeof(b3[0]), 7, crack);

    fseek( crack, 0x00023E0B, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);

    fseek( crack, 0x00023180, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);
    fclose( crack );
    
    system("MOVE sublime_merge.exe \"C:\\Program Files\\Sublime Merge\" ");
    
    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tSublime Merge for Windows platform, loading...\n");
    system("timeout /t 5 /nobreak");

    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tPaying $99 USD For A License Is Stupid.\n");
    system("timeout /t 5");

    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tEnter any key to program, program made by Codigo Cristo\n"); 
    msg_end () ;
    system("PAUSE");

}


void patch_merge2068 () 
{

    system("COPY \"C:\\Program Files\\Sublime Merge\\sublime_merge.exe\" ");

    char b1[] = "\x48\xC7\xC0\x19\x01\x00\x00\xC3";
    char b2[] = "\x90\x90\x90\x90\x90";
    char b3[] = "\x48\x31\xC0\x48\xFF\xC0\xC3";
    char b4[] = "\xC3";

    FILE *crack = fopen( "sublime_merge.exe", "r+b" );
    fseek( crack, 0x00024A54, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fwrite(b1, sizeof(b1[0]), 8, crack);

    fseek( crack, 0x000275FB, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x00027614, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x00025FB3, SEEK_SET ); 
    fwrite(b3, sizeof(b3[0]), 7, crack);

    fseek( crack, 0x000246A7, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);

    fseek( crack, 0x00021FFC, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);
    fclose( crack );
    
    system("MOVE sublime_merge.exe \"C:\\Program Files\\Sublime Merge\" ");
    
    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tSublime Merge for Windows platform, loading...\n");
    system("timeout /t 5 /nobreak");

    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tPaying $99 USD For A License Is Stupid.\n");
    system("timeout /t 5");

    system("cls");
    msg_menu ();
    printf("\n");
    printf("\tEnter any key to program, program made by Codigo Cristo\n"); 
    msg_end () ;
    system("PAUSE");

}

#endif
//////////////////////////////////////////////////////



// PARA LINUX ///////////////////////////////////////
#ifdef __linux__

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




void patch_sublime4134 () 
{

    system("cp /opt/sublime_text/sublime_text '.' ");

    FILE *crack = fopen( "sublime_text", "r+b" );
    fseek( crack, 0x003A1BF4, SEEK_SET ); 
    fputs("\x48\x31\xC0\xC3", crack);

    fseek( crack, 0x00397CE7, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x00397D02, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x003A37E0, SEEK_SET ); 
    fputs("\x48\x31\xC0\x48\xFF\xC0\xC3", crack);

    fseek( crack, 0x003A18B8, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x0038B4D0, SEEK_SET ); 
    fputs("\xC3", crack);
    fclose( crack );
    
    system("mv sublime_text /opt/sublime_text/sublime_text ");
    
    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tSublime Text for Linux x64 platform, loading...\n");
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


void patch_sublime4126 () 
{

    system("cp /opt/sublime_text/sublime_text '.' ");

    FILE *crack = fopen( "sublime_text", "r+b" );
    fseek( crack, 0x00385492, SEEK_SET ); 
    fputs("\x48\x31\xC0\xC3", crack);

    fseek( crack, 0x0037B675, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x0037B68B, SEEK_SET ); 
    fputs("\x90\x90\x90\x90\x90", crack);

    fseek( crack, 0x00386F4F, SEEK_SET ); 
    fputs("\x48\x31\xC0\x48\xFF\xC0\xC3", crack);

    fseek( crack, 0x00385156, SEEK_SET ); 
    fputs("\xC3", crack);

    fseek( crack, 0x0036EF50, SEEK_SET ); 
    fputs("\xC3", crack);
    fclose( crack );
    
    system("mv sublime_text /opt/sublime_text/sublime_text ");

    system("clear");
    msg_menu ();
    printf("\n");
    printf("\tSublime Text for Linux x64 platform, loading...\n");
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

void patch_merge2074 () 
{

    system("cp /opt/sublime_merge/sublime_merge '.' ");

    char b1[] = "\x48\xC7\xC0\x19\x01\x00\x00\xC3";
    char b2[] = "\x90\x90\x90\x90\x90";
    char b3[] = "\x48\x31\xC0\x48\xFF\xC0\xC3";
    char b4[] = "\xC3";

    FILE *crack = fopen( "sublime_merge", "r+b" );
    fseek( crack, 0x003C8EBE, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fwrite(b1, sizeof(b1[0]), 8, crack);

    fseek( crack, 0x003CBFBB, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x003CBFD6, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x003CA46E, SEEK_SET ); 
    fwrite(b3, sizeof(b3[0]), 7, crack);

    fseek( crack, 0x003C8C0A, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);

    fseek( crack, 0x003C883E, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);
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


void patch_merge2073 () 
{

    system("cp /opt/sublime_merge/sublime_merge '.' ");

    char b1[] = "\x48\xC7\xC0\x19\x01\x00\x00\xC3";
    char b2[] = "\x90\x90\x90\x90\x90";
    char b3[] = "\x48\x31\xC0\x48\xFF\xC0\xC3";
    char b4[] = "\xC3";

    FILE *crack = fopen( "sublime_merge", "r+b" );
    fseek( crack, 0x003C8EF4, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fwrite(b1, sizeof(b1[0]), 8, crack);

    fseek( crack, 0x003CC05B, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x003CC076, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x003CA518, SEEK_SET ); 
    fwrite(b3, sizeof(b3[0]), 7, crack);

    fseek( crack, 0x003C8C40, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);

    fseek( crack, 0x003C8874, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);
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


void patch_merge2068 () 
{

    system("cp /opt/sublime_merge/sublime_merge '.' ");

    char b1[] = "\x48\xC7\xC0\x19\x01\x00\x00\xC3";
    char b2[] = "\x90\x90\x90\x90\x90";
    char b3[] = "\x48\x31\xC0\x48\xFF\xC0\xC3";
    char b4[] = "\xC3";

    FILE *crack = fopen( "sublime_merge", "r+b" );
    fseek( crack, 0x003C6A3C, SEEK_SET ); // Se mueve a la dirección o numero espacios desde el comienzo del archivo
    fwrite(b1, sizeof(b1[0]), 8, crack);

    fseek( crack, 0x003C95A1, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x003C95BC, SEEK_SET ); 
    fwrite(b2, sizeof(b2[0]), 5, crack);

    fseek( crack, 0x003C7E85, SEEK_SET ); 
    fwrite(b3, sizeof(b3[0]), 7, crack);

    fseek( crack, 0x003C6788, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);

    fseek( crack, 0x003C572C, SEEK_SET ); 
    fwrite(b4, sizeof(b4[0]), 1, crack);
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

#endif
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
printf("\nThanks to @leogx9r for providing cracking methods,\nWritten in C by Codigo Cristo\n");

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
