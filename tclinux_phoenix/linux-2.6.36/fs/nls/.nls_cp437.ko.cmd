cmd_fs/nls/nls_cp437.ko := mips-buildroot-linux-gnu-ld -r  -m elf32btsmip -T /opt/tclinux_phoenix/linux-2.6.36/scripts/module-common.lds --build-id  -o fs/nls/nls_cp437.ko fs/nls/nls_cp437.o fs/nls/nls_cp437.mod.o