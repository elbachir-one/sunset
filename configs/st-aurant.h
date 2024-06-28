/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    "#1d2021", /* 0: black */
    "#fe8019", /* 1: red */
    "#8ec07c", /* 2: green */
    "#fabd2f", /* 3: yellow */
    "#83a598", /* 4: blue */
    "#d3869b", /* 5: magenta */
    "#8ec07c", /* 6: cyan */
    "#fbf1c7", /* 7: white */
    "#928374", /* 8: bright black */
    "#fe8019", /* 9: bright red */
    "#8ec07c", /* 10: bright green */
    "#fabd2f", /* 11: bright yellow */
    "#83a598", /* 12: bright blue */
    "#d3869b", /* 13: bright magenta */
    "#8ec07c", /* 14: bright cyan */
    "#fbf1c7", /* 15: bright white */

    [255] = 0,
    "#fabd2f", /* 256 -> cursor */
    "#fe8019", /* 257 -> reverse cursor */
    "#1d2021", /* 258 -> bg */
    "#fbf1c7", /* 259 -> fg */
};
