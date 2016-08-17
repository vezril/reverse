#ifndef REVERSE_H_
#define REVERSE_H_

static int __init rev_init(void);
static void __exit rev_exit(void);
int rev_open(struct inode *inode, struct file *flip);
int rev_release(struct inode *inode, struct file *flip);
ssize_t rev_read(struct file *flip, char __user *ubuf, size_t count, loff_t *f_ops );
ssize_t rev_write(struct file *flip, const char __user *ubuf, size_t count, loff_t *f_ops);
long rev_ioctl(struct file *flip, unsigned int cmd, unsigned long arg);

#endif
