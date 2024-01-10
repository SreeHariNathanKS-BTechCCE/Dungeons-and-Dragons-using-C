/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
int DieRoll(int);
int Advantage(char[],int,char[],int);

int main()
{
    struct game{
        int random1, i, audio, path, winningpoint, points, code, usercode;
        char gameroom[50],scenario[7],response[17],direction[8],character[5];
    }s1;
    printf("Enter a name for the gamroom:");
    scanf("%s",s1.gameroom);
    srand(time(0));
    random1.s1=(rand()%(9999-1000+1))+1000;
    printf("Random number: %d", s1.random1);
    printf("\nCode for the gameroom %s is %d",s1.gameroom,s1.random1);
    printf("\nDo you want to connect over audio? If yes, press 1");
    scanf("%d",&s1.audio);
    if(s1.audio==1){
        printf("\nAudio connection established!");
    }
    printf("\nDo you want to start the game? If yes, enter the code:");
    scanf("%d",&s1.usercode);
    points = 0;
    strcpy(s1.direction,"");
    s1.path= 0;
    if(s1.usercode==s1.random1){
        printf("\nWhich scenario would you like to play in? kingdom or forest, choose one:");
        scanf("%s",s1.scenario);
        s1.points= 0;
        s1.winningpoint= 20;
        if (strcmp(s1.scenario,"kingdom")==0){
           printf("CHARACTER ABILITIES:  Elf-flighty, frivolous and good with spells\n,  Dwarf-handy with weapons and in combat\n,  Gnome-good at martial arts and illusion magic\n");
           printf("Enter the character you want to be: Elf, Dwarf or Gnome?");
           scanf("%s",s1.character);
           printf("The kingdom's treasure was robbed by a couple of goons. It consisted of important documents and lots of gold. Your mission is to find the robbers and retrieve the treasure. Good luck on your mission!");
             while(s1.points<s1.winningpoint){
                printf("Which direction do you want to take? Enter left, right or straight:");
                scanf("%s",s1.direction);
                if (strcmp(s1.direction,"left")==0){
                    printf("Do you want to search in 'streets' or 'houses'?");
                    scanf("%s",s1.response);
                    if (strcmp(s1.response,"streets")==0){
                        s1.points= Advantage(character,points,direction,path);
                        s1.points= DieRoll(points);
                    }
                    else if(strcmp(response,"houses")==0){
                        s1.points = Advantage(character,points,direction,path);
                        s1.points = DieRoll(points);
                    }
                }
                        
                if (strcmp(s1.direction,"right")==0){
                    printf("You caught one of the robbers, but the others escaped with the treasure. You can either try to get information out of the robber caught or try to follow the other robbers.");
                    printf("Do you want to 'follow' or 'getinformation'?");
                    scanf("%s",s1.response);
                    if (strcmp(s1.response,"follow")==0){
                         s1.points = Advantage(character,points,direction,path);
                         s1.points = DieRoll(points);
                    }
                    else if(strcmp(s1.response,"getinformation")==0){
                        s1.points = Advantage(character,points,direction,path);
                        s1.points = DieRoll(points);
                    }
                }
                if (strcmp(s1.direction,"straight")==0){
                    printf("You fall into a trap laid by the robbers. You can either signal for a passerby to come help you out or you can try to get yourself out using things in the surroundings.");
                    printf("Do you want to seek 'help' or get out on your 'own'?");
                    scanf("%s",s1.response);
                    if (strcmp(response,"help")==0){
                         s1.points = Advantage(character,points,direction,path);
                         s1.points = DieRoll(points);
                    }
                    else if (strcmp(response,"own")==0){
                        s1.points = Advantage(character,points,direction,path);
                        s1.points = DieRoll(points);
                    }
                }    
            
            }   
            printf("Congrats! You have found the robbers and retreived the treasure!");
        }
        if (strcmp(scenario,"forest")==0){
            printf("CHARACTER ABILITIES:  Elf-flighty, frivolous and good with spells\n,  Dwarf-handy with weapons and in combat\n,  Gnome-good at martial arts and illusion magic\n");
            printf("Enter the character you want to be: Elf, Dwarf or Gnome?");
            scanf("%s",character);
            printf("A child was abducted by a mountain troll and taken into the forest. You have been assigned with a mission to rescue the child and kill the troll. Good luck on your mission!");
            while (points<winningpoint){
                printf("Which path do you want to take? Enter 1, 2 or 3:");
                scanf("%d",&path);
                if (path==1){
                    printf("You are starving. You can either eat from the forest vegetation which might be poisonous or you can hunt an animal.");
                    printf("Do you want to eat 'forestvegeatation' or 'hunt'?");
                    scanf("%s",response);
                    if (strcmp(response,"forestvegetation")==0){
                        points = Advantage(character,points,direction,path);
                        points = DieRoll(points);
                    }
                    else if(strcmp(response,"hunt")==0){
                        points = Advantage(character,points,direction,path);
                        points = DieRoll(points);
                    }
                }
                if (path==2){
                    printf("You come across a river which needs to be crossed. You have two options, one is to swim across it and the other is to take a much longer path which is muddy and unstable.");
                    printf("Do you want to 'swim' or take the 'muddypath'?");
                    scanf("%s",response);
                    if (strcmp(response,"swim")==0){
                        points = Advantage(character,points,direction,path);
                        points = DieRoll(points);
                    }
                    else if(strcmp(response,"muddypath")==0){
                            points = Advantage(character,points,direction,path);
                            points = DieRoll(points);
                    }
                }
                if (path==3){
                    printf("You encounter a gigantic troll which you need to get past. You can fight it or sneak past it.");
                    printf("Do you want to 'fight' or 'sneakpast'?");
                    scanf("%s",response);
                    if (strcmp(response,"fight")==0){
                        points = Advantage(character,points,direction,path);
                        points = DieRoll(points);
                    }
                    else if(strcmp(response,"sneakpast")==0){
                        points = Advantage(character,points,direction,path);
                        points = DieRoll(points);
                    }
                }    
            }
            printf("Congrats! You have successfully rescued the child and killed the troll!");
        }    
    }        
    else{
        printf("Incorrect code");
    }
}

