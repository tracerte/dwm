static const char *mutecmd[] = { "amixer", "-q", "set", "Master", "toggle", NULL };
static const char *volupcmd[] = { "amixer", "-q", "set", "Master", "5%+", "unmute", NULL };
static const char *voldowncmd[] = { "amixer", "-q", "set", "Master", "5%-", "unmute", NULL };
static const char *miccmd[] = { "amixer", "set", "Capture", "toggle", NULL };

static const char *brupcmd[] = { "xbacklight", "-inc", "10", NULL };
static const char *brdowncmd[] = { "xbacklight", "-dec", "10", NULL };
