#include <bits/stdc++.h>
long long mergeSort(long long *arr,int low,int mid,int high)
{
    vector<int> temp;
    int left = low;
    int cnt=0;
    int right = mid + 1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }
    while (left <= mid) {
      temp.push_back(arr[left]);
      left++;
    }
    while (right <= high) {
      temp.push_back(arr[right]);
      right++;
    }
    for(int i=low;i<=high;i++)
        arr[i] = temp[i-low];
    return cnt;
}
long long merge(long long *arr,int low,int high)
{
    long long cnt = 0;
    if(low >= high) return cnt;
    long long mid = (low + high) >> 1;
    cnt += merge(arr,low,mid);
    cnt += merge(arr,mid+1,high);
    cnt += mergeSort(arr,low,mid,high);
    return cnt;
}
long long getInversions(long long *arr, int n){
    return merge(arr,0,n-1);
}
