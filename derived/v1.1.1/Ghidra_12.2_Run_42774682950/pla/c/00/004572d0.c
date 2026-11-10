/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004572d0; name: FUN_004572d0
 */


uint FUN_004572d0(long param_1)

{
  uint uVar1;
  
  FUN_00456be0();
  uVar1 = *(uint *)(param_1 + 0xe0);
  if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 0xe4) >> 2 & 1) != 0)) {
    if ((uVar1 & 1) != 0) {
      return uVar1 >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      return 4;
    }
    if (((uVar1 >> 3 & 1) != 0) && ((*(byte *)(param_1 + 0xec) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}


