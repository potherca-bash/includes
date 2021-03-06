#!/usr/bin/env bash

# ==============================================================================
# Restricting user-defined exit codes to the range 64 - 113 (in addition to 0,
# for success) allows for 50 exit codes. The range 114-125 *could* be utilized
# (adding another ten codes) but DO NOT GO BEYOND 126!
# ==============================================================================


# ==============================================================================
# ------------------------------------------------------------------------------
: readonly -i "${EXIT_OK:=0}"
# ==============================================================================


# ==============================================================================
# Generic errors (60 range)
# -----------------------------------------------------------------------------
: readonly -i "${EXIT_UNKNOWN_ERROR_OCCURRED:=64}"
: readonly -i "${EXIT_NOT_ENOUGH_PARAMETERS:=65}"
: readonly -i "${EXIT_INVALID_PARAMETER:=66}"
: readonly -i "${EXIT_DEPENDENCY_MISSING:=67}"
: readonly -i "${EXIT_ENVIRONMENT_VARIABLE_MISSING:=68}"
# ==============================================================================


# ==============================================================================
# File and folder errors (70 range)
# ------------------------------------------------------------------------------
: readonly -i "${EXIT_COULD_NOT_FIND_FILE:=70}"
: readonly -i "${EXIT_COULD_NOT_CREATE_FILE:=71}"
: readonly -i "${EXIT_COULD_NOT_UPDATE_FILE:=72}"
: readonly -i "${EXIT_COULD_NOT_DELETE_FILE:=73}"
: readonly -i "${EXIT_COULD_NOT_MOVE_FILE:=74}"
: readonly -i "${EXIT_COULD_NOT_FIND_DIRECTORY:=75}"
: readonly -i "${EXIT_COULD_NOT_CREATE_DIRECTORY:=76}"
: readonly -i "${EXIT_COULD_NOT_UPDATE_DIRECTORY:=77}"
: readonly -i "${EXIT_COULD_NOT_DELETE_DIRECTORY:=78}"
: readonly -i "${EXIT_COULD_NOT_MOVE_DIRECTORY:=79}"
# ==============================================================================


# ==============================================================================
# Other errors (80 range)
# ------------------------------------------------------------------------------
: readonly -i "${EXIT_COULD_NOT_FIND:=80}"
: readonly -i "${EXIT_NOT_CORRECT_TYPE:=81}"
: readonly -i "${EXIT_NOT_SUPPORTED:=82}"
: readonly -i "${EXIT_COULD_NOT_CREATE:=83}"
: readonly -i "${EXIT_COULD_NOT_UPDATE:=84}"
: readonly -i "${EXIT_COULD_NOT_DELETE:=85}"
: readonly -i "${EXIT_COULD_NOT_MOVE:=86}"
# ==============================================================================


# ==============================================================================
# Credential and validation errors (90 range)
# ------------------------------------------------------------------------------
: readonly -i "${EXIT_VALIDATION_FAILED:=90}"
: readonly -i "${EXIT_CREDENTIALS_MISSING:=91}"
: readonly -i "${EXIT_CREDENTIALS_INVALID:=92}"
# ==============================================================================


# ==============================================================================
# Application specific errors (93-113 range)
# These should be reserved for program specific errors
# : readonly -i "${EXIT_APPLICATION_SPECIFIC_RANGE:=93-113}"
# ==============================================================================


# ==============================================================================
# Exit Codes With Special Meanings
# ------------------------------------------------------------------------------
# : readonly -i "${EXIT_GENERAL_ERROR:=1}"            # Catchall for general errors     Miscellaneous errors, such as 'divide by zero' and other impermissible operations
# : readonly -i "${EXIT_MISUSE_OF_SHELL_BUILTINS:=2}" # Misuse of shell builtins        Missing keyword or command, or permission problem (and diff return code on a failed binary file comparison).
# ------------------------------------------------------------------------------
# : readonly -i "${EXIT_CANNOT_EXECUTE_COMMAND:=126}" # Command invoked cannot execute  Permission problem or command is not an executable
# : readonly -i "${EXIT_COMMAND_NOT_FOUND:=127}"      # "command not found"             Possible problem with $PATH or a typo
# : readonly -i "${EXIT_INVALID_EXIT_ARGUMENT:=128}"  # Invalid argument to exit        exit takes only integer args in the range 0 - 255 (see first footnote)
# ==============================================================================


# ==============================================================================
# Reserved codes (range 3-63 and 114-125 and 129-192)
# ------------------------------------------------------------------------------
# : readonly -i "${EXIT_RESERVED_ERROR_RANGE:=3-63}"
# : readonly -i "${EXIT_RESERVED_ERROR_RANGE:=114-125}"
# : readonly -i "${EXIT_FATAL_ERROR:=129-192}"
# ==============================================================================
