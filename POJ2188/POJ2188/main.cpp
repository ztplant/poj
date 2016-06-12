//
//  main.cpp
//  POJ2188
//
//  Created by MockingJ on 16/6/12.
//  Copyright © 2016年 MockingJ. All rights reserved.
//

#include <iostream>


void MergeSort(int A[], int TmpArray[], int Lpos, int Rpos, int rightEnd)
{
    int i, leftEnd, numElements, TmpPos;
    
    leftEnd = Rpos - 1;
    TmpPos = Lpos;
    numElements = rightEnd - Lpos + 1;
    
    while( Lpos <= leftEnd && Rpos <= rightEnd)
    {
        if ( A[Lpos] <= A[Rpos])
            TmpArray[TmpPos++] = A[Lpos++];
        else
            TmpArray[TmpPos++] = A[Rpos++];
        
        while (Lpos <= leftEnd)
            TmpArray[TmpPos++] = A[Lpos++];
        
        while(Rpos <= rightEnd)
            TmpArray[TmpPos++] = A[Rpos++];
        
        for (i = 0; i < numElements; i++, rightEnd--)
            A[rightEnd] = TmpArray[rightEnd];
        
    }
}

void MSort(int A[], int TempArray[], int left, int right)
{
    int center;
    
    if (left < right)
    {
        center = ( left + right ) / 2;
        MSort(A, TempArray, left, center);
        MSort(A, TempArray, center + 1, right);
        MergeSort(A, TempArray, left, center + 1, right);
    }
}

void mergeSort(int A[], int N)
{
    int* tmpArray = NULL;
    tmpArray = (int*)malloc(N * sizeof(int));
    if (NULL != tmpArray)
    {
        MSort(A, tmpArray, 0, N-1);
        free(tmpArray);
    }
}

int main(int argc, const char * argv[]) {

    return 0;
}