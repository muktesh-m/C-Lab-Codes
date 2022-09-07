#include <stdio.h>
struct player
{
    char mu_name[50];
    int mu_age;
    int mu_date_of_birth;
};

int main()
{
    int mu_roll_no, mu_p, i = 0;
    struct player mu_s[7];
    printf("Please enter your roll number:\n");
    scanf("%d", &mu_roll_no);

    for (int i = 0; i < 7; i++)
    {

        printf("Enter information:\n");
        printf("Enter name: ");
        scanf("%s", mu_s[i].mu_name);
        printf("Enter age: ");
        scanf("%d", &mu_s[i].mu_age);
        printf("Enter date_of_birth: ");
        scanf("%d", &mu_s[i].mu_date_of_birth);
    }
    mu_p = mu_roll_no % 10 + 20;
    printf("Displaying Information:\n");
    printf("Sl no.\tName:\tage\tdate_of_birth:\n");
    for (i = 0; i < 7; i++)
    {
        if (mu_s[i].mu_age > mu_p)
        {

            printf("%d\t%s\t%d\t %d\n", i + 1, mu_s[i].mu_name, mu_s[i].mu_age, mu_s[i].mu_date_of_birth);
        }
        else
        {
            printf("Random Format");
        }
    }
    return 0;
}