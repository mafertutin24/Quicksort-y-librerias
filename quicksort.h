int mitad(int arr[],int pinicial,int pfinal)
{
    return arr[(pinicial+pfinal)/2];
}
void ordenar (int arr[],int pinicial,int pfinal)
{
    int i=pinicial;
    int j=pfinal;
    int temp;
    int piv=mitad(arr,pinicial,pfinal);

    do
    {
        while (arr[i]<piv)
        {
            i++;
        }
        while (arr[j]>piv)
        {
            j--;
        }
        if (i<=j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }
    while(i<=j);
    if (pinicial<j)
    {
        ordenar(arr,pinicial,j);
    }
    if (i<pfinal)
    {
        ordenar(arr,i,pfinal);
    }
}


