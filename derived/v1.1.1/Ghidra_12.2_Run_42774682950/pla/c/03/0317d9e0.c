/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317d9e0; name: FUN_0317d9e0
 */


void FUN_0317d9e0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(lVar2 + 0x18);
  uVar1 = FUN_0315d2c4(param_2);
  if (((uVar1 & 1) == 0) && (fVar3 <= fVar4)) {
    FUN_0317da4c(param_2,lVar2);
    FUN_0315ee00(fVar3,param_2,1);
    return;
  }
  return;
}


