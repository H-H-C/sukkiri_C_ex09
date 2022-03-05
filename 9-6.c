#include <stdio.h>

typedef char String[1024];

typedef struct
{
  /* data */
  String name;
  int hp;
  int attack;
} Monster;
void printMonsterSummary(Monster *m)
{
  printf("モンスター %s (HP = %d)", (*m).name, (*m).hp);
}
int main(void)
{
  Monster suzaku = {"朱雀", 100, 80};

  printMonsterSummary(&suzaku);
  return 0;
}
