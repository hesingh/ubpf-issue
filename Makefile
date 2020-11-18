CC=gcc
CFLAGS=-g -I ./runtime
DEPS = runtime/ebpf_map.h  runtime/ebpf_registry.h  runtime/ebpf_runtime_ubpf.h  runtime/ubpf_common.h runtime/contrib/uthash.h
OBJ = ipv4-actions_ubpf.o runtime/ebpf_map.o runtime/ebpf_registry.o test.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test : $(OBJ)
	$(CC) -o test $(OBJ)
