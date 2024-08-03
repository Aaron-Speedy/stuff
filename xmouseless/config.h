
/* the rate at which the mouse moves in Hz
 * does not change its speed */
static const unsigned int move_rate = 50;

/* the default speed of the mouse pointer
 * in pixels per second */
static const unsigned int default_speed = 250;

/* changes the speed of the mouse pointer */
static SpeedBinding speed_bindings[] = {
    /* key             speed */  
    { XK_Alt_L,        50 },
    { XK_Shift_L,      100  },
    { XK_Control_L,    750 },
};

/* moves the mouse pointer
 * you can also add any other direction (e.g. diagonals) */
static MoveBinding move_bindings[] = {
    /* key         x      y */
    { XK_h,        -1,     0 },
    { XK_j,         0,     1 },
    { XK_k,         0,    -1 },
    { XK_l,         1,     0 },
};

/* 1: left
 * 2: middle
 * 3: right */
static ClickBinding click_bindings[] = {
    /* key         button */  
    { XK_space,    1 },
    { XK_i,        2 },
    { XK_o,        3 },
};

/* scrolls up, down, left and right
 * a higher value scrolls faster */
static ScrollBinding scroll_bindings[] = {
    /* key        x      y */
    { XK_n,        0 ,    10 },
    { XK_m,        0 ,   -10 },
    // { XK_plus,     0 ,    80 },
    // { XK_minus,    0 ,   -80 },
    // { XK_h,        25,    0  },
    // { XK_g,       -25,    0  },
};

/* executes shell commands */
static ShellBinding shell_bindings[] = {
    /* key         command */  
};

/* exits on key release which allows click and exit with one key */
static KeySym exit_keys[] = {
    XK_Escape,
};
