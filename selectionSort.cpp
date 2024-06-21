#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}



void bubble_sort(int arr[], int n ){
    for (int i  =n-1; i>=0; i--){
        for (int j =0; j<=i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]= arr[j];
                arr[j]= temp;

            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}