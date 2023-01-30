#include <stdio.h>
#include <conio.h>
#include "tictactoe.h"

int main()
{
	Mulai(&i);
	switch (i)
	{
		case 1:
			start:
			Game();
			break;
		case 2:
			Tema();
			goto start;
			break;
	}
}

void Mulai(int *i)
{
	header();
	printf("\n\n\t\t\t\t                    ||===========||===========||===========||===========||===========||\n");
	printf("\n\t\t\t\t\t\t    ||      Choose Your Choice\t     :\t\t\t\t     ||\n");
    printf("\t\t\t\t\t\t    ||    1. Mulai Game\t\t\t\t\t\t     ||\n");
    printf("\t\t\t\t\t\t    ||    2. Ganti Light Mode\t\t\t\t\t     ||\n\n");
	printf("\t\t\t\t                    ||===========||===========||===========||===========||===========||\n");
    printf("\t\t\t\t\t\t         Your Choice\t\t     :\t\t\t");
	scanf("%d", &*i);
}

void Game()
{
	loading();
	pilihanmode(&i);
    switch (i)
	{
	   	case 1:
			Newbie();
			break;
	    case 2:
			Normies();
	        break;
	    case 3:
	        Godly();
	        break;	
	}	
}

void Tema()
{
	system("color 7C");
}

void Godly()
{
	loading();
	papan();
	mlty5x5();
}

void Normies()
{
	loading();
	papan();
	mlty4x4();
}

void Newbie()
{
	loading();
	papan();
	mlty3x3();
}

void loading()
{
	header();
		printf("\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\tLoading... \n\n\t\t\t\t");
		printf("\t\t      ");
	for (i=0; i<=65;i++)
		{
		printf("%c",178);
		Sleep(15);
		}
}

void header()
{
	system("cls");                                                                                                                                                                                                                                                           
	printf("TTTTTTTTTTTTTTTTTTTTTTT  iiii                      TTTTTTTTTTTTTTTTTTTTTTT                                   TTTTTTTTTTTTTTTTTTTTTTT\n");                                  
	printf("T:::::::::::::::::::::T i::::i                     T:::::::::::::::::::::T                                   T:::::::::::::::::::::T\n");                                   
	printf("T:::::::::::::::::::::T  iiii                      T:::::::::::::::::::::T                                   T:::::::::::::::::::::T\n");                                   
	printf("T:::::TT:::::::TT:::::T                            T:::::TT:::::::TT:::::T                                   T:::::TT:::::::TT:::::T\n");                                   
	printf("TTTTTT  T:::::T  TTTTTTiiiiiii     ccccccccccccccccTTTTTT  T:::::T  TTTTTTaaaaaaaaaaaaa      ccccccccccccccccTTTTTT  T:::::T  TTTTTTooooooooooo       eeeeeeeeeeee\n");     
	printf("        T:::::T        i:::::i   cc:::::::::::::::c        T:::::T        a::::::::::::a   cc:::::::::::::::c        T:::::T      oo:::::::::::oo   ee::::::::::::ee\n"); 
	printf("        T:::::T         i::::i  c:::::::::::::::::c        T:::::T        aaaaaaaaa:::::a c:::::::::::::::::c        T:::::T     o:::::::::::::::o e::::::eeeee:::::ee\n"); 
	printf("        T:::::T         i::::i c:::::::cccccc:::::c        T:::::T                 a::::ac:::::::cccccc:::::c        T:::::T     o:::::ooooo:::::oe::::::e     e:::::e\n"); 
	printf("        T:::::T         i::::i c::::::c     ccccccc        T:::::T          aaaaaaa:::::ac::::::c     ccccccc        T:::::T     o::::o     o::::oe:::::::eeeee::::::e\n"); 
	printf("        T:::::T         i::::i c:::::c                     T:::::T        aa::::::::::::ac:::::c                     T:::::T     o::::o     o::::oe:::::::::::::::::e\n");  
	printf("        T:::::T         i::::i c:::::c                     T:::::T       a::::aaaa::::::ac:::::c                     T:::::T     o::::o     o::::oe::::::eeeeeeeeeee\n");   
	printf("        T:::::T         i::::i c::::::c     ccccccc        T:::::T      a::::a    a:::::ac::::::c     ccccccc        T:::::T     o::::o     o::::oe:::::::e\n");            
	printf("      TT:::::::TT      i::::::ic:::::::cccccc:::::c      TT:::::::TT    a::::a    a:::::ac:::::::cccccc:::::c      TT:::::::TT   o:::::ooooo:::::oe::::::::e\n");           
	printf("      T:::::::::T      i::::::i c:::::::::::::::::c      T:::::::::T    a:::::aaaa::::::a c:::::::::::::::::c      T:::::::::T   o:::::::::::::::o e::::::::eeeeeeee\n"); 
	printf("      T:::::::::T      i::::::i  cc:::::::::::::::c      T:::::::::T     a::::::::::aa:::a cc:::::::::::::::c      T:::::::::T    oo:::::::::::oo   ee:::::::::::::e\n");   
	printf("      TTTTTTTTTTT      iiiiiiii    cccccccccccccccc      TTTTTTTTTTT      aaaaaaaaaa  aaaa   cccccccccccccccc      TTTTTTTTTTT      ooooooooooo       eeeeeeeeeeeeee\n");                                                                                                                                                                    
}

