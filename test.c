#include "ipv4-actions_ubpf.h"
#include <stdio.h>
#include "runtime/ebpf_runtime_ubpf.h"

int main()
{
    uint32_t ebpf_zero = 0;
    {
        struct pipe_filter_tbl_value pipe_filter_tbl_NoAction_value = {
            .action = pipe_filter_tbl_NoAction,
            .u = {.pipe_filter_tbl_NoAction = {}},
        };
        printf("size = %ld\n", sizeof(pipe_filter_tbl_NoAction_value));
        INIT_UBPF_TABLE("pipe_filter_tbl_defaultAction", sizeof(ebpf_zero),
			sizeof(pipe_filter_tbl_NoAction_value));
        ubpf_map_update(&pipe_filter_tbl_defaultAction, &ebpf_zero,
			&pipe_filter_tbl_NoAction_value);
    }
}

