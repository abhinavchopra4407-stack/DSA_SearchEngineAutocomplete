#include <iostream>
#include <vector>
using namespace std;

struct TrieNode
{
    TrieNode* child[26];
    bool isEnd;

    TrieNode()
    {
        isEnd = false;

        for(int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
    }
};

TrieNode* root = new TrieNode();
void insert(string word)
{
    TrieNode* current = root;

    for(int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'a';

        if(current->child[index] == NULL)
        {
            current->child[index] = new TrieNode();
        }

        current = current->child[index];
    }

    current->isEnd = true;
}
TrieNode* searchPrefix(string prefix)
{
    TrieNode* current = root;

    for(int i = 0; i < prefix.length(); i++)
    {
        int index = prefix[i] - 'a';

        if(current->child[index] == NULL)
        {
            return NULL;
        }

        current = current->child[index];
    }

    return current;
}
void suggestions(TrieNode* current, string word)
{
    if(current->isEnd)
    {
        cout << word << endl;
    }

    for(int i = 0; i < 26; i++)
    {
        if(current->child[i] != NULL)
        {
            char ch = 'a' + i;
            suggestions(current->child[i], word + ch);
        }
    }
}
void autocomplete(string prefix)
{
    TrieNode* node = searchPrefix(prefix);

    if(node == NULL)
    {
        cout << "No Suggestions Found" << endl;
        return;
    }

    suggestions(node, prefix);
}
int main()
{
    insert("apple");
    insert("application");
    insert("apply");
    insert("aptitude");
    insert("amazon");

    insert("banana");
    insert("band");
    insert("bank");
    insert("banner");

    insert("cat");
    insert("camera");
    insert("car");
    insert("cart");

    insert("college");
    insert("computer");
    insert("code");
    insert("coding");

    insert("cpp");
    insert("python");
    insert("project");

    string search;

    cout << "===== Search Engine Autocomplete =====" << endl;

    while(true)
    {
        cout << "\nEnter Search: ";
        cin >> search;

        autocomplete(search);

        char choice;
        cout << "\nSearch Again? (y/n): ";
        cin >> choice;

        if(choice == 'n' || choice == 'N')
        {
            break;
        }
    }

    cout << "\nThank You!" << endl;

    return 0;
}
