#ifndef __KSU_H_SULOG
#define __KSU_H_SULOG

#include <linux/types.h>
#include <linux/version.h>
#if defined(__x86_64__) && LINUX_VERSION_CODE > KERNEL_VERSION(6, 1, 0)
#include <linux/mm.h>
#endif

bool ksu_sulog_is_enabled(void);
void __init ksu_sulog_init(void);
void __exit ksu_sulog_exit(void);

#endif
