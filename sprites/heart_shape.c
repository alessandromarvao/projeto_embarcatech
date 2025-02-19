#include <stdint.h>

#define NEW_PISKEL_FRAME_COUNT 25
#define NEW_PISKEL_FRAME_WIDTH 5
#define NEW_PISKEL_FRAME_HEIGHT 5

/* Piskel data for "New Piskel" */

static const uint32_t splash_screen[25][25] = {
{
0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0xff0000ff, 0xffffffff, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xffffffff, 0xffffffff, 0xff0000ff, 0x00000000, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xffffffff, 0xffffffff, 0xff0000ff, 0xffffffff, 0x00000000
},
{
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 
0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff0000ff, 
0xffffffff, 0xff0000ff, 0xffffffff, 0xff0000ff, 0xffffffff, 
0xffffffff, 0xffffffff, 0xff0000ff, 0xffffffff, 0xffffffff
}
};
