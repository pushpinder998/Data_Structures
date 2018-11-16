    #include<iostream>
#include<stack>

using namespace std;

class  BinarySearchTree
{
    struct BST
    {
        int info;
        struct BST *left;
        struct BST *right;
    };


    struct BST *new_node;
    struct BST *ptr;
    struct BST *save;

    BinarySearchTree()
    {
        struct BST *root = NULL;
        int count_ = 1;

    }

public:
    void line()
    {
        cout << " " << endl;
    }

    void create_BST()
    {
        int num = 0;
        line();
        cout << "Enter Elements:- " << endl;
        cout << "\tElement " << count_ << ": ";
        cin >> num;

        while(num != -1)
        {
            new_node = new BST;
            new_node ->info = num;
            new_node ->left = NULL;
            new_node ->right = NULL;

            if(root = NULL)
            {
                root = new_node;
            }
            else
            {
                save = root;
                while(1)
                {
                    if(save ->info < num)
                    {
                        if(save ->right == NULL)
                        {
                            save ->right = new_node;
                            cout << "\t\tParent node: " << save ->info << endl;
                            break;
                        }
                        else
                            save = save ->right;
                    }
                    else if(save ->info >= num)
                    {
                        if(save ->left == NULL)
                        {
                            save ->left = new_node;
                            cout << "\t\tParent node: " << save ->info << endl;
                            break;
                        }
                        else
                            save = save ->right;
                    }
                }
            }
            count_++;
            cout << "\tElement " << count_ << ": ";
            cin >> num;


        }
        line();
        cout << "\t\tThe Tree has been completed." << endl;
    }

    void SearchToDelete()
    {
        int freq = 0;
        int num;
        ptr = root;
        save = NULL;
        line();
        cout << "Enter element to be deleted: ";
        cin >> num;

        while(1)
        {
            if(save ->info == num)
            {
                if(save == root )
                {
                    cout << "Number found as the Root element." << endl;
                    break;

                }
            }
            else if(save )


    }


};
