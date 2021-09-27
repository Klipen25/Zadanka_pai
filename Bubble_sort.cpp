#include <iostream>

using namespace std;

int
main ()
{
  int A[] = { 2, 9, 3, 6, 7, 1, 0, 5, 4, 8 };
  int j = 1;
  int tmp;

  for (int i = 0; i < 10; i++)
    {
      for (j = 0; j < 10 - i - 1; j++)
	{
	  if (A[j] > A[j + 1])
	    {
	      tmp = A[j];
	      A[j] = A[j + 1];
	      A[j + 1] = tmp;
	    }

	}
    }

  cout << "The sorted data in order: " << endl;
  for (int i = 0; i < 10; i++)
    {
      cout << A[i] << endl;
    }


  return 0;
}
