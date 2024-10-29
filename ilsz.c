#include "ilsz.h"
#include <stdio.h>
#include <ctype.h>

int ILSZ(char queue[])
{
  int containsI = 0, containsL = 0, containsS = 0, containsZ = 0;
  int indexL = -1, indexZ = -1;
  int validPiecesCount = 0;

  //check for ILSZ blocks
  for (int i = 0; i < 5; i++)
    {
      switch (queue[i]) 
      {
        case 'I':
            containsI = 1;
            break;
        case 'L':
            containsL = 1;
            indexL = i;
            break;
        case 'S':
            containsS = 1;
            break;
        case 'Z':
            containsZ = 1;
            indexZ = i;
            break;
      }
    }

  if(containsI && containsL && containsS && containsZ)
  {
    if (indexL != -1 && indexZ != -1)
    {
      if (indexL +1 == indexZ)
      {
        for (int i = 0; i < indexL; i++)
          {
            if (queue[i] != 'I' && queue[i] != 'L' && queue[i] != 'S' && queue[i] != 'Z')
            {
              return 0;
            }
          }
        return 1;
       }

      if (indexZ < indexL)
      {
        return 1;
      }
    }
  }
  return 0;
}

int ILSZSolution1(char heldPiece, char queue[], int queueSize) 
{
  int indexJ = -1, indexT = -1, indexL = -1;
  int containsS = 0, containsJ = 0, containsT = 0, containsL = 0, containsO1 = 0, containsO2 = 0;

  if (heldPiece == 'J') indexJ = 0; 
  else if (heldPiece == 'T') indexT = 0;
  else if (heldPiece == 'L') indexL = 0;

  for (int i = 0; i < queueSize; i++)
  {
    if (queue[i] == 'J' && indexJ == -1) indexJ = i + 1;
    if (queue[i] == 'T' && indexT == -1) indexT = i + 1;
    if (queue[i] == 'L' && indexL == -1) indexL = i + 1;

    if (queue[i] == 'S' && !containsS) containsS = 1;
    if (queue[i] == 'J' && !containsJ) containsJ = 1;
    if (queue[i] == 'T' && !containsT) containsT = 1;
    if (queue[i] == 'L' && !containsL) containsL = 1;
    if (queue[i] == 'O') 
    {
        if (containsO1 == 0) containsO1 = 1;
        else containsO2 = 1;
    }
  }

  if (containsS && containsJ && containsT && containsL && containsO1 && containsO2)
  {
    if (indexJ != -1 && indexT != -1 && indexL != -1)
      if (indexJ < indexT && indexJ < indexL && indexT < indexL) return 1;   
  }
  return 0;
}



int ILSZSolution2(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution3(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution4(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution5(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution6(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution7(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution8(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution9(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution10(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution11(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution12(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution13(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution14(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution15(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution16(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution17(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution18(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution19(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution20(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution21(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}



int ILSZSolution22(char heldPiece, char queue[], int queueSize) 
{
  return 0;
}
