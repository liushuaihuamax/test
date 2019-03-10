#include<stdio.h>
#include<string.h>
enum color{red,orange,yellow,green,blue,violet};
int main()
{
    char str[31];
        while(gets(str)!=NULL)
        {
            if(strcmp(str,"red")==0)
            {
                printf("Rose are red.\n");
            }
            else if(strcmp(str,"blue")==0)
            {
                printf("Bluebells are blue.\n");
            }
            else if(strcmp(str,"orange")==0)
            {
                printf("Poppies are orange.\n");
            }
            else if(strcmp(str,"green")==0)
            {
                printf("Grass are green.\n");
            }
           else if(strcmp(str,"violet")==0)
            {
                printf("Violets are violet.\n");
            }
          else   if(strcmp(str,"yellow")==0)
            {
                printf("Sunflower are yellow.\n");
            }
            else
                printf("I don't know about the color %s.\n",str);
        }
        return 0;
}
