/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847960; name: FUN_00847960
 */


undefined8 FUN_00847960(undefined2 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  switch(param_1) {
  case 0x2c:
    return 0x20000;
  default:
    uVar1 = 0;
switchD_00847988_caseD_58:
    return uVar1;
  case 0x30:
    return 0x40000;
  case 0x58:
    goto switchD_00847988_caseD_58;
  case 0x65:
    return 0x40;
  case 0x68:
    return 0x80;
  case 0x74:
    return 0x4000000;
  case 0x75:
    return 0x400000;
  case 0x76:
    return 0x800000;
  case 0x77:
    return 0x2000000;
  case 0x7b:
    return 0x8000;
  case 0x7c:
    return 0x100;
  case 0x80:
    return 0x10000000;
  case 0x81:
    return 0x20000000;
  case 0x98:
    return 0x200000;
  case 0xa0:
    return 0x1000000;
  case 0xa4:
    return 0x400;
  case 0xac:
    return 0x8000000;
  case 0xb0:
    return 0x40000000;
  case 0xb4:
    return 0x80000000;
  }
}