void mlty3x3()
{
	do{
		buatpapan3x3();
		player = (player % 2) ? 1 : 2;
		
	    printf("\t\t\t\t\t\t\t\t      Player %d, enter a number:  ", player);
	    scanf("%d", &choice);
	    
	    mark = (player == 1) ? 'X' : 'O';
	
	    if (choice == 1 && square[0][0] == '-')
		{
	        square[0][0] = mark;
	    }
	            
	   else if (choice == 2 && square[0][1] == '-')
		{
	        square[0][1] = mark;
	  	}
			    
	    else if (choice == 3 && square[0][2] == '-')
		{        
		    square[0][2] = mark;
	    }
	        
		else if (choice == 4 && square[1][0] == '-')
	    {
		    square[1][0] = mark;
	    }
			    
	    else if (choice == 5 && square[1][1] == '-')
		{        
		    square[1][1] = mark;
	    }
	        
		else if (choice == 6 && square[1][2] == '-')
	    {
			square[1][2] = mark;
	    }
	    	
	    else if (choice == 7 && square[2][0] == '-')
	    {
		    square[2][0] = mark;
		}
			
	    else if (choice == 8 && square[2][1] == '-')
	    {
		    square[2][1] = mark;
	    }
	    
	    else if (choice == 9 && square[2][2] == '-')
	    {
		    square[2][2] = mark;
	    }
	        
		else
	    {
	    	printf("Invalid move!");
	        player--;
	        getch();
	    }
	    
		i = checkwin3x3();
		player++;
	}while(i==-1);
	buatpapan3x3();
	printhasil();
}

