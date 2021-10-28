#include <iostream>

using namespace std;

// It merges two arrays
void Merge(int A[], int p, int q, int r)
{
    // n1 is the size of L[]
    int n1 = q - p + 1, i, j, k;

    // n2 is the sixe of R[]
    int n2 = r - q;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)

    {
        L[i] = A[p + i];
    }

    for (j = 0; j < n2; j++) {
        R[j] = A[q + j + 1];
    }

    i = 0, j = 0;

    for (k = p; i < n1 && j < n2; k++) {
        if (L[i] < R[j]) {
            A[k] = L[i++];
        }
        else {
            A[k] = R[j++];
        }
    }

    /*
        If L[] has more elements than R[] then it will 
        put all the reamining elements of L[] into A[]
    */
    while (i < n1) {
        A[k++] = L[i++];
    }

    // If R[] has more elements than L[] then it will put all
    // the reamining elements of R[] into A[]
    while (j < n2) {
        A[k++] = R[j++];
    }
}

// It will will divide the array and sort
// them while merging them
void MergeSort(int A[], int p, int r)
{
    int q;

    if (p < r) {
        // q is the middle element to divide the array
        q = (p + r) / 2;
        MergeSort(A, p, q);
        MergeSort(A, q + 1, r);
        Merge(A, p, q, r);
    }
}

int main()
{
    // A_Size size of A[]
    int A_Size;

    cout << "Enter number of elements : ";

    cin >> A_Size;

    int A[A_Size];

    cout << "Enter the array elements : ";

    for (int i = 0; i < A_Size; i++) {
        cin >> A[i];
    }

    MergeSort(A, 0, A_Size - 1);

    for (int i = 0; i < A_Size; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}
