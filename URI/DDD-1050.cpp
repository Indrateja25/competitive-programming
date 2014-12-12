// author: Rodrigo Alves
// judge: URI
// problem: DDD
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1050
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);

  if (N == 61) printf("Brasilia\n");
  else if (N == 71) printf("Salvador\n");
  else if (N == 11) printf("Sao Paulo\n");
  else if (N == 21) printf("Rio de Janeiro\n");
  else if (N == 32) printf("Juiz de Fora\n");
  else if (N == 19) printf("Campinas\n");
  else if (N == 27) printf("Vitoria\n");
  else if (N == 31) printf("Belo Horizonte\n");
  else printf("DDD nao cadastrado\n");

  return 0;
}
