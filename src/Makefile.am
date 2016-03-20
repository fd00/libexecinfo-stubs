check_PROGRAMS = test test_cpp
test_SOURCES = test.c
test_CPPFLAGS = -I$(top_srcdir)/include
test_LDADD = libexecinfo.la
test_cpp_SOURCES = test_cpp.cpp
test_cpp_CPPFLAGS = -I$(top_srcdir)/include
test_cpp_LDADD = libexecinfo.la
TESTS = $(check_PROGRAMS)

lib_LTLIBRARIES = libexecinfo.la
libexecinfo_la_SOURCES = execinfo.c
libexecinfo_la_CPPFLAGS = -I$(top_srcdir)/include
libexecinfo_la_LDFLAGS = -no-undefined
