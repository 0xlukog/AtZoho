#include <stdio.h>

int rotateString(char *s, char *goal)
{
    if(strlen(goal)!=strlen(s)) return 0;
    char c = s[0];
    int size = strlen(goal);
    int i = 0,res =0;
    for (; i < size; i++)
    {
        char g = goal[i];
        if (c == g && !res)
        {
            for (int j = i; (j - i) < size; j++)
            {
                char sCheck = s[j-i];
                char gCheck = goal[j % size];
                if (sCheck != gCheck)
                {
                    res=0;
                    break;
                }
                else{
                    res=1;

                }
                if((j-i)==size-1 && res ==1) return 1;
            }
        }
    }

    return res;
}
void main()
{
    // char s[] = "kifcqeiqoh";
    // char goal[] = "ayyrddojpq";
    // char s[] = "ohbrwzxvxe";
    // char goal[] = "uornhegseo";
    char s[] = "bbbacddceeb";
    char goal[] = "ceebbbbacdd";
    int res = rotateString(s, goal);
    printf("%s", res ? "yes" : "no");
}