// Copyright 2025 Shift Crypto AG
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef DEBUG_H_
#define DEBUG_H_

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#ifdef DEBUG_SEGGER
#include <SEGGER_RTT.h>

#define LOG_S(str) SEGGER_RTT_WriteString(0, (str))
#define LOG(...) SEGGER_RTT_printf(0, __VA_ARGS__)
#define LOG_X(a, b, c) log_x(a, b, c)
#else
#define LOG_S(str)
#define LOG(...)
#define LOG_X(a, b, c)
#endif

void Debug_PrintMemoryUsage(void);
void log_x(const char *prefix, const uint8_t *buf, uint16_t buf_len);

#endif // DEBUG_H_