void mlty4x4()
{
	do
	{
		buatpapan4x4();
		player = (player % 2) ? 1 : 2;
	
	    printf("\t\t\t\t\t\t\t\t      Player %d, enter a number:  ", player);
	    scanf("%d", &choice);
	
	    mark = (player == 1) ? 'X' : 'O';
	
		if (choice == 1 && square[0][0] == '-')
		{
	        square[0][0] = mark;
	    }
	            
	   else if (choice == 2 && square[0][1] == '-')
		{
	        square[0][1] = mark;
	  	}
			    
	    else if (choice == 3 && square[0][2] == '-')
		{        
		    square[0][2] = mark;
	    }
	        
		else if (choice == 4 && square[0][3] == '-')
	    {
		    square[0][3] = mark;
	    }
			    
	    else if (choice == 5 && square[1][0] == '-')
		{        
		    square[1][0] = mark;
	    }
	        
		else if (choice == 6 && square[1][1] == '-')
	    {
			square[1][1] = mark;
	    }
	    	
	    else if (choice == 7 && square[1][2] == '-')
	    {
		    square[1][2] = mark;
		}
			
	    else if (choice == 8 && square[1][3] == '-')
	    {
		    square[1][3] = mark;
	    }
	    
	    else if (choice == 9 && square[2][0] == '-')
	    {
		    square[2][0] = mark;
	    }
	    
	    else if (choice == 10 && square[2][1] == '-')
	    {
		    square[2][1] = mark;
	    }
	    
	    else if (choice == 11 && square[2][2] == '-')
	    {
		    square[2][2] = mark;
	    }
	    
	    else if (choice == 12 && square[2][3] == '-')
	    {
		    square[2][3] = mark;
	    }
	    
	    else if (choice == 13 && square[3][0] == '-')
	    {
		    square[3][0] = mark;
	    }
	    
	    else if (choice == 14 && square[3][1] == '-')
	    {
		    square[3][1] = mark;
	    }
	    
	    else if (choice == 15 && square[3][2] == '-')
	    {
		    square[3][2] = mark;
	    }
	    
	    else if (choice == 16 && square[3][3] == '-')
	    {
		    square[3][3] = mark;
	    }
		else
	    {
	    	printf("Invalid move ");
	        player--;
	        getch();
	    }
			i = checkwin4x4();
			player++;
	}while(i==-1);
	buatpapan4x4();
	printhasil();
}

void mlty5x5()
{
	do
	{
		buatpapan5x5();
		player = (player % 2) ? 1 : 2;
	
	    printf("\t\t\t\t\t\t\t\t      Player %d, enter a number:  ", player);
	    scanf("%d", &choice);
	
	    mark = (player == 1) ? 'X' : 'O';
	
	    if (choice == 1 && square[0][0] == '-')
		{
	        square[0][0] = mark;
	    }
	            
	   else if (choice == 2 && square[0][1] == '-')
		{
	        square[0][1] = mark;
	  	}
			    
	    else if (choice == 3 && square[0][2] == '-')
		{        
		    square[0][2] = mark;
	    }
	        
		else if (choice == 4 && square[0][3] == '-')
	    {
		    square[0][3] = mark;
	    }
			    
	    else if (choice == 5 && square[0][4] == '-')
		{        
		    square[0][4] = mark;
	    }
	        
		else if (choice == 6 && square[1][0] == '-')
	    {
			square[1][0] = mark;
	    }
	    	
	    else if (choice == 7 && square[1][1] == '-')
	    {
		    square[1][1] = mark;
		}
			
	    else if (choice == 8 && square[1][2] == '-')
	    {
		    square[1][2] = mark;
	    }
	    
	    else if (choice == 9 && square[1][3] == '-')
	    {
		    square[1][3] = mark;
	    }
	    
	    else if (choice == 10 && square[1][4] == '-')
	    {
		    square[1][4] = mark;
	    }
	    
	    else if (choice == 11 && square[2][0] == '-')
	    {
		    square[2][0] = mark;
	    }
	    
	    else if (choice == 12 && square[2][1] == '-')
	    {
		    square[2][1] = mark;
	    }
	    
	    else if (choice == 13 && square[2][2] == '-')
	    {
		    square[2][2] = mark;
	    }
	    
	    else if (choice == 14 && square[2][3] == '-')
	    {
		    square[2][3] = mark;
	    }
	    
	    else if (choice == 15 && square[2][4] == '-')
	    {
		    square[2][4] = mark;
	    }
	    
	    else if (choice == 16 && square[3][0] == '-')
	    {
		    square[3][0] = mark;
	    }
	    
	    else if (choice == 17 && square[3][1] == '-')
	    {
		    square[3][1] = mark;
	    }
	    
	    else if (choice == 18 && square[3][2] == '-')
	    {
		    square[3][2] = mark;
	    }
	    
	    else if (choice == 19 && square[3][3] == '-')
	    {
		    square[3][3] = mark;
	    }
	    
	    else if (choice == 20 && square[3][4] == '-')
	    {
		    square[3][4] = mark;
	    }
	    
	    else if (choice == 21 && square[4][0] == '-')
	    {
		    square[4][0] = mark;
	    }
	    
	    else if (choice == 22 && square[4][1] == '-')
	    {
		    square[4][1] = mark;
	    }
	    
	    else if (choice == 23 && square[4][2] == '-')
	    {
		    square[4][2] = mark;
	    }
	    
	    else if (choice == 24 && square[4][3] == '-')
	    {
		    square[4][3] = mark;
	    }
	    
	    else if (choice == 25 && square[4][4] == '-')
	    {
		    square[4][4] = mark;
	    }
	    
	    else
	    {
	    	printf("Invalid move ");
	        player--;
	        getch();
	    }
		i = checkwin5x5();
	    player++;
	}while(i == -1);
	buatpapan5x5;
	printhasil();
}

