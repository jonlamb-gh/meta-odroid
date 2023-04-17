# Copyright (C) 2023 Armin Kuster <akuster808@gmail.com>
# Released under the MIT license (see COPYING.MIT for the terms)

require conf/machine/include/soc-family.inc

SERIAL_CONSOLES ?= "1500000;ttyS2"
UBOOT_CONSOLE ?= "console=ttyS2,1500000
