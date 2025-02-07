#include <stdio.h>
#include <stdlib.h>
#include "server_selector.h"
#include "server_loader.h"
#include "filesystem_checker.h"

char* server_launch_cmd = "screen -t mcserver -d -m java -Xms6144M -Xmx6144M --add-modules=jdk.incubator.vector -XX:+UseG1GC -XX:+ParallelRefProcEnabled -XX:MaxGCPauseMillis=200 -XX:+UnlockExperimentalVMOptions -XX:+DisableExplicitGC -XX:+AlwaysPreTouch -XX:G1HeapWastePercent=5 -XX:G1MixedGCCountTarget=4 -XX:InitiatingHeapOccupancyPercent=15 -XX:G1MixedGCLiveThresholdPercent=90 -XX:G1RSetUpdatingPauseTimePercent=5 -XX:SurvivorRatio=32 -XX:+PerfDisableSharedMem -XX:MaxTenuringThreshold=1 -Dusing.aikars.flags=https://mcflags.emc.gs -Daikars.new.flags=true -XX:G1NewSizePercent=30 -XX:G1MaxNewSizePercent=40 -XX:G1HeapRegionSize=8M -XX:G1ReservePercent=20 -jar";

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    // Check filesystem

    // List servers

    // Choose server
    //char* jar_file = 
    // Boot menu
    int req = dir_exists("src");
    printf("%i\n", req);
    req = dir_exists("jans");
    printf("%i\n", req);
    req = file_exists("Makefile");
    printf("%i\n", req);
    req = file_exists("main.c");
    printf("%i\n", req);
    return 0;
}
