#include <bits/stdc++.h>

using namespace std;

struct node

{
    bool endMark;
    node* nextAlphabet[26];

    node()
    {
        endMark = false;

        for(int index = 0; index < 26; index++)
        {

            nextAlphabet[index] = NULL;
        }
    }

}*root;


void insert(char* string, int length)
{
    node* current = root;

    for(int index = 0; index < length; index++)
    {
        int id = string[index] - 'a';

        if(current->nextAlphabet[id] == NULL)
            current->nextAlphabet[id] = new node();

        current = current->nextAlphabet[id];
    }

    current->endMark = true;
}

bool search(char* string, int length)
{
    node* current = root;

    for(int index = 0; index < length; index++)
    {
        int id = string[index]-'a';

        if(current->nextAlphabet[id] == NULL)
            return false;

        current = current->nextAlphabet[id];
    }

    return current->endMark;
}

bool remove(char* string, int length)
{
    node* current = root;

    for(int index = 0; index < length; index++)
    {

        int id = string[index]-'a';

        if(current->nextAlphabet[id] == NULL)
            return false;

        current = current->nextAlphabet[id];
    }

    bool end = current->endMark;
    current->endMark = false;

    return end;
}


void getword(node* word, char* string)
{
    if(word->endMark)
       {
           printf("%s\n", string);

       }

    char temp[1002];
    int length = strlen(string);


    strcpy(temp,string);
    temp[length+1] = '\0';


    for(int index = 0; index < 26; index++)
    {

        if(word->nextAlphabet[index] != NULL)
        {
            temp[length] = 'a'+index;

            getword(word->nextAlphabet[index], temp);
        }
    }
}


void autocomplete(char* string, int length)
{
    node* current = root;
    int key = 0;

    for(int index = 0; index < length; index++)
    {

        int id = string[index]-'a';

        if(current->nextAlphabet[id] == NULL)
        {
            key = 1;
            cout<<"Such prefix does not exist!\n\n";
            break;
        }

        current = current->nextAlphabet[id];

    }


    node* temp = current;
    if(!key)
        {
            cout << "The words that has '" << string << "' as a prefix are:\n";
            getword(temp, string);
        }
    cout << endl;


    return;
}


int main()
{
    int number;
    char string[100];
    root = new node();

    cout << "Press 1 to enter a new word\n";
    cout << "Press 2 to delete an existing word\n";
    cout << "Press 3 to search a word from the dictionary\n";
    cout << "Press 4 to try the autocomplete feature\n";
    cout << "Press 5 to exit\n\n";

    while(1)
    {
        cout<<"Choose an option ";
        cin >> number;
        if(number == 5)
           {
               break;
           }

        if(number == 1)
        {
            cout << "Type the word that you want to enter: ";

            scanf(" %s",string);
            insert(string,strlen(string));

            cout << string << " was successfully entered to our dictionary.\n\n";
        }


        else if(number == 2)
        {
            cout << "Type the word that you want to delete: ";

            scanf(" %s",string);
            bool flag = remove(string,strlen(string));

            if(!flag)
                cout << string << " was not found in the dictionary.\n\n";
            else
                cout << string << " was successfully deleted from our dictionary.\n\n";
        }

        else if(number == 3)
        {
            cout << "Type the word that you want to search: ";

            scanf(" %s",string);
            bool flag = search(string,strlen(string));

            if(!flag)
                cout << string << " was not found in the dictionary.\n\n";
            else
                cout << string << " was found in our dictionary!\n\n";
        }

        else if(number == 4)
        {
            cout << "Type the prefix: ";

            scanf(" %s",string);
            autocomplete(string, strlen(string));
        }
        else
        {
            cout<<"Wrong input! Try again!"<<endl;
            break;

        }
    }


    return 0;
}
