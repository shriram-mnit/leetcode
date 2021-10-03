int mini_swap_to_group_1s(vector<int> vec)
{
    int ocnt=0;
    for(int i=0;i<vec.size();i++)
    {  if(vec[i]==1)
        ocnt++;
    }
    int curr=0,ans;
    for(int i=0;i<ocnt;i++)
    {
        if(vec[i]==1)
        curr++;
    }
    ans=curr;
    for(int i=ocnt;i<vec.size();i++)
    {
        if(vec[i-ocnt]==1)
        curr--;
        if(vec[i])
        curr++;
        ans=max(ans,curr);
    }
    return ocnt-ans;
}
