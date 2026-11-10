/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e8ed08; name: FUN_00e8ed08
 */


undefined8 FUN_00e8ed08(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    return 1;
  case 1:
    return 2;
  case 2:
    return 4;
  case 3:
    return 8;
  case 4:
    return 0x10;
  case 5:
    return 0x20;
  case 6:
    return 0x40;
  case 7:
    return 0x80;
  case 8:
    return 0x100;
  case 9:
    return 0x200;
  case 10:
    return 0x400;
  case 0xb:
    return 0x800;
  case 0xc:
    return 0x1000;
  case 0xd:
    return 0x2000;
  case 0xe:
    return 0x4000;
  case 0xf:
    return 0x8000;
  case 0x21:
    return 0x200000000;
  case 0x22:
    return 0x400000000;
  case 100:
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}


