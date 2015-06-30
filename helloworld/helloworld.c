#include <linux/module.h>
#include <linux/init.h>

static int initModule(void) {
    printk(KERN_DEBUG "Hello World!\n");
    return 0;
}

static void exitModule(void) {
    printk(KERN_DEBUG "Exit Hello World!\n");
    return;
}

module_init(initModule);
module_exit(exitModule);

