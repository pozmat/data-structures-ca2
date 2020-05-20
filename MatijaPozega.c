#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Question 1
typedef struct member
{
    char rank;
    int id;
    int score;
    float balance;
    struct member *next;
} member;

// Question 2
void print_struct(member* ptr) {

    member* entry = ptr;

    printf("Here we have the data that describes our members.\nRank: %c \nID: %d \nScore: %d \nBalance: %f \n", entry->rank, entry->id, entry->score, entry->balance);
        printf("\n");
}

// Question 3
member* insert(member *ptr, char rank, int id, int score, float balance)
{

    member *entry = (member*)malloc(sizeof(member));
    if(entry == NULL)
    {
        printf("No Free Memory!\n");
        exit(0);
    }
    else
    {
        entry->rank = rank;
        entry->id = id;
        entry->score = score;
        entry->balance = balance;
        entry->next = NULL;

        if(ptr == NULL)
        {
            ptr = entry;
        }
        else
        {
            member *temp = ptr;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = entry;
        }
     }
     return ptr;
}

// Function that prints out the frist 10 memeber for Question 4
void print_member(member* ptr)
{
    int counter = 0;
    member* entry = ptr;

    while((entry != NULL) && counter < 10)
    {
        counter++;
        printf("%c \t %d \t %d \t %f \n", entry->rank, entry->id, entry->score, entry->balance);
        printf("\n");
        entry = entry->next;
    }
}

// Question 5.1
void get_ranks(member* ptr)
{
    int counter = 0;
    int rankACount = 0;
    int rankBCount = 0;
    int rankCCount = 0;
    int rankDCount = 0;
    int rankECount = 0;
    int rankFCount = 0;
    int rankGCount = 0;
    int rankHCount = 0;
    int rankICount = 0;
    int rankJCount = 0;

    member* entry = ptr;

    while(entry != NULL)
    {
        counter++;
        if(entry->rank == 'A'){
            rankACount++;
        }
        else if(entry->rank == 'B'){
            rankBCount++;            
        }
        else if(entry->rank == 'C'){
            rankCCount++;            
        }
        else if(entry->rank == 'D'){
            rankDCount++;            
        }
        else if(entry->rank == 'E'){
            rankECount++;            
        }
        else if(entry->rank == 'F'){
            rankFCount++;            
        }
        else if(entry->rank == 'G'){
            rankGCount++;            
        }
        else if(entry->rank == 'H'){
            rankHCount++;            
        }
        else if(entry->rank == 'I'){
            rankICount++;            
        }
        else if(entry->rank == 'J'){
            rankJCount++;            
        }
        entry = entry->next;
    }
    printf("Rank:\t\t\t\t A \t\t B \t\t C \t\t D \t\t E \t\t\t F \t\t G \t\t H \t\t I \t\t J \nPercentage:\t\t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t \n",
        (((float)rankACount/counter)*100), (((float)rankBCount/counter)*100), (((float)rankCCount/counter)*100), 
        (((float)rankDCount/counter)*100), (((float)rankECount/counter)*100), (((float)rankFCount/counter)*100), 
        (((float)rankGCount/counter)*100), (((float)rankHCount/counter)*100), (((float)rankICount/counter)*100), 
        (((float)rankJCount/counter)*100));
}

// Question 5.2
void get_score_averages(member* ptr)
{
    int rankACount = 0;
    int rankBCount = 0;
    int rankCCount = 0;
    int rankDCount = 0;
    int rankECount = 0;
    int rankFCount = 0;
    int rankGCount = 0;
    int rankHCount = 0;
    int rankICount = 0;
    int rankJCount = 0;

    int scoreATotal = 0;
    int scoreBTotal = 0;
    int scoreCTotal = 0;
    int scoreDTotal = 0;
    int scoreETotal = 0;
    int scoreFTotal = 0;
    int scoreGTotal = 0;
    int scoreHTotal = 0;
    int scoreITotal = 0;
    int scoreJTotal = 0;


    member* entry = ptr;

    while(entry != NULL)
    {
        if(entry->rank == 'A'){
            rankACount++;
            scoreATotal = scoreATotal + entry->score;
        }
        else if(entry->rank == 'B'){
            rankBCount++;
            scoreBTotal = scoreBTotal + entry->score;            
        }
        else if(entry->rank == 'C'){
            rankCCount++;
            scoreCTotal = scoreCTotal + entry->score;            
        }
        else if(entry->rank == 'D'){
            rankDCount++;
            scoreDTotal = scoreDTotal + entry->score;            
        }
        else if(entry->rank == 'E'){
            rankECount++;
            scoreETotal = scoreETotal + entry->score;            
        }
        else if(entry->rank == 'F'){
            rankFCount++;
            scoreFTotal = scoreFTotal + entry->score;            
        }
        else if(entry->rank == 'G'){
            rankGCount++;
            scoreGTotal = scoreGTotal + entry->score;            
        }
        else if(entry->rank == 'H'){
            rankHCount++;
            scoreHTotal = scoreHTotal + entry->score;            
        }
        else if(entry->rank == 'I'){
            rankICount++;
            scoreITotal = scoreITotal + entry->score;            
        }
        else if(entry->rank == 'J'){
            rankJCount++;
            scoreJTotal = scoreJTotal + entry->score;            
        }
        entry = entry->next;
    }
    printf("Score Average:\t\t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t \n",
        ((float)scoreATotal/rankACount), ((float)scoreBTotal/rankBCount), ((float)scoreCTotal/rankCCount),
        ((float)scoreDTotal/rankDCount), ((float)scoreETotal/rankECount), ((float)scoreFTotal/rankFCount), 
        ((float)scoreGTotal/rankGCount), ((float)scoreHTotal/rankHCount), ((float)scoreITotal/rankICount), 
        ((float)scoreJTotal/rankJCount));
}

