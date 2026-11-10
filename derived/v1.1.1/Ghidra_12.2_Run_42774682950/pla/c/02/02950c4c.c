/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02950c4c; name: FUN_02950c4c
 */


undefined4 FUN_02950c4c(long param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x98) & 7) != 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0xa0) & 7) != 0) {
    return 2;
  }
  if ((*(byte *)(param_1 + 0xa8) & 7) != 0) {
    return 3;
  }
  if ((*(byte *)(param_1 + 0xb0) & 7) != 0) {
    return 4;
  }
  if ((*(byte *)(param_1 + 0xb8) & 7) != 0) {
    return 5;
  }
  if ((*(byte *)(param_1 + 0xc0) & 7) != 0) {
    return 6;
  }
  uVar1 = 0;
  if ((*(byte *)(param_1 + 200) & 7) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


