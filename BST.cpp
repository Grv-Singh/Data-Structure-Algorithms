#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

struct BSTnode {
    char word[128], meaning[256];
    struct BSTnode *left, *right;
};

struct BSTnode *root = NULL;

// For Text Color
void SetColor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

//For BackGround Color
void ClearConsoleToColors(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F); //word is typedef of short int
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); //to control the output console buffer
    COORD coord = {0, 0}; //to determine the cordinates of the console
    DWORD count; //short for double word datatype unsigned 32 bit
    CONSOLE_SCREEN_BUFFER_INFO csbi; //info about console screen buffer
    SetConsoleTextAttribute(hStdOut, wColor);
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

        FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );

        SetConsoleCursorPosition(hStdOut, coord);
    }
 return;
}

struct BSTnode * createNode(char *word, char *meaning)
{
    struct BSTnode *newnode;
    newnode = (struct BSTnode *)malloc(sizeof(struct BSTnode));
    strcpy(newnode->word, word);
    strcpy(newnode->meaning, meaning);
    newnode->left = newnode->right = NULL;
    return newnode;

}

void insert(char *word, char *meaning)
{
    struct BSTnode *parent = NULL, *current = NULL, *newnode = NULL;
    int res = 0;
    if (!root)
    {
        root = createNode(word, meaning);
        return;
    }
    for (current = root; current !=NULL; current = (res > 0) ? current->right : current->left)
    {
        res = strcasecmp(word, current->word);
        if (res == 0)
        {
            printf("Duplicate entry!!\n");
            return;
        }
        parent = current;
    }
    newnode = createNode(word, meaning);
    res > 0 ? (parent->right = newnode) : (parent->left = newnode);
    return;
}

void deleteNode(char *str)
{
    struct BSTnode *parent = NULL, *current = NULL, *temp = NULL;
    int flag = 0, res = 0;

    if (!root) //validation
    {
        printf("BST is not present!!\n");
        return;
    }
    current = root;
    while(1)
    {
        res = strcasecmp(current->word, str);
        if (res == 0)
            break;
        flag = res;
        parent = current;
        current = (res > 0) ? current->left : current->right;
        if (current == NULL)
            return;
    }

    if (current->right == NULL)
    {
        if (current == root && current->left == NULL)
        {
            free(current);
            root = NULL;
            return;
        }
        else if (current == root)
        {
            root = current->left;
            free (current);
            return;
        }
        flag > 0 ? (parent->left = current->left) : (parent->right = current->left);
        } else
        {
        /* delete node with single child */
        temp = current->right;
        if (!temp->left)
        {
            temp->left = current->left;
            if (current == root)
            {
                root = temp;
                free(current);
                return;
            }
            flag > 0 ? (parent->left = temp) :(parent->right = temp);
        }
        else
        {
            struct BSTnode *successor = NULL;
            while (1)
            {
                successor = temp->left;
                if (!successor->left)
                    break;
                temp = successor;
            }
            temp->left = successor->right;
            successor->left = current->left;
            successor->right = current->right;
            if (current == root)
            {
                root = successor;
                free(current);
                return;
            }
            (flag > 0) ? (parent->left = successor) :  (parent->right = successor);
        }
    }
    free (current);
    return;
}

void findElement(char *str)
{
    struct BSTnode *temp = NULL;
    int flag = 0, res = 0;
    if (root == NULL)
    {
        printf("Binary Search Tree is out of station!!\n");
        return;
    }
    temp = root;
    while (temp)
    {
        if ((res = strcasecmp(temp->word, str)) == 0)
        {
            printf("Word   : %s", str);
            printf("\nMeaning: %s", temp->meaning);
            flag = 1;
            break;
        }
        temp = (res > 0) ? temp->left : temp->right;
    }
    if (!flag)
    {
        SetColor(4);
        printf("Search Element not found in Dictionary\n");
        SetColor(2);
    }
    return;
}

void inorderTraversal(struct BSTnode *myNode)
{
    if (myNode!=NULL)
    {
        inorderTraversal(myNode->left);
        printf("Word    : %s", myNode->word);
        printf("\nMeaning : %s", myNode->meaning);
        printf("\n");
        inorderTraversal(myNode->right);
    }
    return;
}

int main()
{
    int ch;
    char str[128], meaning[256];
    ClearConsoleToColors(0,15);
    while (1)
    {
        SetColor(1);
        printf("\t\tDigital Dictionary \n\n\tBy Gaurav, Samarth, Vaishanvi\n\n");
        SetColor(2);
        printf("     1. Insertion\t\t2. Deletion\n");
        printf("     3. Searching\t\t4. Traversal\n");
        printf("     5. Exit\nEnter Your Choice: ");
        scanf("%d", &ch);
        getchar();
        switch (ch)
        {
            case 1:
                    printf("Word to insert:");
                    fgets(str, 100, stdin); //100 characters of values are stored in str via stdin char
                    //* fgets ( char * str, int num, FILE * stream );
                    printf("Meaning:");
                    fgets(meaning, 256, stdin);
                    insert(str, meaning);
                    break;
            case 2:
                    printf("Enter the word to delete:");
                    fgets(str, 100, stdin);
                    deleteNode(str);
                    break;
            case 3:
                    printf("Enter the search word:");
                    fgets(str, 100, stdin);
                    findElement(str);
                    break;
            case 4:
                    inorderTraversal(root);
                    break;
            case 5:
                    exit(0);
            default:
                    SetColor(4);
                    printf("You have entered wrong option!!  Try Again\n");
                    SetColor(2);
                    break;
        }
        printf("Press 0 to go back to Menu ");
        getchar();
        system("cls");
    }
    return 0;
}
