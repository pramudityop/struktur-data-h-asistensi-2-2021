#include <iostream>
using namespace std;
 
struct Node {
    int data;
    struct Node *kiri, *kanan;
    Node(int data)
    {
        this->data = data;
        kiri = kanan = NULL;
    }
};

void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;

    printPostorder(node->kiri);

    printPostorder(node->kanan);

    cout << node->data << " ";
}

void printInorder(struct Node* node)
{
    if (node == NULL)
        return;

    printInorder(node->kiri);
        cout << node->data << " ";

    printInorder(node->kanan);
}
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;

        cout << node->data << " ";

    printPreorder(node->kiri);

    printPreorder(node->kanan);
}
int main()
{
    struct Node* root = new Node(1);
    root->kiri = new Node(2);
    root->kanan = new Node(3);
    root->kiri->kiri = new Node(4);
    root->kiri->kanan = new Node(5);
    root->kanan->kiri = new Node(6);
 
    cout << "\nPreorder \n";
    printPreorder(root);
 
    cout << "\nInorder \n";
    printInorder(root);
 
    cout << "\nPostorder \n";
    printPostorder(root);
 
    return 0;
}
