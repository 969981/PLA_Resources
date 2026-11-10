/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030074a0; name: FUN_030074a0
 */


long FUN_030074a0(undefined2 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  switch(*param_1) {
  case 5:
  case 6:
  case 7:
  case 0x14:
    return param_2;
  case 9:
    return param_2 + 0x60;
  case 10:
    return param_2 + 0x20;
  case 0xb:
    return param_2 + 0x40;
  case 0xc:
  case 0xd:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x1a:
    return param_2 + 0x10;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x1d:
    return param_2 + 0x70;
  case 0x11:
    return param_2 + 0x30;
  case 0x12:
  case 0x13:
    lVar1 = param_2 + 0x50;
  }
  return lVar1;
}


