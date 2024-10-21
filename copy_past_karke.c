#include <stdio.h>
#include <stdbool.h>
#include <string.h> // strcpy and strcat ke liye 

// Enum for Suit
typedef enum
 {
    spade,
    heart,
    diamond,
    club
} 
Suit;

// Enum for Face
typedef enum 
{
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
    ace
}
 Face;

// Struct for Card
typedef struct 
{
    Suit suit;
    int suitValue;
    Face face;
    int faceValue;
    bool isWild;
} 
Card;

// Function Prototypes
void InitializeCard(Card* pCard, Suit s, Face f, bool w);
void PrintCard(Card* pCard);
void CardToString(Card* pCard, char pCardStr[20]);

// ============================================
// Operations on a Card
// ============================================

void InitializeCard(Card* pCard, Suit s, Face f, bool w)
 {
    pCard->suit = s;
    pCard->suitValue = (int)s;

    pCard->face = f;
    pCard->faceValue = (int)f;

    pCard->isWild = w;
}

void PrintCard(Card* pCard) 
{
    char cardStr[20] = {0};
    CardToString(pCard, cardStr);
    printf("%18s", cardStr);
}

void CardToString(Card* pCard, char pCardStr[20])
 {
    switch (pCard->face) 
    {
        case two:   strcpy(pCardStr, "    2 "); break;
        case three: strcpy(pCardStr, "    3 "); break;
        case four:  strcpy(pCardStr, "    4 "); break;
        case five:  strcpy(pCardStr, "    5 "); break;
        case six:   strcpy(pCardStr, "    6 "); break;
        case seven: strcpy(pCardStr, "    7 "); break;
        case eight: strcpy(pCardStr, "    8 "); break;
        case nine:  strcpy(pCardStr, "    9 "); break;
        case ten:   strcpy(pCardStr, "   10 "); break;
        case jack:  strcpy(pCardStr, " Jack "); break;
        case queen: strcpy(pCardStr, "Queen "); break;
        case king:  strcpy(pCardStr, " King "); break;
        case ace:   strcpy(pCardStr, "  Ace "); break;
        default:    strcpy(pCardStr, "  ??? "); break;
    }
    switch (pCard->suit) 
    {
        case spade:   strcat(pCardStr, "of Spades  "); break;
        case heart:   strcat(pCardStr, "of Hearts  "); break;
        case diamond: strcat(pCardStr, "of Diamonds"); break;
        case club:    strcat(pCardStr, "of Clubs   "); break;
        default:      strcat(pCardStr, "of ???s    "); break;
    }
}

int main()
 {
    Card myCard;
    InitializeCard(&myCard, heart, ace, false);
    PrintCard(&myCard);
    return 0;
}

/************************************************************************************************************* */
 
//neeche bale me kuch galti hai pata nahi kya hai per hai kuch itna aata nahi to kiya nahi karunga jarur time lagega 
 
/*#include <stdio.h>
#include <stdbool.h>
#include <string.h> 



  // ============================================
  // Operations on a Card
  // ============================================


void InitializeCard( Card* pCard, Suit s , Face f , bool w )  {
  pCard->suit = s; 
  pCard->suitValue = (int)s;
  
  pCard->face = f;
  pCard->faceValue = (int)f;
  
  pCard->isWild = w;
}


void PrintCard( Card* pCard )  {
  char cardStr[20] = {0};
  CardToString( pCard , cardStr );
  printf( "%18s" , cardStr );
}


void CardToString( Card* pCard , char pCardStr[20] )  {
  switch( pCard->face )  {
    case two:   strcpy( pCardStr , "    2 " ); break;
    case three: strcpy( pCardStr , "    3 " ); break;
    case four:  strcpy( pCardStr , "    4 " ); break;
    case five:  strcpy( pCardStr , "    5 " ); break;
    case six:   strcpy( pCardStr , "    6 " ); break;
    case seven: strcpy( pCardStr , "    7 " ); break;
    case eight: strcpy( pCardStr , "    8 " ); break;
    case nine:  strcpy( pCardStr , "    9 " ); break;
    case ten:   strcpy( pCardStr , "   10 " ); break;
    case jack:  strcpy( pCardStr , " Jack " ); break;
    case queen: strcpy( pCardStr , "Queen " ); break;
    case king:  strcpy( pCardStr , " King " ); break;
    case ace:   strcpy( pCardStr , "  Ace " ); break;
    default:    strcpy( pCardStr , "  ??? " ); break;
  }
  switch( pCard->suit )  {
    case spade:   strcat( pCardStr , "of Spades  "); break;
    case heart:   strcat( pCardStr , "of Hearts  "); break;
    case diamond: strcat( pCardStr , "of Diamonds"); break;
    case club:    strcat( pCardStr , "of Clubs   "); break;
    default:      strcat( pCardStr , "of ???s    "); break;
  }
}*/