void buatpapan3x3()
{
	header();
	printf("\t\t\t\t\t\t\t\t      Player 1 (X)  -  Player 2 (O)\n\n\n");
	printf("\t\t\t\t\t\t\t\t||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t\t\t||1          ||2          ||3          ||\n");
	printf("\t\t\t\t\t\t\t\t||     %c     ||     %c     ||     %c     ||\n",square[0][0],square[0][1],square[0][2]);
	printf("\t\t\t\t\t\t\t\t||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t\t\t||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t\t\t||4          ||5          ||6          ||\n");
	printf("\t\t\t\t\t\t\t\t||     %c     ||     %c     ||     %c     ||\n",square[1][0],square[1][1],square[1][2]);
	printf("\t\t\t\t\t\t\t\t||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t\t\t||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t\t\t||7          ||8          ||9          ||\n");
	printf("\t\t\t\t\t\t\t\t||     %c     ||     %c     ||     %c     ||\n",square[2][0],square[2][1],square[2][2]);
	printf("\t\t\t\t\t\t\t\t||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t\t\t||===========||===========||===========||\n\n\n");
}
 
 void buatpapan4x4()
{
	header();
	printf("\t\t\t\t\t\t\t\t      Player 1 (X)  -  Player 2 (O)\n\n\n");
	printf("\t\t\t\t\t\t\t||===========||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t\t||1          ||2          ||3          ||4          ||\n");
	printf("\t\t\t\t\t\t\t||     %c     ||     %c     ||     %c     ||     %c     ||\n", square[0][0], square[0][1], square[0][2], square[0][3]);
	printf("\t\t\t\t\t\t\t||           ||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t\t||===========||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t\t||5          ||6          ||7          ||8          ||\n");
	printf("\t\t\t\t\t\t\t||     %c     ||     %c     ||     %c     ||     %c     ||\n", square[1][0], square[1][1], square[1][2], square[1][3]);
	printf("\t\t\t\t\t\t\t||           ||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t\t||===========||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t\t||9          ||10         ||11         ||12         ||\n");
	printf("\t\t\t\t\t\t\t||     %c     ||     %c     ||     %c     ||     %c     ||\n", square[2][0], square[2][1], square[2][2], square[2][3]);
	printf("\t\t\t\t\t\t\t||           ||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t\t||===========||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t\t||13         ||14         ||15         ||16         ||\n");
	printf("\t\t\t\t\t\t\t||     %c     ||     %c     ||     %c     ||     %c     ||\n", square[3][0], square[3][1], square[3][2], square[3][3]);
	printf("\t\t\t\t\t\t\t||           ||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t\t||===========||===========||===========||===========||\n\n\n");
}

