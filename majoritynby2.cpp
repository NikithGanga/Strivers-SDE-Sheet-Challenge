#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int candidate=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(count == 0) count=1,candidate = arr[i];
        else count += (arr[i] == candidate) ? 1 : -1;
    }
    int cn1=0;
    for(int i=0;i<n;i++)
    {
        if(candidate == arr[i]) cn1++;
    }
    if(cn1 > (n/2)) return candidate;
    else return -1;
}
