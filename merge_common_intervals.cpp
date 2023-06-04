vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> merged;
    int m = intervals.size();
    sort(begin(intervals),end(intervals));
    for(int i=0;i<m;i++)
    {
        if(merged.size() == 0 || merged.back()[1] < intervals[i][0])
            merged.push_back(intervals[i]);
        else
            merged.back()[1] = max(merged.back()[1],intervals[i][1]);
    }
    return merged;
}

