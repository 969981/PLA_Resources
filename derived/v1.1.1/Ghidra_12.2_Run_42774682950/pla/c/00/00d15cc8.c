/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d15cc8; name: FUN_00d15cc8
 */


undefined8 FUN_00d15cc8(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = 2;
  switch(param_1) {
  case 1:
  case 8:
  case 9:
  case 10:
  case 0xc:
    return 2;
  case 2:
  case 0xd:
    return 3;
  case 3:
    return 5;
  case 4:
    return 4;
  case 5:
  case 0xe:
    uVar1 = 7;
    break;
  case 7:
    return 8;
  case 0xf:
    return 9;
  case 0x10:
    return 10;
  }
  return uVar1;
}


