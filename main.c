#include <stdio.h>
#include <ctype.h>
#include "ilsz.h"
#include "helper.h"

typedef int (*SolutionChecker)(char, char[], int);

int main(void) {

  //prompt user for perfect clear number
  int perfectClearNumber;
  int adjustedPerfectClearNumber;

  const char validPieces[] = {'I', 'O', 'J', 'L', 'Z', 'S', 'T'};
  
  do
  {
  printf("Which perfect clear are you solving? Enter a number: ");
  scanf("%d", &perfectClearNumber);

  if (perfectClearNumber <=0)
  {
    printf("Please enter a positive number.\n");
  }
    
  adjustedPerfectClearNumber = (perfectClearNumber - 1) % 7 + 1;

  if (adjustedPerfectClearNumber != perfectClearNumber)
  {
    printf("Adjusting to the corresponding perfect clear.\n");
  }
    
  } while (perfectClearNumber < 1);

  const char *ordinalSuffix;
  switch (adjustedPerfectClearNumber % 10)
  {
    case 1:
      ordinalSuffix = "st";
      break;
    
    case 2:
      ordinalSuffix = "nd";
      break;

    case 3:
      ordinalSuffix = "rd";
      break;

    default:
      ordinalSuffix = "th";
      break;
  }
  
  printf("Solving for the %d%s perfect clear \n", adjustedPerfectClearNumber, ordinalSuffix); 

  
  //if adjusted perfect clear number 1, do not ask for a held piece.
  char heldPiece;
  
  if (adjustedPerfectClearNumber != 1)
  {
     promptHeldPiece(&heldPiece);
  }
  
  //prompt for queue
  const int queueSize = 6;
  char queue[queueSize];

  enterQueue(queue, queueSize);

  //check first perfect clear
  if (adjustedPerfectClearNumber == 1)
  {
    if(ILSZ(queue))
    {
      printf("Use ILSZ. (jaws)\n");
      //add picture of the set up 
      promptHeldPiece(&heldPiece);
      enterQueue(queue, queueSize);

      SolutionChecker solutions[] = 
      {
        ILSZSolution1,
        ILSZSolution2,
        ILSZSolution3,
        ILSZSolution4,
        ILSZSolution5,
        ILSZSolution6,
        ILSZSolution7,
        ILSZSolution8,
        ILSZSolution9,
        ILSZSolution10,
        ILSZSolution11,
        ILSZSolution12,
        ILSZSolution13,
        ILSZSolution14,
        ILSZSolution15,
        ILSZSolution16,
        ILSZSolution17,
        ILSZSolution18,
        ILSZSolution19,
        ILSZSolution20,
        ILSZSolution21,
        ILSZSolution22,
      };

      const int numSolutions = sizeof(solutions) / sizeof(SolutionChecker);
      int solutionFound = 0;

      for (int i = 0; i < numSolutions; i++)
        {
          if (solutions[i](heldPiece, queue, queueSize))
          {
            printf("Use solution %d\n", i + 1);
            solutionFound = 1;
            break;
          }
        }

      if (!solutionFound)
      {
        printf("No solution found. This is very unprobable. Start over.\n");
      }

    
      
    }
  }
  
  return 0;
}



