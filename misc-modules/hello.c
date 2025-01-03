#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int __init hello_init(void)
{
	printk(KERN_ALERT "Hello, serges147!\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, serges147.\n");
}

module_init(hello_init);
module_exit(hello_exit);
