#!/usr/bin/env bash

set -o errexit # set -e # Exit script when a command exits with non-zero status.
set -o nounset # set -u # Exit script on use of an undefined variable.

# The following are not supported by lesser shells
set -o errtrace # set -E # Exit on error inside any functions or sub-shells.
set -o pipefail # Return exit status of the last command in the pipe that exited with a non-zero exit code
