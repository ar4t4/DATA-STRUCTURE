#include <iostream>
using namespace std;
void swapp(int *a,int *b)
{
    if(*a==*b)return;
    *a+=*b;
    *b=*a-*b;
    *a=*a-*b;
}

void minmaxsort(int*arr,int n)
{
    for (int i=0,j=n-1;i<j;i++,j--) {
        int mi=arr[i], ma = arr[i];
        int min_i=i,max_i = i;
        for (int k=i;k<=j;k++)  {
            if (arr[k] > ma) {
                ma = arr[k];
                max_i = k;
            } else if (arr[k] < mi) {
                mi = arr[k];
                min_i = k;
            }
        }

        swapp(&arr[i],&arr[min_i]);


        if (arr[min_i]==ma)
            swapp(&arr[j],&arr[min_i]);
        else
            swapp(&arr[j],&arr[max_i]);
    }
}
void selectionsort(int arr[], int n)
{
    int i,j,min_idx;
    for (i=0;i<n-1;i++)
    {
        min_idx = i;
        for (j=i+1;j<n;j++)
        {
          if (arr[j]<arr[min_idx])
              min_idx=j;
        }

        if (min_idx!=i)
            swapp(&arr[min_idx], &arr[i]);
    }
}
void insertionsort(int arr[], int n)
{
    int i,k,j;
    for (i=1;i<n;i++)
    {
        //k=arr[i];
        j= i;
        while (j>0&&arr[j-1]>arr[j])
        {
           swapp(&arr[j],&arr[j-1]);
            j=j-1;
        }
        //arr[j+1]=k;
    }
}
void bubblesort(int arr[],int n)
{
    int i,j;
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
            if (arr[i]>arr[j])
                swapp(&arr[i], &arr[j]);
}
int main()
{
    int arr[] = { 23,78,45,8,32,56,1};
  int n=7;
 // minmaxsort(arr,n);

   // selectionsort(arr,n);


    insertionsort(arr,n);
    //bubblesort(arr,n);
    for (int i= 0;i<n;i++)
cout << arr[i] << " ";
    cout << endl;
    return 0;
}
