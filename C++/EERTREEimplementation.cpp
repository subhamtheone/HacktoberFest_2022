#include <iostream>
#include <vector>
#include <string>
#include <time.h>
using namespace std;
struct Node
{
    int s, e;
    int length;
    int b1;
    Node *suff;
    vector<Node *> weights;

    Node()
    {
        s = e = length = -1;
        suff = nullptr;
        weights.assign(26, nullptr);
    }
};

class EerTree
{
private:
    Node *root1;
    int b2;
    Node *root2;
    Node *current;

public:
    EerTree()
    {
        root1 = new Node();
        root1->length = -1;
        root1->suff = root1;

        root2 = new Node();
        root2->length = 0;
        root2->suff = root1;
        current = root2;
    }

    int insert(string &s, int position)
    {
        Node *curr = current;
        int weight = s[position] - 'a';

        while (true)
        {
            // loop is guranteed to break at root1
            if (position - 1 - curr->length >= 0 && s[position - 1 - curr->length] == s[position])
            {
                break;
            }
            curr = curr->suff;
        }

        Node *temp = new Node();
        temp->length = curr->length + 2;
        temp->e = position;
        temp->s = position - temp->length + 1;
        curr->weights[weight] = temp;

        if (temp->length == 1)
        {
            // if cur is root1
            temp->suff = root2;
            current = temp;
            return 0;
        }

        // find the suffix node
        while (true)
        {
            curr = curr->suff;
            if ((position - 1 - curr->length) >= 0 && s[position - 1 - curr->length] == s[position])
            {
                temp->suff = curr->weights[weight];
                break;
            }
        }
        current = temp;

        return 0;
    }

    void print(string s, Node *node)
    {
        if (node != root1 && node != root2)
        {
            for (int i = node->s; i <= node->e; ++i)
            {
                cout << s[i];
            }
            cout << '\n';
        }
        //int weight=s[position]-'a';
        for (int i = 0; i < 26; ++i)
        {
            if ((node->weights[i]) != nullptr)
            {
                print(s, node->weights[i]);
            }
        }
    }

    void printAll(string &s)
    {
        print(s, root1);
        print(s, root2);
    }
};

int main()
{
    cout << "Enter a string to find its palindromic substrings: ";
    string s;
    cin >> s;
    time_t start, end, elapsed;
    start = clock();
    EerTree tree;
    for (int i = 0; i < s.size(); ++i)
        tree.insert(s, i);
    cout << "insertion done\n";
    cout << "Palindromic Substrings of given string are: \n";
    tree.printAll(s);
    end = clock();
    elapsed = end - start;
    cout << "The time taken is:" << elapsed << " microseconds" << endl;
    return 0;
}