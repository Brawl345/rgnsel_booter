#include <gccore.h>
#include <stdlib.h>

int main(void) {
    VIDEO_Init();
    WII_LaunchTitle(0x0001000848414C45); // USA
    WII_LaunchTitle(0x0001000848414C50); // Europe
    WII_LaunchTitle(0x0001000848414C4A); // Japan
    WII_LaunchTitle(0x0001000848414C4B); // Korea
    exit(0);
}
