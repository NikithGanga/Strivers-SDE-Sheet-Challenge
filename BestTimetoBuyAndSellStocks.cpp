#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices){
    int mx = 0;
    int curPrice=INT_MAX;
    for(auto &x : prices)
    {
        curPrice = min(x,curPrice);
        mx = max(mx,x-curPrice);
    }
    return mx;
}
