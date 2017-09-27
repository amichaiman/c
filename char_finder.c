#include <stdio.h>
#include <string.h>
#define MAX 50
void flush_buffer();
int main()
{
    
    char str[MAX];
    int string_size;
    int i;
    char ch;
    //וזה פוינטר שבאמצעותו שה אם התו שהמתשמ בחר קיים במחרוזת
    //סליחה על חוסר היצירתיות בבחירת השם
    
    char* pointer; // חשוב לשים לב שהפוינטר הוא מסוג צ'אר
    
    
    printf("Enter string please:\n");
    scanf("%s",str);
    
    string_size=strlen(str);
    
    flush_buffer();
    
    //משימה ראשונה: נפרט באיזה כתובת כל אות
    
    for(i=0 ; i<string_size ; i++)  
        {
            printf("index %d--> character %c  ---> adress %p\n", i, str[i], &str[i]);
        }
    
    
    
    //משימה שניה: נאמר למשתמש באיזה כתובת האות שבחרת
    
    printf("please choose char and I'll  find for you its adress\n");
    
    
    
    scanf("%c", &ch);
    
    pointer=strchr(str,ch);
    
    if(pointer==NULL)
        printf("%c doesn't apear at %s", ch, str);
    
    else
        printf("%c apears at index %d at adress %p\n", ch, (int)(pointer-str) , pointer);
        //פוינטר פחות אס טי אר יתן לי את מספר הקפיצות מתחילת המחרוזת עד האות וכך נדע מה האינדקס
    

    return 0;
}

void flush_buffer()
{
    char c;
    while (c = getchar() != '\n');
}