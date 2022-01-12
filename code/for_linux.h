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

void patch_sublime () 
{

    system("cp /opt/sublime_text/sublime_text . ");

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


void patch_merge () 
{

    system("cp /opt/sublime_merge/sublime_merge . ");

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