int Advantage(char character[7], int points, char direction[8], int path)
{
    if (strcmp(direction,"left")==0){
        if (strcmp(character,"Elf")==0){
            printf("You are quick and flighty, making it easier to search.");
            points=points+5;
        }
        else if (strcmp(character,"Gnome")==0){
            printf("You have an enchanted dagger, which will warn you of any danger.");
            points = points+3;
        }
    }        
    if (strcmp(direction,"right")==0){
        if (strcmp(character,"Elf")==0){
            printf("You have the ability to cast a spell and hypnotise the enemy for a short time.");
            points = points+3;
        }
        else if(strcmp(character,"Dwarf")==0){
            printf("You have a handy sword which is helpful in combats.");
            points = points+5;   
        }
    }
    if (strcmp(direction,"straight")==0){
        if(strcmp(character,"Dwarf")==0){
            printf("You are crafty and quick with your hands.");
            points = points+3;
        }
        else if(strcmp(character,"Gnome")==0){
            printf("You have a unique odour which attracts people in your direction.");
            points = points+5;
        }
    }
    if(path==1){
        if (strcmp(character,"Elf")==0){
            printf("You have the ability to magically identify poisonous vegetation.");
            points = points+3;
        }
        else if (strcmp(character,"Dwarf")==0){
            printf("You have a bow and arrow to hunt down food.");
            points = points+5;
        }
    }
    if(path==2){
        if (strcmp(character,"Elf")==0){
            printf("You have the ability to cast a spell and freeze the river for a short time.");
            points = points+5;
        }
        else if(strcmp(character,"Gnome")==0){
            printf("You have an enchanted dagger which can be used to carve a boat.");
            points = points+3;
        }
    }  
    if(path==3){
        if (strcmp(character,"Dwarf")==0){
            printf("You have a handy axe which is helpful in battles.");
            points = points+3;
        }
        else if (strcmp(character,"Gnome")==0){
            printf("You have an dagger which is under a powerful spell.");
            points = points+5;
        }
    } 
    return points;
}

int DieRoll(int points)
{
    int number;
    srand(time(0));
    number=(rand()%(6-1+1))+1;
    if(number==1){
        printf("You have rolled a 1! You have failed in your attempt.");
        s1.points=points-5;
    }
    if(number==2){
        printf("You have rolled a 2!");
        points=points-3;
    }
    if(number==3){
        printf("You have rolled a 3!");
        points=points+2;
    }
    if(number==4){
        printf("You have rolled a 4!");
        points=points+5;
    }
    if(number==5){
        printf("You have rolled a 5!");
        points=points+9;
    }
    if(number==6){
        printf("You have rolled a 6! You are successful in your attempt.");
        points = points+12;
    }
    return points;
}
