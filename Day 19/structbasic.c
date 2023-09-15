#include <stdio.h>
typedef struct
{
    int age;
    char name[50];
} student;

void replaceString(char *replace, char *replaceWith, int replaceWithlength)
{
    for (int i = 0; i < replaceWithlength; i++)
    {
        replace[i] = replaceWith[i];
    }
    replace[replaceWithlength] = '\0';
}
int compareString(char a[], char b[], int aLen, int bLen)
{
    int result = 0;
    int min = aLen < bLen ? aLen : bLen;
    for (int i = 0; i < min; i++)
    {
        if (a[i] == b[i])
        {
            result = 0;
        }
        else if (a[i] > b[i])
        {
            result = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            result = -1;
            break;
        }
    }
    return result;
}

int getAge(student s)
{
    return s.age;
}

void setAge(student *s, int Age)
{
    s->age = Age;
}

char *getName(student *s)
{
    return s->name;
}

void setName(student *s, char *Name)
{
    int len = strlen(Name);
    for (int i = 0; i < len; i++)
    {
        s->name[i] = Name[i];
    }
    s->name[len] = '\0';
}

void printStudents(student *students, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Age of %s is %d\n", getName(&students[i]), getAge(students[i]));
    }
}

void scanStudents(student *students, int size)
{
    for (int i = 0; i < size; i++)
    {
        int age;
        char name[50];
        printf("Enter name : ");
        scanf("%s", name);
        printf("\n");

        printf("Enter age of %s : ", name);
        scanf("%d", &age);
        printf("\n");
        setAge(&students[i], age);
        setName(&students[i], name);
    }
}
void sortStudents(student *students, int size)
{
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (compareString(getName(&students[i]),getName(&students[j]),strlen(getName(&students[i])),strlen(getName(&students[j])))==1)
            {
                int temp = getAge(students[i]);
                char tempName[50];
                replaceString(tempName, getName(&students[i]), strlen(getName(&students[i])));
                setAge(&students[i], getAge(students[j]));
                setName(&students[i], getName(&students[j]));
                setAge(&students[j], temp);
                setName(&students[j], tempName);
            }
        }
    }
}

void main()
{
    student students[50];
    int size = 3;
    // printf("Enter number of students : ");
    // scanf("%d", &size);

    scanStudents(students, size);
    sortStudents(students, size);
    printStudents(students, size);
}