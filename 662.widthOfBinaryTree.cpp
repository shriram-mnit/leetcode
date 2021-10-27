class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
    queue<pair<TreeNode*,unsigned long long int>> q;
        q.push({root,0});
        int max_val=0;
        while(!q.empty())
        {   unsigned long long int size=q.size(),first=-1,last=-1;
         while(size--)
         {TreeNode *tmp=q.front().first;
          unsigned long long int tm=q.front().second;
          q.pop();
          if(tmp==NULL)
              continue;
          
          q.push({tmp->left,(2*tm)});
          q.push({tmp->right,(2*tm+1)});
          if(tmp && first==-1)
              first=tm;
                 
          if(tmp)  
              last=tm;
         }
          max_val=max_val>(last-first+1)?max_val:(last-first+1);
        }
                 return max_val;
    }
};
