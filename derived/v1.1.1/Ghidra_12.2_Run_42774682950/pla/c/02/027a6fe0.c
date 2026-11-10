/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6fe0; name: FUN_027a6fe0
 */


ulong FUN_027a6fe0(ulong param_1)

{
  switch(param_1 & 0xffffffff) {
  case 0:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x16:
  case 0x1f:
  case 0x5b:
  case 0x5c:
  case 0x62:
  case 99:
    return param_1;
  default:
    return 99;
  }
}