void buatpapan5x5()
{
	header();
	printf("\t\t\t\t\t\t\t\t      Player 1 (X)  -  Player 2 (O)\n\n\n");
	printf("\t\t\t\t\t\t   ||===========||===========||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t   ||1          ||2          ||3          ||4          ||5          ||\n");
	printf("\t\t\t\t\t\t   ||     %c     ||     %c     ||     %c     ||     %c     ||     %c     ||\n", square[0][0], square[0][1], square[0][2], square[0][3], square[0][4]);
	printf("\t\t\t\t\t\t   ||           ||           ||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t   ||===========||===========||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t   ||6          ||7          ||8          ||9          ||10         ||\n");
	printf("\t\t\t\t\t\t   ||     %c     ||     %c     ||     %c     ||     %c     ||     %c     ||\n", square[1][0], square[1][1], square[1][2], square[1][3], square[1][4]);
	printf("\t\t\t\t\t\t   ||           ||           ||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t   ||===========||===========||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t   ||11         ||12         ||13         ||14         ||15         ||\n");
	printf("\t\t\t\t\t\t   ||     %c     ||     %c     ||     %c     ||     %c     ||     %c     ||\n", square[2][0], square[2][1], square[2][2], square[2][3], square[2][4]);
	printf("\t\t\t\t\t\t   ||           ||           ||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t   ||===========||===========||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t   ||16         ||17         ||18         ||19         ||20         ||\n");
	printf("\t\t\t\t\t\t   ||     %c     ||     %c     ||     %c     ||     %c     ||     %c     ||\n", square[3][0], square[3][1], square[3][2], square[3][3], square[3][4]);
	printf("\t\t\t\t\t\t   ||           ||           ||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t   ||===========||===========||===========||===========||===========||\n");
	printf("\t\t\t\t\t\t   ||21         ||22         ||23         ||24         ||25         ||\n");
	printf("\t\t\t\t\t\t   ||     %c     ||     %c     ||     %c     ||     %c     ||     %c     ||\n", square[4][0], square[4][1], square[4][2], square[4][3], square[4][4]);
	printf("\t\t\t\t\t\t   ||           ||           ||           ||           ||           ||\n");
	printf("\t\t\t\t\t\t   ||===========||===========||===========||===========||===========||\n\n\n");
}
 
void papan()
{
	for(i=0;i<25;i++)
	{
		for(j=0;j<25;j++)
		{    
			square[i][j] = '-';
		}
	}
}

void printhasil()
{
    if (i == 1)
        printf("\t\t\t\t\t\t\t\t           ==>\aPlayer %d Win<== ", --player);
    else
        printf("\t\t\t\t\t\t\t\t              ==>\aGame draw<==");

    getch();
}

int checkwin3x3()
{
	if (square[0][0] == 'X' && square[0][1] == 'X' && square[0][2] == 'X')
    {
		return 1;
    }
    if (square[0][0] == 'O' && square[0][1] == 'O' && square[0][2] == 'O')
    {
		return 1;
    }
    else if (square[1][0] == 'X' && square[1][1] == 'X' && square[1][2] == 'X')
    {
		return 1;
    }
    else if (square[1][0] == 'O' && square[1][1] == 'O' && square[1][2] == 'O')
    {
		return 1;
    }
    else if (square[2][0] == 'X' && square[2][1] == 'X' && square[2][2]== 'X')
    {
		return 1;
    }
    else if (square[2][0] == 'O' && square[2][1] == 'O' && square[2][2]== 'O')
    {
		return 1;
    }
    else if (square[0][0] == 'X' && square[1][0] == 'X' && square[2][0] == 'X')
    {
		return 1;
    }
    else if (square[0][0] == 'O' && square[1][0] == 'O' && square[2][0] == 'O')
    {
		return 1;
    }
    else if (square[0][1] == 'X' && square[1][1] == 'X' && square[2][1] == 'X')
    {
        return 1;
	}
    else if (square[0][1] == 'O' && square[1][1] == 'O' && square[2][1] == 'O')
    {
	    return 1;
    }
    else if (square[0][2] == 'X' && square[1][2] == 'X' && square[2][2] == 'X')
    {
	    return 1;
    }
	else if (square[0][2] == 'O' && square[1][2] == 'O' && square[2][2] == 'O')
    {
	    return 1;
    }
    else if (square[0][0] == 'X' && square[1][1] == 'X' && square[2][2] == 'X')
    {
	    return 1;
	}
    else if (square[0][0] == 'O' && square[1][1] == 'O' && square[2][2] == 'O')
    {
	    return 1;	        
	}
	else if (square[0][2] == 'X' && square[1][1] == 'X' && square[2][0] == 'X')
    {
	    return 1;
	}
	else if (square[0][2] == 'O' && square[1][1] == 'O' && square[2][0] == 'O')
    {
	    return 1;
	}
    else if (square[0][0] != '-' && square[0][1] != '-' && square[0][2] != '-' && square[1][0] != '-' && square[1][1] != '-' && square[1][2] != '-' && square[2][0] != '-' && square[2][1] != '-' && square[2][2] != '-' )
    {
	    return 0;
	}
    else if (square[0][0] != '-' && square[0][1] != '-' && square[0][2] != '-' && square[1][0] != '-' && square[1][1] != '-' && square[1][2] != '-' && square[2][0] != '-' && square[2][1] != '-' && square[2][2] != '-' )
    {
	    return 0;
    }
    else
    {
	    return -1;
	}
}

