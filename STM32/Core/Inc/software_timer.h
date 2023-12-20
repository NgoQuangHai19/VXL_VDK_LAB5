/*
 * software_timer.h
 *
 *  Created on: Dec 20, 2023
 *      Author: AD
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TICK 10
extern int timer1_flag;
void setTimer1(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
