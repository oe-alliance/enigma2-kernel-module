PKG_NAME="enigma-module"
#PKG_VERSION="10.3"
PKG_REV="1"
#PKG_ARCH="arm"
PKG_LICENSE="nonfree"
PKG_SITE="https://github.com/OpenVisionE2"
PKG_URL=""
PKG_DEPENDS_TARGET="toolchain linux"
PKG_NEED_UNPACK="$LINUX_DEPENDS"
PKG_PRIORITY="optional"
PKG_SECTION="driver"
PKG_SHORTDESC="Enigma kernel module"
PKG_LONGDESC="These package contains Enigma kernel module"
PKG_MAINTAINER="Open Vision developers"

PKG_IS_ADDON="no"
PKG_AUTORECONF="no"

pre_make_target() {
	unset LDFLAGS
}

make_target() {
	if [ -d "$ROOT/$BUILD" ]; then
		if [ -d "$ROOT/$PKG_BUILD" ]; then
			rm -rf "$ROOT/$PKG_BUILD"
		fi

		cp -rf "$PKG_DIR/source" "$ROOT/$PKG_BUILD"
	fi

	cd "$ROOT/$PKG_BUILD/enigma"

	make \
		V=1 \
		ARCH=$TARGET_ARCH \
		KSRC=$(kernel_path) \
		CROSS_COMPILE=$TARGET_PREFIX

	fix_module_depends "enigma.ko"
}

makeinstall_target() {
	mkdir -p "$INSTALL/lib/modules/$(get_module_dir)/$PKG_NAME"
	install -m 0755 *.ko "$INSTALL/lib/modules/$(get_module_dir)/$PKG_NAME"
}
