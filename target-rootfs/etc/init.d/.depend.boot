TARGETS = mountkernfs.sh hostname.sh udev urandom mountall.sh mountall-bootclean.sh hwclock.sh networking mountdevsubfs.sh checkroot.sh mountnfs.sh mountnfs-bootclean.sh checkfs.sh checkroot-bootclean.sh procps bootmisc.sh kmod udev-finish
INTERACTIVE = udev checkroot.sh checkfs.sh
udev: mountkernfs.sh
urandom: mountall.sh mountall-bootclean.sh hwclock.sh
mountall.sh: checkfs.sh checkroot-bootclean.sh
mountall-bootclean.sh: mountall.sh
hwclock.sh: mountdevsubfs.sh
networking: mountkernfs.sh mountall.sh mountall-bootclean.sh urandom procps
mountdevsubfs.sh: mountkernfs.sh udev
checkroot.sh: hwclock.sh mountdevsubfs.sh hostname.sh
mountnfs.sh: mountall.sh mountall-bootclean.sh networking
mountnfs-bootclean.sh: mountall.sh mountall-bootclean.sh mountnfs.sh
checkfs.sh: checkroot.sh
checkroot-bootclean.sh: checkroot.sh
procps: mountkernfs.sh mountall.sh mountall-bootclean.sh udev
bootmisc.sh: mountnfs-bootclean.sh mountall.sh mountall-bootclean.sh mountnfs.sh udev checkroot-bootclean.sh
kmod: checkroot.sh
udev-finish: udev mountall.sh mountall-bootclean.sh
