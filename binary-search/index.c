#include <stdio.h>
#include <stdbool.h>

int main()
{

  int list[14] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
  int search = 4;
  int init = 0;
  int end = 14;
  int middle = 0;
  int count = 0;
  bool exit = false;

  while (init <= end && !exit)
  {
    count++;
    middle = (init + end) / 2;

    if (list[middle] == search)
    {
      printf("O numero %d foi encontrado em %d\n", search, middle);
      exit = true;
    }
    else
    {
      if (search < list[middle])
      {
        end = middle - 1;
      }
      else
      {
        init = middle + 1;
      }
    }
  }

  if (!exit)
  {
    printf("Não encontrei nenhum valor");
  }
  printf("Total de buscas: %d\n", count);

  return 0;
}