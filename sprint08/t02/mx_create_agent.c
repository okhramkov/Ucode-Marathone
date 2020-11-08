#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength)
{
    t_agent *stract = (t_agent *)malloc(sizeof(t_agent *));
    stract->name = mx_strdup(name);
    stract->power = power;
    stract->strength = strength;
    return stract;
}

int main()
{
    t_agent *stract = mx_create_agent("Lexa", 12, 30);
    printf("%s\n", stract->name);
    printf("%d\n", stract->power);
    printf("%d\n", stract->strength);
}
