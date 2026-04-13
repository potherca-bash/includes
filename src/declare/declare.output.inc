#!/usr/bin/env bash

# ==============================================================================
# Things regarding file descriptors are a bit of a mess...
#
# The most common file descriptors are 0 (stdin), 1 (stdout) and 2 (stderr).
#
# Most often, these are represented by /dev/stdin, /dev/stdout and /dev/stderr.
#
# However, these are not POSIX compliant. POSIX compliant file descriptors are
# represented by &0, &1 and &2. But those cannot be used from a variable.
# (That will just create a file named "&!" or "&2" in the current directory).
#
# There is /proc/self/fd/0, /proc/self/fd/1 and /proc/self/fd/2, but those are
# not available on MacOS.
#
# Thankfully /dev/null *is* defined by POSIX, but that as far as it goes.
# ------------------------------------------------------------------------------
: "${ERROR_OUTPUT:=/dev/stderr}"  # @CHECKME: Or use `&2`?
: "${NORMAL_OUTPUT:=/dev/stdout}" # @CHECKME: Or use `&1`?
: "${SILENCE_OUTPUT:=/dev/null}"
# ==============================================================================
