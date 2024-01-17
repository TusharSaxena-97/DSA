#include<bits/stdc++.h>


using namespace std;


struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value)
    {
      data = value;
      left = NULL;
      right = NULL;
    }
};


TreeNode* createTree(TreeNode* root,vector<int> nodes)
{
    queue<TreeNode*> q;
    q.push(root);
    float non = 0.5;
    int i=1;

    while(!q.empty())
    {
       TreeNode* tmp = q.front();
       q.pop();

        if(tmp)
            {
           TreeNode* l = new TreeNode(nodes[i]);
           TreeNode* r = new TreeNode(nodes[i+1]);

           if(nodes[i]!=-1) tmp ->left = l;
           else tmp->left = NULL;
           q.push(l);

           if(nodes[i+1]!=-1) tmp->right = r;
           else   tmp->right = NULL;
           q.push(r);
            }
       i+=2;
    }
    return root;
}

void PreOrder(TreeNode* root)
{
    if(!root) return;

    cout<<root->data<<" -> ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void func()
{
    int n;
    cout<<"Enter The Height of the Tree"<<endl;
    cin>>n;

    vector<int> nodes(n);

    cout<<"Enter The Nodes and -1 for NULL Nodes ";
    for(int i=0 ;i<pow(2,n);i++)
        cin>>nodes[i];

    TreeNode* root = new TreeNode(nodes[0]);

    root = createTree(root,nodes);

    PreOrder(root);
}


int main()
{
   int t;
   cin>>t;
   while(t--){
    func();
   }
   return 0;
}
