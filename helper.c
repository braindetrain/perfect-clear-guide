#include <stdio.h>
#include <ctype.h>
#include "helper.h"

void enterQueue(char queue[], int queueSize) 
{
    printf("Enter the queue of %d Tetris pieces:\n", queueSize);

    for (int i = 0; i < queueSize; ++i) 
    {
        do 
        {
            printf("Enter piece %d: ", i + 1);
            scanf(" %c", &queue[i]);
            queue[i] = toupper(queue[i]); // Convert input to uppercase

            // Validate the entered piece
            if (queue[i] != 'I' && queue[i] != 'O' && queue[i] != 'J' && queue[i] != 'L' && queue[i] != 'Z' && queue[i] != 'S' && queue[i] != 'T') 
            {
                printf("Invalid piece. Please enter one of: I, O, J, L, Z, S, T\n");
            }
        } while (queue[i] != 'I' && queue[i] != 'O' && queue[i] != 'J' && queue[i] != 'L' && queue[i] != 'Z' && queue[i] != 'S' && queue[i] != 'T');
    }

    printf("Entered queue:\n");
    for (int i = 0; i < queueSize; i++)
      {
        printf("%c ", queue[i]);
      }
    printf("\n");
}

void promptHeldPiece(char *heldPiece)
{
  int isValidPiece = 0;
  const char validPieces[] = {'I', 'O', 'J', 'L', 'Z', 'S'};
  // Prompt for held piece and validate input
  do 
  {
      printf("Enter the held piece (I, O, J, L, Z, S): ");
      scanf(" %c", heldPiece);
      *heldPiece = toupper(*heldPiece); // Convert input to uppercase

      // Check if held piece is valid
      for (int i = 0; i < sizeof(validPieces); ++i) 
      {
          if (*heldPiece == validPieces[i]) 
          {
              isValidPiece = 1;
              break;
          }
      }

      if (!isValidPiece) 
      {
          printf("Invalid piece. Please enter one of: I, O, J, L, Z, S\n");
      }

  } while (!isValidPiece);

  printf("Held piece: %c\n", *heldPiece); 
}
