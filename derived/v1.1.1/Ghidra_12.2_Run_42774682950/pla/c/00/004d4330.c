/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d4330; name: FUN_004d4330
 */


undefined8 FUN_004d4330(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x14:
    return 0x20144;
  case 0x1b:
    return *(undefined8 *)(param_1 + 0x5e0);
  case 0x1c:
    return 0x800;
  case 0x1d:
    return 0x4000;
  case 0x1e:
    return 0x202;
  case 0x1f:
  case 0x2c:
    uVar1 = 1;
    break;
  case 0x20:
    return 0x40;
  }
  return uVar1;
}