// Question 5.3
void get_balance_averages(member* ptr)
{
    int rankACount = 0;
    int rankBCount = 0;
    int rankCCount = 0;
    int rankDCount = 0;
    int rankECount = 0;
    int rankFCount = 0;
    int rankGCount = 0;
    int rankHCount = 0;
    int rankICount = 0;
    int rankJCount = 0;

    int balanceATotal = 0;
    int balanceBTotal = 0;
    int balanceCTotal = 0;
    int balanceDTotal = 0;
    int balanceETotal = 0;
    int balanceFTotal = 0;
    int balanceGTotal = 0;
    int balanceHTotal = 0;
    int balanceITotal = 0;
    int balanceJTotal = 0;


    member* entry = ptr;

    while(entry != NULL)
    {
        if(entry->rank == 'A'){
            rankACount++;
            balanceATotal = balanceATotal + entry->balance;
        }
        else if(entry->rank == 'B'){
            rankBCount++;
            balanceBTotal = balanceBTotal + entry->balance;            
        }
        else if(entry->rank == 'C'){
            rankCCount++;
            balanceCTotal = balanceCTotal + entry->balance;            
        }
        else if(entry->rank == 'D'){
            rankDCount++;
            balanceDTotal = balanceDTotal + entry->balance;            
        }
        else if(entry->rank == 'E'){
            rankECount++;
            balanceETotal = balanceETotal + entry->balance;            
        }
        else if(entry->rank == 'F'){
            rankFCount++;
            balanceFTotal = balanceFTotal + entry->balance;            
        }
        else if(entry->rank == 'G'){
            rankGCount++;
            balanceGTotal = balanceGTotal + entry->balance;            
        }
        else if(entry->rank == 'H'){
            rankHCount++;
            balanceHTotal = balanceHTotal + entry->balance;            
        }
        else if(entry->rank == 'I'){
            rankICount++;
            balanceITotal = balanceITotal + entry->balance;            
        }
        else if(entry->rank == 'J'){
            rankJCount++;
            balanceJTotal = balanceJTotal + entry->balance;            
        }
        entry = entry->next;
    }
    printf("Balance Average:\t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t %10.2f \t \n",
        ((float)balanceATotal/rankACount), ((float)balanceBTotal/rankBCount), ((float)balanceCTotal/rankCCount),
        ((float)balanceDTotal/rankDCount), ((float)balanceETotal/rankECount), ((float)balanceFTotal/rankFCount), 
        ((float)balanceGTotal/rankGCount), ((float)balanceHTotal/rankHCount), ((float)balanceITotal/rankICount), 
        ((float)balanceJTotal/rankJCount));
}

// Main function controling the program flow, and the part of Question 4 with randomizing 1000 entries
int main()
{
    member *root = NULL;

    int count = 0;

    char rndChr = ' ';
    int rndInt = 0;    
    float rndFlt = 1.0;
    srand(time(NULL));

    for(count = 0; count < 1000; count++)
    {
        rndInt =  rand();
        rndChr = (char) ((rand() %10) + 65);
        rndFlt = (((float)rand()/(float)(RAND_MAX)) * 10000);

        root = insert(root, rndChr, (1000 + count), rndInt, rndFlt);
    }

    print_struct(root);

    printf("\nFirst 10 members are:\nRank \t ID \t Score \t Balance \n");

    print_member(root);

    printf("\nSome statistics about our memembers, as per Question 5:\n");

    get_ranks(root);
    get_score_averages(root);
    get_balance_averages(root);
        
    return 0;
}