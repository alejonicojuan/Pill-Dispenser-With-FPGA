PACKAGES=libc libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata bios
PACKAGE_DIRS=/home/zero/litex/litex/soc/software/libc /home/zero/litex/litex/soc/software/libcompiler_rt /home/zero/litex/litex/soc/software/libbase /home/zero/litex/litex/soc/software/libfatfs /home/zero/litex/litex/soc/software/liblitespi /home/zero/litex/litex/soc/software/liblitedram /home/zero/litex/litex/soc/software/libliteeth /home/zero/litex/litex/soc/software/liblitesdcard /home/zero/litex/litex/soc/software/liblitesata /home/zero/litex/litex/soc/software/bios
LIBS=libc libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata
TRIPLE=riscv64-unknown-elf
CPU=picorv32
CPUFAMILY=riscv
CPUFLAGS=-mno-save-restore -march=rv32im     -mabi=ilp32 -D__picorv32__ 
CPUENDIANNESS=little
CLANG=0
CPU_DIRECTORY=/home/zero/litex/litex/soc/cores/cpu/picorv32
SOC_DIRECTORY=/home/zero/litex/litex/soc
PICOLIBC_DIRECTORY=/opt/pythondata-software-picolibc/pythondata_software_picolibc/data
COMPILER_RT_DIRECTORY=/opt/pythondata-software-compiler_rt/pythondata_software_compiler_rt/data
export BUILDINC_DIRECTORY
BUILDINC_DIRECTORY=/home/zero/Downloads/SoC_project_2022-1/build/nexys4ddr/software/include
LIBC_DIRECTORY=/home/zero/litex/litex/soc/software/libc
LIBCOMPILER_RT_DIRECTORY=/home/zero/litex/litex/soc/software/libcompiler_rt
LIBBASE_DIRECTORY=/home/zero/litex/litex/soc/software/libbase
LIBFATFS_DIRECTORY=/home/zero/litex/litex/soc/software/libfatfs
LIBLITESPI_DIRECTORY=/home/zero/litex/litex/soc/software/liblitespi
LIBLITEDRAM_DIRECTORY=/home/zero/litex/litex/soc/software/liblitedram
LIBLITEETH_DIRECTORY=/home/zero/litex/litex/soc/software/libliteeth
LIBLITESDCARD_DIRECTORY=/home/zero/litex/litex/soc/software/liblitesdcard
LIBLITESATA_DIRECTORY=/home/zero/litex/litex/soc/software/liblitesata
BIOS_DIRECTORY=/home/zero/litex/litex/soc/software/bios