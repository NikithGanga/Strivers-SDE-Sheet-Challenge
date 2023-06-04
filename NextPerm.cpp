#include <bits/stdc++.h>
#define all(a) a.begin(),a.end()
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    next_permutation(all(permutation));
    return permutation;
}
