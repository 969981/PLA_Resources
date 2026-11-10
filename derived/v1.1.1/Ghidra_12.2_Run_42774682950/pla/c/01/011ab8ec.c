/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ab8ec; name: FUN_011ab8ec
 */


void FUN_011ab8ec(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  uVar1 = FUN_02c6001c(param_2);
  *(float *)(param_1 + 0x5e8) = (float)uVar1;
  iVar2 = FUN_02c600e8(param_2);
  iVar3 = FUN_02c60024(param_2);
  fVar4 = (float)(uint)(iVar2 - iVar3) / 10.0;
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  *(float *)(param_1 + 0x5ec) = fVar4;
  return;
}


