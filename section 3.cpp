This problem is also called minimum absolute sum pair. You are given an array of integers, 

containing both +ve and -ve numbers. You need to find the two elements such that their sum is 

closest to zero. eg. Array [15, 5, -20, 30, -45] Output should be 15, -20.

1 sort the array
2 Take the first 2 elements..consider them as 2 sets (each having 1 element)
3 Take the next element from the array.
4 Decide into which set should this element go (by computing the sum..it should be minimum)
5 repeat





//Help Sheeba out     10 marks

Sheeba was asked by a Recruiter to write down 100 numbers (1-100) randomly 

but making sure that no number is repeated twice. At the end, the Recruiter found 

out that Sheeba had done her work perfectly, but committed just one mistake of 

repeating a number twice. Recruiter asked Sheeba that she recruiter her only 

under one condition! If Sheeba is able to find out the only number which she is 

repeated in an optimised manner.

Can you write a pseudocode, which can help Sheeba to find out the number which 

got repeated twice?//

first sort numbers
void sort(int numbers[], int size)
{
  for(int i=1;i<size;i++)
  { 
    int value = A[i];
    int hole = i;
    
    while(hole>0 && A[hole-1]>value)
    { 
      A[hole] = A[hole-1];
      hole--;
    }
    A[hole] = value;
  }
}
//now the array is sorted
int findRepeatedNumber(int numbers[],int size)
{
  for(int i = 0;i<size-1;i++)
  { 
    if(A[i]==A[i+1]) return A[i];
  }
  return -1;
}
int main()
{
  sort(A,N);
  cout<<findRepeatedNumber(A,N);
  return 0;
}
//sheeba was happy to be helped as am i to do the favour// 

