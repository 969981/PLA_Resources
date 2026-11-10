/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002251a0; name: FUN_002251a0
 */


undefined8 FUN_002251a0(uint param_1)

{
  if ((param_1 & 0xffffff00) == 0x2000) {
    switch(param_1) {
    case 0x200b:
    case 0x200e:
    case 0x200f:
    case 0x202a:
    case 0x202b:
    case 0x202c:
    case 0x202d:
    case 0x202e:
    case 0x2060:
      return 0;
    }
    if (param_1 - 0x2066 < 4) {
      return 0;
    }
  }
  return 1;
}


