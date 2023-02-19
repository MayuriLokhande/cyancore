/*
 * CYANCORE LICENSE
 * Copyrights (C) 2023, Cyancore Team
 *
 * File Name		: plat_mem.h
 * Description		: This file contains defines corresponding to
 *			  sifive_e platform
 * Primary Author	: Akash Kollipara [akashkollipara@gmail.com]
 * Organisation		: Cyancore Core-Team
 */

#pragma once

#define __RISCV_FE310G002__

enum pinmux_functions
{
	serial = 0,
	pwm = 1
};
