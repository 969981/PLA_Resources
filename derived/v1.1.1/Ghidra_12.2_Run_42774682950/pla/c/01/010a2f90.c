/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a2f90; name: FUN_010a2f90
 */


undefined4 FUN_010a2f90(byte param_1)

{
  undefined4 uVar1;
  
  if ((byte)(param_1 - 0x18) < 6) {
    return 0;
  }
  if ((byte)(param_1 - 0x1e) < 4) {
    return 1;
  }
  if (param_1 == 0x22) {
    return 4;
  }
  if ((byte)(param_1 - 0x23) < 7) {
    return 3;
  }
  if ((param_1 & 0xfe) == 0x2c) {
    return 6;
  }
  if ((param_1 & 0xfe) == 0x2a) {
    return 5;
  }
  if (param_1 == 0x2f) {
    return 7;
  }
  uVar1 = 8;
  if ((param_1 & 0xfe) != 0x30) {
    uVar1 = 2;
  }
  return uVar1;
}


