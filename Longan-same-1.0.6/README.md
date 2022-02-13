# Arduino Core for SAME51 CPU

[![Build Status](https://github.com/adafruit/ArduinoCore-samd/workflows/Build/badge.svg)](https://github.com/adafruit/ArduinoCore-samd/actions)

This repository contains the source code and configuration files of the Arduino Core
for Atmel's SAME51 processor.

In particular, this adds support for Deezums Deezigns boards. 

## Bugs or Issues

* AREF must be tied to 3.3V for dac to work. This is a bug in the SAMD51 silicon.
* USB host mode doesn't work yet

If you find a bug you can submit an issue here on github:

https://github.com/deezums/ArduinoCore-same

## License and credits

This core has been developed by Arduino LLC in collaboration with Atmel.

```
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
```
