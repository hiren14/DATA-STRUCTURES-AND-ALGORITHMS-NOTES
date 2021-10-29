#include<stdio.h> 
#include<malloc.h> 
 struct node{     
  int data;     
struct node* left;     
struct node* right; };
  struct node* createNode(int data)
  {     struct node *n;    
    n = (struct node *) malloc(sizeof(struct node));
       n->data = data;
          n->left = NULL;     
     n->right = NULL;   
       return n;  }  
       
void preOrder(struct  node* root)
{     if(root!=NULL)
{    
       printf("\n%d ", root->data);   
             preOrder(root->left);   
            preOrder(root->right);  
            
   } }  
   
   void postOrder(struct  node* root)
   {     if(root!=NULL)
   {    
          postOrder(root->left); 
                  postOrder(root->right);
               printf("\n%d ", root->data);
                
       } }  
       void inOrder(struct  node* root)
       {
              if(root!=NULL)
              {         
                inOrder(root->left);         printf("%d ", root->data);        
        inOrder(root->right);   
          } } 
          void insert(struct node *root, int key)
          
          {  
              struct node *prev = NULL; 
                 while(root!=NULL)
                 {       
       prev = root;
       if(key==root->data)
  {
       printf("\nCannot insert %d, already in BST", key);          
         return;        }      
           else if(key<root->data){     
                    root = root->left;   
                         }     
                            else{      
root = root->right;    
         }   
          }    
        struct node* new = createNode(key);  
        {
          if(key<prev->data)
          {
                                                 
               prev->left = new;  
                 }
                 
                 
                 prev->right = new; 
                    } 
                    }
                  struct node *inOrderPredecessor(struct node* root){   
                      root = root->left;     
                      while (root->right!=NULL)   
                        {         root = root->right;  
                           }     return root; 
                           }  
                           
               struct node *deleteNode(struct node *root, int value)
                           {
                             struct node* iPre; 
                            if (root == NULL)
                            { 
                              return NULL;  
                              }
                               if (root->left==NULL&&root->right==NULL)
                               {  
                                   free(root);        
                            return NULL;   
                      }       
               
               if (value < root->data)
               {         
  root-> left = deleteNode(root->left,value);   
    }
    else if (value > root->data)
  {
    root-> right = deleteNode(root->right,value);
     }
      else
      {
 iPre = inOrderPredecessor(root);
 root->data = iPre->data;
 root->left = deleteNode(root->left, iPre->data);
     }
                 return root; 
                 }
                 
                 
                 struct Node *height(struct node *root) 
                 {   
            int i = 0;
                 while (root != NULL) 
                {  
                  
              root=root->left;
              i++; 
               }    
           
                  printf("\nheight of tree:%d",i);
                   } 
                   
                   struct Node *totalnode(struct node *root) 
                   {
                     int totalnode;
                      int i = 0;
                      int h;
                      while (root != NULL)
                      { 
                        root=root->left; 
                         i++;    
                         
                         
                         
                   }
                   h=i;
                   totalnode = (2^h);
                   
                  
        
          
                    printf("\ntotal node : %d",totalnode);
                  
               }
               struct Node *leafnode(struct node *root)
                {   int leafnode;   
               int i = 0;
                while (root != NULL)
                 {
            
    root=root->left;
  i++;     
  }
   leafnode = (2^i) - (2^(i-1));
    printf("\ntotal leaf node : %d",leafnode);
     }  
     struct node *internalnode(struct node *root)
      { 
        int leafnode;
          int internalnode;
   int i = 0;
    while (root != NULL)
      {  
         root=root->left; 
         i++; 
          }
           leafnode = (2^i) - (2^(i-1));
  internalnode = ((2^i) - 1) - leafnode ;  
     printf("\ninternal node : %d",internalnode);
     
     
                }
                int main(){            
       struct node *p = createNode(50);
         struct node *p1 = createNode(40);
         struct node *p2 = createNode(60);
          struct node *p3 = createNode(30);
            struct node *p4 = createNode(45);
             struct node *p5 = createNode(55);
               struct node *p6 = createNode(70); 
               struct node *p7 = createNode(43);  
               struct node *p8 = createNode(47);
                 struct node *p9 = createNode(52); 
                  struct node *p10 = createNode(57); 
                    p->left = p1; 
                     p->right = p2;
                     p1->left = p3;
                     p1->right = p4;
                      p2->left = p5;
                       p2->right = p6;
                        p4->left = p7;
                        p4->right = p8;
                        p5->left = p9; 
                        p5->right = p10;
                         insert(p , 20); 
                           insert(p , 35);
                           insert(p , 65); 
                            insert(p , 75);
                            
                 height(p);    
                 totalnode(p);
                 leafnode(p); 
                 internalnode(p); 
                 
                 return  0; 
                 } 
