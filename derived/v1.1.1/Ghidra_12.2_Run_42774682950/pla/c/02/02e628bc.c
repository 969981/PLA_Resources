/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e628bc; name: FUN_02e628bc
 */


bool FUN_02e628bc(long param_1)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 == 0) ||
     (fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x18)), 0.9 < fVar2 / (float)uVar1)) {
    FUN_02e6298c(param_1);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  return uVar1 != 0;
}