int checkwin4x4()
{
	if (square[0][0] == 'X' && square[0][1] == 'X' && square[0][2] == 'X' && square[0][3] == 'X')
    {
		return 1;
    }
    if (square[0][0] == 'O' && square[0][1] == 'O' && square[0][2] == 'O' && square[0][3] == 'O')
    {
		return 1;
    }
    else if (square[1][0] == 'X' && square[1][1] == 'X' && square[1][2] == 'X' && square[1][3] == 'X')
    {
		return 1;
    }
    else if (square[1][0] == 'O' && square[1][1] == 'O' && square[1][2] == 'O' && square[1][3] == 'X')
    {
		return 1;
    }
    else if (square[2][0] == 'X' && square[2][1] == 'X' && square[2][2]== 'X' && square[2][3] == 'X')
    {
		return 1;
    }
    else if (square[2][0] == 'O' && square[2][1] == 'O' && square[2][2]== 'O' && square[2][3] == 'O')
    {
		return 1;
    }
    else if (square[3][0] == 'X' && square[3][1] == 'X' && square[3][2]== 'X' && square[3][3] == 'X')
    {
		return 1;
    }
    else if (square[3][0] == 'O' && square[3][1] == 'O' && square[3][2]== 'O' && square[3][3] == 'O')
    {
		return 1;
    }
    else if (square[0][0] == 'X' && square[1][0] == 'X' && square[2][0] == 'X' && square[3][0] == 'X')
    {
		return 1;
    }
    else if (square[0][0] == 'O' && square[1][0] == 'O' && square[2][0] == 'O' && square[3][0] == 'O')
    {
		return 1;
    }
    else if (square[0][1] == 'X' && square[1][1] == 'X' && square[2][1] == 'X' && square[3][1] == 'X')
    {
        return 1;
	}
    else if (square[0][1] == 'O' && square[1][1] == 'O' && square[2][1] == 'O' && square[3][1] == 'O')
    {
	    return 1;
    }
    else if (square[0][2] == 'X' && square[1][2] == 'X' && square[2][2] == 'X' && square[3][2] == 'X')
    {
	    return 1;
    }
	else if (square[0][2] == 'O' && square[1][2] == 'O' && square[2][2] == 'O' && square[3][2] == 'O')
    {
	    return 1;
    }
    else if (square[0][3] == 'X' && square[1][3] == 'X' && square[2][3] == 'X' && square[3][3] == 'X')
    {
	    return 1;
    }
	else if (square[0][3] == 'O' && square[1][3] == 'O' && square[2][3] == 'O' && square[3][3] == 'O')
    {
	    return 1;
    }
    else if (square[0][0] == 'X' && square[1][1] == 'X' && square[2][2] == 'X' && square[3][3] == 'X')
    {
	    return 1;
	}
    else if (square[0][0] == 'O' && square[1][1] == 'O' && square[2][2] == 'O' && square[3][3] == 'O')
    {
	    return 1;	        
	}
	else if (square[3][0] == 'X' && square[2][1] == 'X' && square[1][2] == 'X' && square[0][3] == 'X')
    {
	    return 1;
	}
	else if (square[3][0] == 'O' && square[2][1] == 'O' && square[1][2] == 'O' && square[0][3] == 'X')
    {
	    return 1;
	}
    else if (square[0][0] != '-' && square[0][1] != '-' && square[0][2] != '-' && square[0][3] != '-' && square[1][0] != '-' && square[1][1] != '-' && square[1][2] != '-' && square[1][3] != '-' && square[2][0] != '-' && square[2][1] != '-' && square[2][2] != '-' && square[2][3] != '-' && square[3][0] != '-' && square[3][1] != '-' && square[3][2] != '-' && square[3][3] != '-')
    {
	    return 0;
	}
    else if (square[0][0] != '-' && square[0][1] != '-' && square[0][2] != '-' && square[0][3] != '-' && square[1][0] != '-' && square[1][1] != '-' && square[1][2] != '-' && square[1][3] != '-' && square[2][0] != '-' && square[2][1] != '-' && square[2][2] != '-' && square[2][3] != '-' && square[3][0] != '-' && square[3][1] != '-' && square[3][2] != '-' && square[3][3] != '-')
    {
	    return 0;
    }
    else
    {
	    return -1;
	}
}

