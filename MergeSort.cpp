#include<iostream>
using namespace std;


void Merging(int A[], int p, int q, int r)
{
    int k = p;
    int n1 = (q - p) + 1;
    int n2 = r - q;
    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
    {
        L[i] = A[p];
        p++;
    }

    for(int j = 0; j < n2; j++)
    {
        R[j] = A[q+1];
        q++;
    }

    int i = 0;
    int j = 0;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
            k++;
        }
        else
        {
            A[k] = R[j];
            k++;
            j++;
        }
    }
    if(i == n1)
    {
        while(j < n2)
        {
            A[k] = R[j];
            j++;
            k++;

        }
    }
    else if(j == n2)
    {
        while(i < n1)
        {
            A[k] = L[i];
            k++;
            i++;
        }
    }

}


void MS(int A[], int p, int r)
{

    if(p < r)
    {   int q = (p+r)/2;
        cout << "p :" << p <<  " q: " << q;
        cout << "      r: " << r<< endl;
        MS(A, p, q);
        cout << " " << endl;
        cout << "p :" << p << " r: " << r;
        cout << "       q: " << q+1 << endl;
        int x = q+1;
        MS(A, x, r);
        Merging(A, p, q+1, r);
    }
}
int main()
{

    int p = 0;
    int q = 0;
    int r = 0;


    cout<< "Enter the number of elements: ";
	cin >> r;

	int A[r];
	for(int i = 0; i < r; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>A[i];
	}
	r = r-1;

    MS(A, p, r);

    for(int x = 0; x < 6; x++)
    {
        cout << A[x] << endl;
    }


}
