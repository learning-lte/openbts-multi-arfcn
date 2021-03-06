/*
 * fft.h
 *
 * Fast Fourier transform 
 *
 * Copyright (C) 2012 Thomas Tsou <ttsou@vt.edu>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 * See the COPYING file in the main directory for details.
 */ 

#ifndef _FFT_H_
#define _FFT_H_

struct fft_hdl;

struct fft_hdl *init_fft(int reverse, int m);
void free_fft(struct fft_hdl *hdl);
int cxvec_fft(struct fft_hdl *hdl, struct cxvec *in, struct cxvec *out);

#endif /* _FFT_H_ */
