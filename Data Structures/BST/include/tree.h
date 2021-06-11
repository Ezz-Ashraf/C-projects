
void printTree();
typedef int EntryType;
typedef struct nodeType{
EntryType info;
struct nodeType *right;
struct nodeType *left;
}NodeType;
typedef NodeType *TreeType;
void CreateTree(TreeType *pt);
int EmptyTree(TreeType *pt);
int FullTree(TreeType *pt);
void Pre_order_Trav(TreeType *pt ,void (*pvisit)(EntryType));
void In_order_Trav(TreeType *pt ,void (*pvisit)(EntryType ));
void Post_order_Trav(TreeType *pt ,void (*pvisit)(EntryType));
int TreeSize(TreeType *pt);
int TreeDepth(TreeType *pt);
void Insert_tree(TreeType *pt,EntryType e);
void Ite_In_order_Trav(TreeType *pt ,void (*pvisit)(EntryType));
void ClearTree(TreeType *pt);
void Display(EntryType *e);
int DeleteItemTree(TreeType *pt,EntryType e);
void DeleteNode(TreeType *pt);
