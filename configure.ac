AC_PREREQ([2.65])
AC_INIT([bala], m4_esyscmd([build-aux/git-version-gen --prefix '' .tarball-version]),
	[https://gitlab.gnome.org/GNOME/bala/issues],
	[bala],
	[https://wiki.gnome.org/Projects/Bala])
AC_CONFIG_SRCDIR([Makefile.am])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_HEADERS(config.h)
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([1.11 dist-xz no-dist-gzip subdir-objects])
AM_MAINTAINER_MODE([enable])

API_VERSION=0.48
PACKAGE_SUFFIX="-$API_VERSION"

BALA_MAJOR_VERSION=`echo $PACKAGE_VERSION | cut -d. -f1 | sed s/[[a-zA-Z\-]].*//g`
BALA_MINOR_VERSION=`echo $PACKAGE_VERSION | cut -d. -f2 | sed s/[[a-zA-Z\-]].*//g`
BALA_MICRO_VERSION=`echo $PACKAGE_VERSION | cut -d. -f3 | sed s/[[a-zA-Z\-]].*//g`
AC_SUBST(BALA_MAJOR_VERSION)
AC_SUBST(BALA_MINOR_VERSION)
AC_SUBST(BALA_MICRO_VERSION)

dnl http://people.gnome.org/~walters/docs/build-api.txt
dnl We don't support separate builddir when building from git
echo \#buildapi-variable-no-builddir >/dev/null

AC_SUBST(API_VERSION)
AC_DEFINE_UNQUOTED(API_VERSION, "$API_VERSION", [Define to the api-version of this package])
AC_SUBST(PACKAGE_SUFFIX)
AC_DEFINE_UNQUOTED(PACKAGE_SUFFIX, "$PACKAGE_SUFFIX", [Define to the suffix of this package])

program_transform_name="s,\$\$,${PACKAGE_SUFFIX},"

AC_SUBST(pkgdatadir, [${datadir}/bala${PACKAGE_SUFFIX}])
AC_SUBST(pkglibdir, [${libdir}/bala${PACKAGE_SUFFIX}])
AC_SUBST(pkgdocdatadir, [${datadir}/baladoc${PACKAGE_SUFFIX}])
AC_SUBST(pkgdoclibdir, [${libdir}/baladoc${PACKAGE_SUFFIX}])

# Checks for programs.
AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_LN_S
AC_PROG_INSTALL
AC_PROG_MKDIR_P

AC_CANONICAL_HOST

# Detect the target system
build_linux=no
case "${host_os}" in
    linux*)
        build_linux=yes
        ;;
    *)
        ;;
esac
AM_CONDITIONAL([HAVE_LINUX], [test "$build_linux" = "yes"])

LT_PREREQ([2.2.6])
LT_INIT([disable-static])
PKG_PROG_PKG_CONFIG([0.21])

AC_PROG_LEX
if test "$LEX" = :; then
	AC_MSG_ERROR([flex not found but required])
fi

AC_CHECK_PROGS(YACC, 'bison -y' byacc yacc, :)
if test "$YACC" = :; then
	AC_MSG_ERROR([bison not found but required])
fi

AC_PATH_PROG(BALAC, balac, balac)
AC_SUBST(BALAC)

BALAC_BOOTSTRAP_REQUIRED=0.39.5.8

AS_IF([test "$BALAC" != balac], [FOUND_BALAC_VERION=`$BALAC --version | sed 's/Bala  *//'`
	AS_VERSION_COMPARE(["$BALAC_BOOTSTRAP_REQUIRED"], ["$FOUND_BALAC_VERION"],
		[enable_boostrap=yes], [enable_boostrap=yes], [enable_boostrap=no])])

BALAFLAGS="$BALAFLAGS --disable-version-header"
if test x$enable_boostrap = xyes; then
	BALAFLAGS="$BALAFLAGS --hide-internal --abi-stability"
fi

AC_ARG_ENABLE(debug, AS_HELP_STRING([--enable-debug], [Enable debug build]), enable_debug=$enableval, enable_debug=no)
if test "$enable_debug" = "yes"; then
	BALAFLAGS="$BALAFLAGS -g"
	CFLAGS="$CFLAGS -g -O0"
fi

AC_SUBST(BALAFLAGS)
AC_SUBST(CFLAGS)
AC_SUBST(CPPFLAGS)
AC_SUBST(LDFLAGS)

AC_ARG_ENABLE(unversioned, AS_HELP_STRING([--disable-unversioned], [Disable unversioned binaries]), enable_unversioned=$enableval, enable_unversioned=yes)
AM_CONDITIONAL(ENABLE_UNVERSIONED, test x$enable_unversioned = xyes)

AC_ARG_ENABLE(coverage, AS_HELP_STRING([--enable-coverage], [Enable coverage analysis]), enable_coverage=$enableval, enable_coverage=no)
AM_CONDITIONAL(ENABLE_COVERAGE, test x$enable_coverage = xyes)

if test "$enable_coverage" = "yes"; then
	COVERAGE_BALAFLAGS="-g"
	COVERAGE_CFLAGS="-fprofile-arcs -ftest-coverage"
	COVERAGE_LIBS="-lgcov"
else
	COVERAGE_BALAFLAGS=
	COVERAGE_CFLAGS=
	COVERAGE_LIBS=
fi
AC_SUBST(COVERAGE_BALAFLAGS)
AC_SUBST(COVERAGE_CFLAGS)
AC_SUBST(COVERAGE_LIBS)


# Check supported compiler flags used in testrunner.sh
TEST_EXTRA_CFLAGS="-Werror=init-self \
-Werror=implicit \
-Werror=pointer-arith \
-Werror=redundant-decls \
-Werror=return-local-addr \
-Werror=return-stack-address \
-Werror=return-type \
-Werror=sequence-point \
-Werror=uninitialized \
-Werror=int-to-pointer-cast \
-Werror=pointer-to-int-cast \
-Werror=compare-distinct-pointer-types \
-Wformat=2 \
-Werror=format-security \
-Werror=format-nonliteral \
-Werror=int-conversion \
-Werror=duplicated-branches \
-Werror=duplicated-cond \
-Werror=declaration-after-statement \
-Werror=maybe-uninitialized \
-Werror=missing-prototypes \
-Werror=strict-prototypes \
-Werror=array-bounds \
-Werror=enum-conversion"

TEST_CFLAGS=
for flag in $TEST_EXTRA_CFLAGS; do
	AX_CHECK_COMPILE_FLAG([$flag],[TEST_CFLAGS="$TEST_CFLAGS $flag"])
done

AC_SUBST(TEST_CFLAGS)


GLIB_REQUIRED=2.48.0
LIBGVC_REQUIRED=2.16

PKG_CHECK_MODULES(GLIB, glib-2.0 >= $GLIB_REQUIRED gobject-2.0 >= $GLIB_REQUIRED)

AC_SUBST(GLIB_CFLAGS)
AC_SUBST(GLIB_LIBS)

PKG_CHECK_MODULES(GMODULE, gmodule-2.0 >= $GLIB_REQUIRED)

AC_SUBST(GMODULE_CFLAGS)
AC_SUBST(GMODULE_LIBS)

AC_ARG_WITH(cgraph, AS_HELP_STRING([--with-cgraph], [Required flag for cross-compilation to define capability of graphviz]), [], with_cgraph=check)
AC_ARG_ENABLE(baladoc, AS_HELP_STRING([--disable-baladoc], [Disable baladoc]), enable_baladoc=$enableval, enable_baladoc=yes)
if test x$enable_baladoc = xyes; then
	PKG_CHECK_MODULES(LIBGVC, libgvc >= $LIBGVC_REQUIRED)
	AC_MSG_CHECKING([for CGRAPH])
	cgraph_tmp_LIBADD="$LIBADD"
	cgraph_tmp_CFLAGS="$CFLAGS"
	LIBADD="$LIBADD $LIBGVC_LIBS"
	CFLAGS="$CFLAGS $LIBGVC_CFLAGS"
	AC_RUN_IFELSE(
		[AC_LANG_SOURCE([
			#include <gvc.h>
			int main(void) {
				#ifdef WITH_CGRAPH
					return 0;
				#else
					return -1;
				#endif
			}
		])], [
			AC_MSG_RESULT([yes])
			BALAFLAGS="$BALAFLAGS -D WITH_CGRAPH"
			have_cgraph=yes
		], [
			AC_MSG_RESULT([no])
			have_cgraph=no
		], [
			if test x$with_cgraph = xcheck; then
				AC_MSG_ERROR([--with-cgraph=yes/no is required for cross-compilation])
			elif test x$with_cgraph = xyes; then
				AC_MSG_RESULT([yes])
				BALAFLAGS="$BALAFLAGS -D WITH_CGRAPH"
				have_cgraph=yes
			else
				AC_MSG_RESULT([no])
				have_cgraph=no
			fi
		]
	)
	LIBADD="$cgraph_tmp_LIBADD"
	CFLAGS="$cgraph_tmp_CFLAGS"
fi
AM_CONDITIONAL(HAVE_CGRAPH, test "$have_cgraph" = "yes")
AM_CONDITIONAL(ENABLE_BALADOC, test x$enable_baladoc = xyes)

AC_PATH_PROG([G_IR_COMPILER], [g-ir-compiler], :)
AM_CONDITIONAL(HAVE_G_IR_COMPILER, test "$G_IR_COMPILER" != :)

AC_PATH_PROG([XSLTPROC], [xsltproc], :)
AM_CONDITIONAL(HAVE_XSLTPROC, test "$XSLTPROC" != :)

AC_CHECK_PROG([WEASYPRINT], [weasyprint], [weasyprint])
AM_CONDITIONAL(HAVE_WEASYPRINT, [test x$WEASYPRINT = xweasyprint])

AC_CHECK_PROG([HELP2MAN], [help2man], [help2man])
AM_CONDITIONAL([HAVE_HELP2MAN], [test x$HELP2MAN = xhelp2man])

m4_ifdef([AM_SILENT_RULES],[AM_SILENT_RULES([yes])])

AC_CONFIG_FILES([Makefile
           libbala.pc
           gee/Makefile
           ccode/Makefile
           bala/Makefile
           codegen/Makefile
           compiler/Makefile
           bapi/Makefile
           tests/Makefile
           tests/fastbapi/Makefile
           tests/girwriter/Makefile
           tests/gtktemplate/Makefile
           doc/Makefile
           doc/manual/Makefile
           doc/manual/version.xml
           gobject-introspection/Makefile
           bapigen/bapigen.pc
           bapigen/Makefile
           bapigen/bala-gen-introspect/Makefile
           bapigen/bala-gen-introspect/bala-gen-introspect
           libbaladoc/baladoc.pc
           libbaladoc/baladoc.deps
           libbaladoc/Makefile
           baladoc/Makefile
           baladoc/doclets/Makefile
           baladoc/doclets/html/Makefile
           baladoc/doclets/devhelp/Makefile
           baladoc/doclets/gtkdoc/Makefile
           baladoc/icons/Makefile
           baladoc/tests/Makefile
])

AC_OUTPUT
