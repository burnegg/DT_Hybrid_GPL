cmd_/home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/drm/.install := perl scripts/headers_install.pl /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux-3.4/include/drm /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/drm mips drm.h drm_fourcc.h drm_mode.h drm_sarea.h exynos_drm.h i810_drm.h i915_drm.h mga_drm.h nouveau_drm.h r128_drm.h radeon_drm.h savage_drm.h sis_drm.h via_drm.h vmwgfx_drm.h; perl scripts/headers_install.pl /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux-3.4/include/drm /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/drm mips ; perl scripts/headers_install.pl /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux-3.4/include/generated/drm /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/drm mips ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/drm/$$F; done; touch /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/drm/.install