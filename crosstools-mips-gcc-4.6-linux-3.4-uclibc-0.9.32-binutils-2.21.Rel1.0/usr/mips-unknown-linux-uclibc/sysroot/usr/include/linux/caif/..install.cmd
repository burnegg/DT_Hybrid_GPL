cmd_/home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/caif/.install := perl scripts/headers_install.pl /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux-3.4/include/linux/caif /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/caif mips caif_socket.h if_caif.h; perl scripts/headers_install.pl /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux-3.4/include/linux/caif /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/caif mips ; perl scripts/headers_install.pl /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux-3.4/include/generated/linux/caif /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/caif mips ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/caif/$$F; done; touch /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/caif/.install