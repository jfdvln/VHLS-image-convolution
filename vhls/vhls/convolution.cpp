/*------------------------------------------------------------------------------
--                                                                            --
--       .oooooo..o ooooo   ooooo ooooooooo.   oooooooooooo   .oooooo.        --
--      d8P'    `Y8 `888'   `888' `888   `Y88. `888'     `8  d8P'  `Y8b       --
--      Y88bo.       888     888   888   .d88'  888         888               --
--       `"Y8888o.   888ooooo888   888ooo88P'   888oooo8    888               --
--           `"Y88b  888     888   888`88b.     888    "    888               --
--      oo     .d8P  888     888   888  `88b.   888       o `88b    ooo       --
--      8""88888P'  o888o   o888o o888o  o888o o888ooooood8  `Y8bood8P'       --
--                                                                            --
--------------------------------------------------------------------------------
-- Vivado HLS 2D Convolutional Accelerator          author: Sebastian Sabogal --
--------------------------------------------------------------------------------
--                                                                            --
-- Copyright (C) 2020 SHREC.                                                  --
--                                                                            --
-- This file is part of HLS-2D-CONV.                                          --
--                                                                            --
-- HLS-2D-CONV is free software; you can redistribute it and/or modify        --
-- it under the terms of the GNU General Public License as published by the   --
-- Free Software Foundation; either version 3, or (at your option) any later  --
-- version.                                                                   --
-- HLS-2D-CONV is distributed in the hope that it will be useful, but         --
-- WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY --
-- or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License   --
-- for more details.                                                          --
-- You should have received a copy of the GNU General Public License along    --
-- with HLS-2D-CONV; see the file LICENSE.  If not see                        --
-- <http://www.gnu.org/licenses/>.                                            --
--                                                                            --
------------------------------------------------------------------------------*/

#include "convolution.hpp"

#if 0
int8_t kern[K * K] = {
	-1, 0, 1,
	-2, 0, 2,
	-1, 0, 1
};
uint8_t shift_div = 0;
#elif 1
int8_t kern[K * K] = {
	1, 2, 1,
	2, 4, 2,
	1, 2, 1
};
uint8_t shift_div = 4;
#else
int8_t kern[K * K] = {
	0, 0, 0,
	0, 1, 0,
	0, 0, 0
};
uint8_t shift_div = 0;
#endif

void sw_conv(uint8_t *A, uint8_t *B)
{
	for (int i = W; i < IMG_HEIGHT-W; ++i) {
		for (int j = W; j < IMG_WIDTH-W; ++j) {

			int32_t result = 0;
			for (int y = 0; y < 2*W+1; ++y) {
				for (int x = 0; x < 2*W+1; ++x) {
					result += A[(i+y-W)*IMG_WIDTH + (j+x-W)] * kern[y*K+x];
				}
			}
			result >>= shift_div;

			// saturation
			if (result > 0xFF) {
				B[i*IMG_WIDTH + j] = 0xFF;
			} else if (result < 0) {
				B[i*IMG_WIDTH + j] = 0;
			} else {
				B[i*IMG_WIDTH + j] = result;
			}
		}
	}
}

void hw_conv(stream_t &sin, stream_t &sout)
{
#	pragma HLS INTERFACE ap_ctrl_none port=return
#	pragma HLS INTERFACE axis port=sin
#	pragma HLS INTERFACE axis port=sout

// ===== write C++/HLS code here =====


// ===== write C++/HLS code here =====
}
