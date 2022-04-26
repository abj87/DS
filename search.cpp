int solve(int arr[], int n, int x, int occurance)
{

    int l = 0;
    int r = n - 1;
    int mid = l + (r - l) / 2;
    int latest = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] > x)
            r = mid - 1;
        else if (arr[mid] < x)
            l = mid + 1;
        else
        {
            latest = mid;
            if (occurance == 0)
                r = mid - 1;
            else
                l = mid + 1;
        }
    }
    return latest;