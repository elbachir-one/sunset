/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    "#ff5733", /* 0: black */
    "#ffda33", /* 1: red */
    "#33ff57", /* 2: green */
    "#338aff", /* 3: yellow */
    "#ff33f5", /* 4: blue */
    "#33e6ff", /* 5: magenta */
    "#33ff57", /* 6: cyan */
    "#ffffff", /* 7: white */
    "#ff8533", /* 8: bright black */
    "#ffda33", /* 9: bright red */
    "#33ff57", /* 10: bright green */
    "#338aff", /* 11: bright yellow */
    "#ff33f5", /* 12: bright blue */
    "#33e6ff", /* 13: bright magenta */
    "#33ff57", /* 14: bright cyan */
    "#ffffff", /* 15: bright white */

    [255] = 0,
    "#ffda33", /* 256 -> cursor */
    "#ff5733", /* 257 -> reverse cursor */
    "#000000", /* 258 -> bg */
    "#ffffff", /* 259 -> fg */
};
