#!/usr/bin/env bash

# Instead of using a config setting to decide if colors should be used it is
# also possible to remove all color afterward:
#
#     cat declare.color.inc | sed 's/\x1B\[[0-9;]*[JKmsu]//g'

# ==============================================================================
: readonly "${RESET_TEXT:=$(tput sgr0)}"      # turn off all attributes
# ==============================================================================

# Avoid `tput` to mess up output in debug mode (bash -x)
if [[ "$-" == *x* ]]; then
    bRestoreX=true
    set +x
fi

# ==============================================================================
# Background colors
# ------------------------------------------------------------------------------
: readonly "${BACKGROUND_BLACK:=$(tput setab 0)}"
: readonly "${BACKGROUND_BLUE:=$(tput setab 4)}"
: readonly "${BACKGROUND_CYAN:=$(tput setab 6)}"
: readonly "${BACKGROUND_GREEN:=$(tput setab 2)}"
: readonly "${BACKGROUND_MAGENTA:=$(tput setab 5)}"
: readonly "${BACKGROUND_RED:=$(tput setab 1)}"
: readonly "${BACKGROUND_WHITE:=$(tput setab 7)}"
: readonly "${BACKGROUND_YELLOW:=$(tput setab 3)}"
# ==============================================================================

# ==============================================================================
# Foreground colors
# ------------------------------------------------------------------------------
: readonly "${COLOR_BLACK:=$(tput setaf 0)}"
: readonly "${COLOR_BLUE:=$(tput setaf 4)}"
: readonly "${COLOR_CYAN:=$(tput setaf 6)}"
: readonly "${COLOR_GREEN:=$(tput setaf 2)}"
: readonly "${COLOR_MAGENTA:=$(tput setaf 5)}"
: readonly "${COLOR_RED:=$(tput setaf 1)}"
: readonly "${COLOR_WHITE:=$(tput setaf 7)}"
: readonly "${COLOR_YELLOW:=$(tput setaf 3)}"
# ==============================================================================

# ==============================================================================
# Text attributes
# ------------------------------------------------------------------------------
: readonly "${TEXT_BOLD:=$(tput bold)}"       # turn on bold (extra bright) mode
: readonly "${TEXT_DIM:=$(tput dim)}"         # turn on half-bright mode
: readonly "${TEXT_INVERSE:=$(tput rev)}"     # turn on color inverse mode
: readonly "${TEXT_INVISIBLE:=$(tput invis)}" # turn on blank mode (characters invisible)
: readonly "${TEXT_ITALIC:=$(tput sitm)}"     # turn on italic mode
: readonly "${TEXT_UNDERLINE:=$(tput smul)}"  # turn on underline mode
# ==============================================================================

if [[ "${bRestoreX:=false}" == true ]]; then
    bRestoreX=false
    set -x
fi
