void prefix_sum(int arr[], int n)
{
    int sum[n];
    sum[0] = 0;
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + sum[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << " ";
    }
    cout << endl;
}