int checkwin5x5()
{
	if (square[0][0] == 'X' && square[0][1] == 'X' && square[0][2] == 'X' && square[0][3] == 'X' && square[0][4] == 'X')
    {
		return 1;
    }
    if (square[0][0] == 'O' && square[0][1] == 'O' && square[0][2] == 'O' && square[0][3] == 'O' && square[0][4] == 'O')
    {
		return 1;
    }
    else if (square[1][0] == 'X' && square[1][1] == 'X' && square[1][2] == 'X' && square[1][3] == 'X' && square[1][4] == 'X')
    {
		return 1;
    }
    else if (square[1][0] == 'O' && square[1][1] == 'O' && square[1][2] == 'O' && square[1][3] == 'O' && square[1][4] == '0')
    {
		return 1;
    }
    else if (square[2][0] == 'X' && square[2][1] == 'X' && square[2][2] == 'X' && square[2][3] == 'X' && square[2][4] == 'X')
    {
		return 1;
    }
    else if (square[2][0] == 'O' && square[2][1] == 'O' && square[2][2] == 'O' && square[2][3] == 'O' && square[2][4] == 'O')
    {
		return 1;
    }
    else if (square[3][0] == 'X' && square[3][1] == 'X' && square[3][2] == 'X' && square[3][3] == 'X' && square[3][4] == 'X')
    {
    	return 1;
	}
	else if (square[3][0] == 'O' && square[3][1] == 'O' && square[3][2] == 'O' && square[3][3] == 'O' && square[3][4] == 'O')
    {
    	return 1;
	}
	else if (square[4][0] == 'X' && square[4][1] == 'X' && square[4][2] == 'X' && square[4][3] == 'X' && square[4][4] == 'X')
    {
    	return 1;
	}
	else if (square[4][0] == 'O' && square[4][1] == 'O' && square[4][2] == 'O' && square[4][3] == 'O' && square[4][4] == 'O')
    {
    	return 1;
	}
    else if (square[0][0] == 'X' && square[1][0] == 'X' && square[2][0] == 'X' && square[3][0] == 'X' && square[4][0] == 'X')
    {
		return 1;
    }
    else if (square[0][0] == 'O' && square[1][0] == 'O' && square[2][0] == 'O' && square[3][0] == 'O' && square[4][0] == '0')
    {
		return 1;
    }
    else if (square[0][1] == 'X' && square[1][1] == 'X' && square[2][1] == 'X' && square[3][1] == 'X' && square[4][1] == 'X')
    {
        return 1;
	}
    else if (square[0][1] == 'O' && square[1][1] == 'O' && square[2][1] == 'O' && square[3][1] == 'O' && square[4][1] == 'O')
    {
	    return 1;
    }
    else if (square[0][2] == 'X' && square[1][2] == 'X' && square[2][2] == 'X' && square[3][2] == 'X' && square[4][2] == 'X')
    {
	    return 1;
    }
	else if (square[0][2] == 'O' && square[1][2] == 'O' && square[2][2] == 'O' && square[3][2] == 'O' && square[4][2] == 'O')
    {
	    return 1;
	}
	else if (square[0][3] == 'X' && square[1][3] == 'X' && square[2][3] == 'X' && square[3][3] == 'X' && square[4][3] == 'X')
    {
	    return 1;
	}
	else if (square[0][3] == 'O' && square[1][3] == 'O' && square[2][3] == 'O' && square[3][3] == 'O' && square[4][3] == 'O')
    {
	    return 1;
	}
	else if (square[0][4] == 'X' && square[1][4] == 'X' && square[2][4] == 'X' && square[3][4] == 'X' && square[4][4] == 'X')
    {
	    return 1;
	}
	else if (square[0][4] == 'O' && square[1][4] == 'O' && square[2][4] == 'O' && square[3][4] == 'O' && square[4][4] == 'O')
    {
	    return 1;
	}
    else if (square[0][0] == 'X' && square[1][1] == 'X' && square[2][2] == 'X' && square[3][3] == 'X' && square[4][4] == 'X')
    {
	    return 1;
	}
    else if (square[0][0] == 'O' && square[1][1] == 'O' && square[2][2] == 'O' && square[3][3] == 'O' && square[4][4] == 'O')
    {
	    return 1;	        
	}
	else if (square[0][2] == 'X' && square[1][1] == 'X' && square[2][0] == 'X' && square[3][0] == 'X' && square[4][0] == 'X')
    {
	    return 1;
	}
	else if (square[0][4] == 'O' && square[1][3] == 'O' && square[2][2] == 'O' && square[3][1] == 'O' && square[4][0] == 'O')
    {
	    return 1;
	}
	else if (square[0][0] != '-' && square[0][1] != '-' && square[0][2] != '-' && square[0][3] != '-' && square[0][4] != '-' && square[1][0] != '-' && square[1][1] != '-' && square[1][2] != '-' && square[1][3] != '-' && square[1][4] != '-' && square[2][0] != '-' && square[2][1] != '-' && square[2][2] != '-' && square[2][3] != '-' && square[2][4] != '-' && square[3][0] != '-' && square[3][1] != '-' && square[3][2] != '-' && square[3][3] != '-' && square[3][4] != '-' && square[4][0] != '-' && square[4][1] != '-' && square[4][2] != '-' && square[4][3] != '-' && square[4][4] != '-')
	{
	    return 0;
	}
	else if (square[0][0] != '-' && square[0][1] != '-' && square[0][2] != '-' && square[0][3] != '-' && square[0][4] != '-' && square[1][0] != '-' && square[1][1] != '-' && square[1][2] != '-' && square[1][3] != '-' && square[1][4] != '-' && square[2][0] != '-' && square[2][1] != '-' && square[2][2] != '-' && square[2][3] != '-' && square[2][4] != '-' && square[3][0] != '-' && square[3][1] != '-' && square[3][2] != '-' && square[3][3] != '-' && square[3][4] != '-' && square[4][0] != '-' && square[4][1] != '-' && square[4][2] != '-' && square[4][3] != '-' && square[4][4] != '-')
    {
	    return 0;
    }
	else
    {
	    return -1;
	}
}

void pilihanmode(int *i)
{
	header();
	printf("\n\n\t\t\t\t                    ||===========||===========||===========||===========||===========||\n");
	printf("\n\t\t\t\t\t\t    ||      Choose Difficulty\t     :\t\t\t\t     ||\n");
    printf("\t\t\t\t\t\t    ||    1. Newbie\t\t\t\t\t\t     ||\n");
    printf("\t\t\t\t\t\t    ||    2. Normies\t\t\t\t\t\t     ||\n");
    printf("\t\t\t\t\t\t    ||    3. Godly\t\t\t\t\t\t     ||\n\n");
	printf("\t\t\t\t                    ||===========||===========||===========||===========||===========||\n");
    printf("\t\t\t\t\t\t         Your Choice\t\t     :\t\t\t");
	scanf("%d", &*i);
}