#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf ("%i", &n);
  int identificadores[n];
  for (int a = 0; a < n; a++){
    scanf("%i", &identificadores[a]);
  }
  int m;
  scanf("%i", &m);
  int desistentes[m];
  for (int a = 0; a < m; a++){
    scanf("%i", &desistentes[a]);
  }

  for (int a = 0; a < n; a++){
    for (int b = 0; b < m; b++){
      if (identificadores[a] == desistentes[b]){
        identificadores[a] = 0;
        break;
      }
    }
  }

  for (int a = 0; a < n; a++){
    if (identificadores[a] != 0){
      printf("%i ", identificadores[a]);
    }
  }
}