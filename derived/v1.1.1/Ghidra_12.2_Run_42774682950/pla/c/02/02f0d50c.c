/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d50c; name: FUN_02f0d50c
 */


bool FUN_02f0d50c(long param_1)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 == 0) ||
     (fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x10)), 0.9 < fVar2 / (float)uVar1)) {
    FUN_02f0d568(param_1);
    uVar1 = *(uint *)(param_1 + 8);
  }
  return uVar1 != 0;
}


