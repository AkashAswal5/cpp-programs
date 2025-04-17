#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Structure for tree node
struct node
{
    int data;
    node *left;
    node *right;
};

// Function to create a new node
node *newnode(int data)
{
    node *element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;
    return element;
}

// Function to print level-order traversal
vector<int> levelorder(node *root)
{

    vector<int> ans;
    queue<node *> q;
    q.push(root);
    if (root == NULL)
    {
        return ans;
    }

    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();
        ans.push_back(temp->data);

        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }

    return ans;
}

int main()
{
    // Create tree
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);

    // Get level order   traversal
    vector<int> result = levelorder(root);

    // Print result
    cout << "Level Order Traversal: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
