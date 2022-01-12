
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

void patch_sublime () 
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


void patch_merge () 
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