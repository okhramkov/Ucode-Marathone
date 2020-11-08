#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    t_agent **agent = NULL;

    if (name == NULL || power == NULL || strength == NULL)
        return NULL;
    agent = malloc(sizeof(t_agent) * count);//виділяємо память згідно кількості елементів
    for(int i = 0; i < count; i++) {
        agent[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    return agent;
}

// int main(void) {
//     char *name[] = {"Neo", "Trinity", "Morphiy"};
//     int power[] = {23, 56, 78};
//     int strenght[] = {56, 38, 10};
//     int count = 3;
//     t_agent **agent = mx_create_new_agents(name, power, strenght, count);
//     for(int i = 0; i < count; i++) {
//         printf("%s ", agent[i] -> name);
//         printf("%d ", agent[i] -> power);
//         printf("%d ", agent[i] -> strength);
//         printf("\n");
//     }
//     system("leaks -q a.out");
// }
