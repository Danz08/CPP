#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAX 20

using namespace std;

void BubbleSort(int arr[])
{
  int i, j, temp;
  for (i = 0; i < MAX - 1; i++)
  {
    for (j = 0; j < MAX - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main()
{
  int data_awal[MAX], data_urut[MAX];
  int i;
  time_t k1, k2;

  cout << "Sebelum Pengurutan : \n";
  for (i = 0; i < MAX; i++)
  {
    srand(time(NULL) * (i + 1));
    data_awal[i] = rand() % 100 + 1;
    cout << data_awal[i] << " ";
  }
  cout << "\nSetelah Pengurutan : \n";
  for (i = 0; i < MAX; i++)
    data_urut[i] = data_awal[i];
  time(&k1);
  BubbleSort(data_urut);
  time(&k2);
  for (i = 0; i < MAX; i++)
    cout << data_urut[i] << " ";
  cout << "\nWaktu = " << k2 - k1 << endl;

  return 0;
}
