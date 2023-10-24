/*
 * noten@84000000.h
 *
 *  Created on: Sep 27, 2022
 *      Author: jesse
 */

#ifndef INC_NOTEN_84000000_H_
#define INC_NOTEN_84000000_H_

// Musical notes table generator v1.0
// Table for 16-bit timer register @ 84.0000 MHz

#define STD_TONE 440.000000
#define FREQ_APB1 84000000
#define PRESCALER 5
#define C0     64213   // 130.81 Hz
#define CIS0   60609   // 138.59 Hz
#define D0     57207   // 146.83 Hz
#define DIS0   53996   // 155.56 Hz
#define E0     50966   // 164.81 Hz
#define F0     48105   // 174.61 Hz
#define FIS0   45405   // 185.00 Hz
#define G0     42857   // 196.00 Hz
#define GIS0   40451   // 207.65 Hz
#define A0     38181   // 220.00 Hz
#define AIS0   36038   // 233.08 Hz
#define B0     34015   // 246.94 Hz
#define C1     32106   // 261.63 Hz
#define CIS1   30304   // 277.18 Hz
#define D1     28603   // 293.66 Hz
#define DIS1   26998   // 311.13 Hz
#define E1     25482   // 329.63 Hz
#define F1     24052   // 349.23 Hz
#define FIS1   22702   // 369.99 Hz
#define G1     21428   // 392.00 Hz
#define GIS1   20225   // 415.30 Hz
#define A1     19090   // 440.00 Hz
#define AIS1   18018   // 466.16 Hz
#define B1     17007   // 493.88 Hz
#define C2     16052   // 523.25 Hz
#define CIS2   15151   // 554.37 Hz
#define D2     14301   // 587.33 Hz
#define DIS2   13498   // 622.25 Hz
#define E2     12741   // 659.26 Hz
#define F2     12026   // 698.46 Hz
#define FIS2   11351   // 739.99 Hz
#define G2     10713   // 783.99 Hz
#define GIS2   10112   // 830.61 Hz
#define A2      9544   // 880.00 Hz
#define AIS2    9009   // 932.33 Hz
#define B2      8503   // 987.77 Hz
#define C3      8026   // 1046.50 Hz
#define CIS3    7575   // 1108.73 Hz
#define D3      7150   // 1174.66 Hz
#define DIS3    6749   // 1244.51 Hz
#define E3      6370   // 1318.51 Hz
#define F3      6012   // 1396.91 Hz
#define FIS3    5675   // 1479.98 Hz
#define G3      5356   // 1567.98 Hz
#define GIS3    5056   // 1661.22 Hz
#define A3      4772   // 1760.00 Hz
#define AIS3    4504   // 1864.66 Hz
#define B3      4251   // 1975.53 Hz
#define C4      4012   // 2093.00 Hz
#define CIS4    3787   // 2217.46 Hz
#define D4      3575   // 2349.32 Hz
#define DIS4    3374   // 2489.02 Hz
#define E4      3184   // 2637.02 Hz
#define F4      3006   // 2793.83 Hz
#define FIS4    2837   // 2959.96 Hz
#define G4      2678   // 3135.96 Hz
#define GIS4    2527   // 3322.44 Hz
#define A4      2385   // 3520.00 Hz
#define AIS4    2251   // 3729.31 Hz
#define B4      2125   // 3951.07 Hz
#define H       1      // Herhaal/repeat
#define R       2      // Rust/rest
#define S       3      // Stop

#endif /* INC_NOTEN_84000000_H_ */
