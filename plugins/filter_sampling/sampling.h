/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit Sampling
 *  ==========
 *  Copyright (C) 2015-2024 The Fluent Bit Authors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_FILTER_SAMPLE_H
#define FLB_FILTER_SAMPLE_H

#include <fluent-bit/flb_info.h>
#include <fluent-bit/flb_filter.h>
#include <fluent-bit/flb_pthread.h>

/* actions */
#define SAMPLE_RET_KEEP  0
#define SAMPLE_RET_DROP  1

/* defaults */
#define SAMPLE_DEFAULT_RATE "0.1"
#define SAMPLE_DEFAULT_RANDOM "true"

struct flb_filter_sampling_ctx {
    double rate;
    unsigned int random_enabled;
    unsigned seed;
    unsigned int comb_curband;
    unsigned int comb_curstep;
    unsigned int comb_bands;
    unsigned int comb_steps;

    struct flb_filter_instance *ins;
};

#endif