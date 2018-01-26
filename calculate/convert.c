#include "convert.h"

int main(int argc, char *argv[]) {
    char[] command_list[2];
    if (argc < 2) {
        printf("Needs args [degrees] [dms] [degree] [minutes] [seconds]\n");
        return 1;
    }
    if (strcmp(argv[1], "--help")) {
        int i = 0;
        while (i < NUM_OF_COMMANDS) {
            printf("%s\n", command_list[i]);
            i ++;
        }
        printf("Which command: ");
        char command[8];
        fgets(command, sizeof(command), stdin);
        switch (strcmp(command, "dms")) {
            printf("Input:\n");
            printf("--dms [degree] [minute] [second]\n");
            printf("Output:\n");
            printf("[decimal degrees]");
        }
    }
    if (strcmp(argv[1], "--dms") == 0) {
        return atoi(argv[2]) + atoi(argv[3]) / 60 + atoi(argv[4]) / 3600;
    }
}