/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d02d0; name: FUN_029d02d0
 */


undefined4 FUN_029d02d0(undefined8 param_1,undefined4 param_2,ulong *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x56;
  switch(param_2) {
  case 1:
    return 0x5c;
  case 2:
    return 0x67;
  case 3:
    return 0x61;
  case 4:
    goto switchD_029d02f4_caseD_4;
  case 5:
    uVar1 = 0x4f;
    if ((*param_3 & 0x3f07) == 0xf01) {
      uVar1 = 0x50;
    }
    return uVar1;
  case 6:
    return 0x3f8;
  case 7:
    return 0x3fd;
  case 8:
    return 0x74;
  case 9:
    return 0x6e;
  default:
    uVar1 = 0xffffffff;
switchD_029d02f4_caseD_4:
    return uVar1;
  case 0xb:
    return 0x6c;
  case 0xd:
    return 0xbd;
  case 0xe:
    return 0xc0;
  case 0xf:
    return 0xc5;
  case 0x10:
    return 0xda;
  case 0x11:
    return 0x11b;
  case 0x13:
    return 0x7c;
  case 0x14:
    return 0xca;
  case 0x15:
    return 0xee;
  case 0x17:
    return 0xf1;
  case 0x2f:
    return 0x403;
  case 0x30:
    return 0x40c;
  case 0x31:
    return 0x405;
  case 0x32:
    return 0x408;
  case 0x33:
    return 0x40a;
  case 0x34:
    return 0x150;
  }
}


