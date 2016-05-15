/*
 *  linux/include/linux/touchboost.h
 *
 * franciscofranco.1990@gmail.com
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef _LINUX_TOUCHBOOST_H
#define _LINUX_TOUCHBOOST_H

extern int input_boost_freq;

u64 get_input_time(void);
int get_input_boost_duration(void);

#endif
