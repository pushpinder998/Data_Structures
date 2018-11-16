#include <iostream>

using namespace std;

class AdjList_Graph
{
    struct node
    {
        int value;
        struct node *next;
    };

    struct node **start;
    struct node *ptr;
    int Verts;
public:
    AdjList_Graph()
    {
        cout << "Enter Number of vertices: ";
        cin >> verts;
        start = new *node[verts];
    }


    /*void create_end()
    {
        int num;
        struct node *new_node;
        cout << "Please enter the elements (-1 to EXIT): " << endl;
        cin >> num;


        while(num != -1)
        {
            new_node = new node;
            if(start == NULL)
            {
                new_node->next = start;
                start = new_node;
                save = new_node;
            }
            else
            {
                new_node ->value = num;
                new_node ->next = NULL;
                save ->next = new_node;
                save = new_node;
            }
            cin >> num;
        }

    }
*/
};
