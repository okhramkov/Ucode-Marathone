#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength)
{
    t_agent *stract = (t_agent *)malloc(sizeof(t_agent *));
    stract->name = mx_strdup(name);
    stract->power = power;
    stract->strength = strength;
    return stract;
}
