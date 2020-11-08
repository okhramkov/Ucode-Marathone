#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) {

    for(int i = 0; (*agents)[i] != NULL; i++) {
        free((*agents)[i]);
        agents[i] = NULL;
    }
    free(agents);
    agents = NULL;
}

    // int main(void) {
    //     char *name[] = {"Neo", "Trinity", "Morphiy"};
    //     int power[] = {23, 56, 78};
    //     int strenght[] = {56, 38, 10};
    //     int count = 3;
    //     t_agent **agent = mx_exterminate_agents();
    //     for(int i = 0; i < count; i++) {
    //         printf("%s ", agent[i] -> name);
    //         printf("%d ", agent[i] -> power);
    //         printf("%d ", agent[i] -> strength);
    //         printf("\n");
    //     }
    //     system("leaks -q a.out");
    // }

