#include <stdio.h>
#define Nmaks 1000
struct Nilai
{
  char nama[100];
  float mat;
  float b_ind;
  float b_ing;
  float rerata;
};

typedef struct Nilai un[Nmaks];

void bacaNilai(un A, int n);
void tulisNilai(un A, int n);
void totalNilai(un A, int n);

main()
{
  un A;
  int i, n;
  float u;

  printf("Jumlah Data Penilaian : ");
  scanf("%d", &n);
  printf("\n");
  printf("\n");
 
  bacaNilai(A, n);
  tulisNilai(A, n);
  totalNilai(A, n);
}

void bacaNilai(un A, int n)
{
  int i;

  for (i=0; i<n; i++)
    {
      printf("Nama : ");
      scanf("%s", &A[i].nama);
      printf("Nilai Matematika : ");
      scanf("%f", &A[i].mat);
      printf("Nilai Bahasa Indonesia : ");
      scanf("%f", &A[i].b_ind);
      printf("Nilai Bahasa Inggris : ");
      scanf("%f", &A[i].b_ing);
	  printf("\n");
	  printf("\n");
    }
}

void tulisNilai(un A, int n)
{
  int i;

  for (i=0; i<n; i++)
    {
      printf("Nama : %s\n", A[i].nama);
      printf("Nilai Matematika : %.2f\n", A[i].mat);
      printf("Nilai Bahasa Indonesia : %.2f\n", A[i].b_ind);
      printf("Nilai Bahasa Inggris : %.2f\n", A[i].b_ing);
	  printf("\n");
	  printf("\n");
    }
}

void totalNilai(un A, int n)
{
  int i;
 
  for (i=0; i<n; i++)
    {
      A[i].rerata = (A[i].mat + A[i].b_ind + A[i].b_ing) / 3;
      printf("Nama : %s\n", A[i].nama);
      printf("Nilai Rata-Rata : %.2f\n", A[i].rerata);
	  printf("\n");
	  printf("\n");
    }

}