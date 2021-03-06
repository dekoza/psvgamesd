#pragma once

#include <stdint.h>

int initialize_dump_threading();
int deinitialize_dump_threading();

int dump_mmc_card_start_internal(const char* dump_path);
int dump_mmc_card_stop_internal();

uint32_t get_total_sectors();
uint32_t get_progress_sectors();