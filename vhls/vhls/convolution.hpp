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

#ifndef CONVOLUTION_HPP__
#define CONVOLUTION_HPP__

#include <stdint.h>
#include <vector>
#include <stdio.h>
#include <math.h>

#include <hls_stream.h>
#include <ap_axi_sdata.h>


/*** user parameters ***/
/* image parameters */
#define SRC_FILE            "rock512.pgm"
#define DST_FILE_HW         "output_hw.pgm"
#define DST_FILE_SW         "output_sw.pgm"

#define IMG_HEIGHT          512
#define IMG_WIDTH           512
#define IMG_SIZE            (IMG_HEIGHT * IMG_WIDTH)
#define IMG_DIM             1

#define K                   3

#define STREAM_LENGTH       IMG_SIZE
#define KERN_LENGTH         (K * K)
#define W                   ((K-1)/2)
#define DELAY               (W*IMG_WIDTH + W)

#define SIN_LENGTH          (STREAM_LENGTH)
#define SOUT_LENGTH         (STREAM_LENGTH)

/*** stream structure ***/
typedef ap_axis<8, 1, 1, 1> beat_t;
typedef hls::stream<beat_t> stream_t;

/*** applications prototypes ***/
void sw_conv(uint8_t *A, uint8_t *B);
void hw_conv(stream_t &sin, stream_t &sout);

/*** helper functions ***/
void array2stream(uint8_t *array, stream_t &stream);
void stream2array(stream_t &stream, uint8_t *array);

#endif /* CONVOLUTION_HPP__ */
