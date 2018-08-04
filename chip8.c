#include <stdlib.h>
#include <stdio.h>

typedef struct ChipState
{
    int memory;         // Max memory for CHIP8 programs is 4096 bytes
    uint16_t pc;        // CHIP8 programs start at 0x200.
    uint16_t stack_ptr; // Starts at 0xEA0
    uint8_t v[16];      // Register

}ChipState;

int main(int argc, char *argv[])
{
    ChipState state = { 4096, 0x200, 0xEA0 }; // Initialize with default values
    char code = 0x000;

    // Temp statement
    switch(code)
    {
        case 0x000:
            puts("Processed");
            break;
        default:
            puts("Default");
            break;
    }

    return 0;
}

