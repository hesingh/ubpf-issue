This repo contains a test program to test ubpf control plane for a bug.

Just type `make` in the root directory to build the test program.
Run the test program from the root directory.
Sample log of test is include below

```bash
$ ./test
init tbl: &pipe_filter_tbl_defaultAction key sz = 4 val sz = 12 
Table add success &pipe_filter_tbl_defaultAction
registry_lookup_table &pipe_filter_tbl_defaultAction
Error: registry_add chk failed: &pipe_filter_tbl_defaultAction
registry_lookup_table &pipe_filter_tbl_defaultAction
Failed tbl add &pipe_filter_tbl_defaultAction
registry_lookup_table &pipe_filter_tbl_defaultAction
Error: tbl is null: &pipe_filter_tbl_defaultAction
```
