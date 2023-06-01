#include<bits/stdc++.h>
using namespace std ;
#define p cout
#define fo(i,n) for(int i=0;i<n;i++)

class node{
    public:
int data;
node *left,*right;

    node(int a)
    {
        data =a;
        left=NULL;
        right=NULL;
    }

};
void insertion( node** root ,int val)
{
    node *ptr=*root;
    if(*root==NULL)
    {
        *root=new node(val);
    }
    else if(ptr->data>val)insertion(&ptr->left,val);
    else {insertion(&ptr->right,val);}
}
//void inorder(node *root )
//{
//    if(root!=NULL){
//    inorder(root->left);
//    p<<root->data<<' ';
//    inorder(root->right);}
//}
void inorder(node** root){
        if(*root != nullptr){
                node *ptr=*root;
            inorder(&ptr->left);
            cout<<ptr->data<<" ";
            inorder(&ptr->right);
        }
    }
    //process 2
//node *tra(node **root,int val)
//{
//
//     node *ptr=*root;
//     if(ptr==NULL)
//     {
//         cout<<"Null"<<endl;
//         return ptr;
//     }
//     if(ptr->data==val)
//    {
//      //  inorder(&ptr);
//        return ptr;
//    }
//    else if(ptr->data>val)tra(&ptr->left,val);
//    else {tra(&ptr->right,val);}
//}
void tra(node **root,int val)
{

     node *ptr=*root;
     if(ptr==NULL)
     {
         cout<<"Null"<<endl;
         return ;
     }
     if(ptr->data==val)
    {
        inorder(&ptr);
        return ;
    }
    else if(ptr->data>val)tra(&ptr->left,val);
    else {tra(&ptr->right,val);}
}



int main()
{
    node *root=NULL;
    int n;
    cin>>n;
    fo(i,n)
    {
        int x;
        cin>>x;
        insertion(&root,x);
    }
    int x;
    cin>>x;
    //for process 2;
   //node*y= tra(&root,x);
   //inorder(&y);
   //for process 1
   tra(&root,x);
}
