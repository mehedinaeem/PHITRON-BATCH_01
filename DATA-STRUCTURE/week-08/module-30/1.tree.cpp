#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftchild;
    treeNode *rightchid;

    // constructor
    treeNode(int value)
    {
        data = value;
        leftchild = NULL;
        rightchid = NULL;
    }
};

void printTree(treeNode *root, int level);

void printTree(treeNode *root, int level)
{
}

int main()
{
    int n;
    cin >> n;
    treeNode *allNodes[n];
    for (int i = 0; i < n; i++)
    {
        allNodes[i]->data = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allNodes[i]->data = value;
        if (left != -1)
        {
            allNodes[i]->leftchild = allNodes[left];
        }
        if (right != 0)
        {
            allNodes[i]->rightchid = allNodes[right];
        }
    }

    printTree(allNodes[0], 0);

    return 0;
}