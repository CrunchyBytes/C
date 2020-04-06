#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

/* Module entry point
   This function is called when the module is loaded. */
int simple_init(void)
{
	// printk() is the kernel equivalent of printf()
	/* KERN_INFO is the function's priority flag: an informational messa-
	   ge
	 */
	printk(KERN_INFO "Loading Module\n");

	/* If the function returns anything other than 0, it represents fail-
	   ure.
	 */
	return 0;
}

/* Module exit point
   This function is called when the module is removed. */
void simple_exit(void)
{
	printk(KERN_INFO "Removing Module\n");
}

/* Macros for registering module entry and exit points. */
module_init(simple_init);
module_exit(simple_exit);

/* Represent details regarding the software license, description of the mod-
   ule, and author.
 */
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");
