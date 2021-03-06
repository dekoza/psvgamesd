#pragma once

 #include <psp2kern/types.h>

 #include "mbr_types.h"
 #include "psv_types.h"

extern SceUID req_lock;
extern SceUID resp_lock;

extern SceUID req_cond;
extern SceUID resp_cond;

extern void* g_ctx_part;
extern int g_sector;
extern char* g_buffer;
extern int g_nSectors; 
extern int g_res;

const MBR* get_mbr_ptr();

int set_reader_iso_path(const char* path);
int clear_reader_iso_path();

#define CMD56_DATA_SIZE 0x34

int get_cmd56_data_base(psv_file_header_v1* ih, char* buffer);
int get_cmd56_data(char* buffer);

int initialize_read_threading();
int deinitialize_read_threading();