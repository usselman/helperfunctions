/*
    C++ implementation of binary tree and InOrder traversal
*/

#include <iostream>

using namespace std;

// Definition of a binary tree node
struct Node
{
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Node insert function
Node *insertNode(Node *root, int value)
{
    if (root == nullptr)
    {
        // Create a new node if the tree is empty
        root = new Node(value);
    }
    else
    {
        if (value <= root->data)
        {
            // Insert the node into the left subtree if the value is less than or equal to the current node
            root->left = insertNode(root->left, value);
        }
        else
        {
            // Insert the node into the right subtree if the value is greater than the current node
            root->right = insertNode(root->right, value);
        }
    }
    return root;
}

// Function to perform InOrder traversal of a binary tree recursively
void inOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    // Traverse left subtree
    inOrderTraversal(root->left);

    // Process the current node
    cout << root->data << " ";

    // Traverse right subtree
    inOrderTraversal(root->right);
}

int main()
{
    int numElements;
    cout << "====================" << endl;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    Node *root = nullptr;
    int value;
    for (int i = 0; i < numElements; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        root = insertNode(root, value);
    }

    // Perform InOrder traversal
    cout << "====================" << endl;
    cout << "InOrder Traversal: ";
    inOrderTraversal(root);
    cout << endl
         << "====================" << endl;
    cout << "Thank you for using the program!" << endl;
    cout << endl;

    return 0;
}
