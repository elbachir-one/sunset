/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    "#000000", /* 0: black */
    "#c990fc", /* 1: red */
    "#d6e9bb", /* 2: green */
    "#c8a0ef", /* 3: yellow */
    "#c697f2", /* 4: blue */
    "#2fb0d7", /* 5: magenta */
    "#d39758", /* 6: cyan */
    "#ffffff", /* 7: white */
    "#383e30", /* 8: bright black */
    "#c990fc", /* 9: bright red */
    "#d6e9bb", /* 10: bright green */
    "#c8a0ef", /* 11: bright yellow */
    "#c697f2", /* 12: bright blue */
    "#2fb0d7", /* 13: bright magenta */
    "#d39758", /* 14: bright cyan */
    "#ffffff", /* 15: bright white */

    [255] = 0,
    "#ffffff", /* 256 -> cursor */
    "#000000", /* 257 -> reverse cursor */
    "#000000", /* 258 -> bg */
    "#ffffff", /* 259 -> fg */
};
