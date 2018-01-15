
# Potherca BASH -- Includes

Non-code building blocks for BASH scripts.

[![project-stage-badge][project-stage-badge]][project-stage-page]
[![license-badge][license-badge]][license-page]

[license-badge]: https://img.shields.io/badge/License-GPL--3.0-blue.svg
[license-page]: ./LICENSE
[project-stage-badge]: http://img.shields.io/badge/Project%20Stage-Development-yellowgreen.svg
[project-stage-page]: http://bl.ocks.org/potherca/raw/a2ae67caa3863a299ba0/

## Introduction

This repository contains files that hold comments, declarations or other common
non-code lines often used in (my) BASH scripts. Instead of copy/pasting these
lines, this repository offers a way of installing them as a dependecy (using
BPKG). They can then be included from BASH scripts using `source`.

They are meant to serve as building blocks for BASH scripts.

## Installation

This repository can be installed in several ways:

- Using `bpkg`
- Cloning the repository
- Downloading the archive for a given release

### Using bpkg

Available as a [bpkg](http://www.bpkg.io/) package:

    bpkg install 'potherca-bash/includes'

This will install all available files in the `deps/` directory of the project
that `bpkg` has been run in.

### Cloning the repository

    git clone 'git@github.com:potherca-bash/includes.git'

### Downloading the archive

The latest release will always be tagged `latests`. To download the latest archive:

    curl -o 'includes.tar.gz' 'https://github.com/potherca-bash/includes/archive/latest.tar.gz'
    tar -xvzf 'includes.tar.gz'

## Usage

Simply include a file using `source`:

    #!/usr/bin/env bash

    source './deps/src/declare/declare.bash-options.inc'
    source './deps/src/comment/license/comment.license-gpl3.inc'
    source './deps/src/declare/color.inc'
    source './deps/src/declare/exit-codes.inc'

    # ...
    # Script logic goes here
    # ...

This works best when used during development, for production it is advisable to
compile a version from the script that replaces the `source` entries with the
content of the included file(s).

## Development

To make code changes, fork this repository and install the needed dependecies:

    cd './includes'
    bpkg getdeps

Pull/Merge-request are welcomed.

## Motivation

When creating BASH script, I found myself copy/pasting certain lines of comment
or code _over and over_. It seemed more sensible to separate those lines into
separate files and just include the files from other scripts. This repository is
part of that effort. Others can be found at https://github.com/potherca-bash/.

## Colophon

- **Author**: Created by [Potherca](https://pother.ca/).
- **License**: Licensed under the  [GPL-3.0 License](LICENSE) (GNU General Public License v3.0)
- **Website**: https://github.com/potherca-bash/includes
