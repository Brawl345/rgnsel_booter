#include <gccore.h>
#include <wiiuse/wpad.h>
#include <ogc/ios.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define TITLE_ID(x,y) (((u64)(x) << 32) | (y))

int main(int argc, char **argv) {
    VIDEO_Init();
    WII_LaunchTitle(TITLE_ID(0x00010008,0x48414C45)); // USA
    WII_LaunchTitle(TITLE_ID(0x00010008,0x48414C50)); // Europe
    WII_LaunchTitle(TITLE_ID(0x00010008,0x48414C4A)); // Japan
    WII_LaunchTitle(TITLE_ID(0x00010008,0x48414C4B)); // Korea
    exit(0);
}